#include "user.h"
#include "ui_user.h"
#include "admin.h"
#include <QFile>
#include <QTextStream>
#include <QPixmap>
#include <QIcon>
#include <QMessageBox>
#include <QUrl>
#include <QFileInfo>
#include <QDebug>
#include <QDir>
#include <QCoreApplication>
#include <QHeaderView>
#include <QStandardPaths>
#include <QTime>

user::user(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::user),
    player(new QMediaPlayer(this)),
    audioOutput(new QAudioOutput(this))
{
    ui->setupUi(this);

    setupPlayer();
    setupTable();
    setupConnections();
    loadSongs();

    audioOutput->setVolume(ui->volumeSlider->value() / 100.0);
}

user::~user()
{
    delete player;
    delete audioOutput;
    delete ui;
}

void user::setupPlayer()
{
    player->setAudioOutput(audioOutput);
    player->setLoops(QMediaPlayer::Once);
}

void user::setupTable()
{
    ui->songTableWidget->setColumnCount(3);
    QStringList headers = {"Judul", "Artis", "Durasi"};
    ui->songTableWidget->setHorizontalHeaderLabels(headers);

    ui->songTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->songTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->songTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->songTableWidget->verticalHeader()->setVisible(false);
    ui->songTableWidget->setShowGrid(false);
    ui->songTableWidget->setIconSize(QSize(45, 45));
    ui->songTableWidget->verticalHeader()->setDefaultSectionSize(54);
}

void user::setupConnections()
{
    connect(player, &QMediaPlayer::errorOccurred, this, [](QMediaPlayer::Error error, const QString &errorString){
        QMessageBox::warning(nullptr, "Playback Error", "Tidak bisa memutar lagu: " + errorString);
    });

    connect(player, &QMediaPlayer::durationChanged, this, &user::updateDuration);
    connect(player, &QMediaPlayer::positionChanged, this, &user::updatePosition);

    connect(ui->songTableWidget, &QTableWidget::cellClicked, this, &user::on_songTableWidget_cellClicked);
}

void user::loadSongs()
{
    QString filePath = QCoreApplication::applicationDirPath() + "/songs.txt";

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Tidak dapat membuka file songs.txt");
        return;
    }

    ui->songTableWidget->setRowCount(0);
    QTextStream in(&file);
    int row = 0;

    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split("|");
        if (parts.size() == 4) {
            QString title = parts[0].trimmed();
            QString artist = parts[1].trimmed();
            QString cover = parts[2].trimmed();
            QString path = parts[3].trimmed();

            ui->songTableWidget->insertRow(row);

            QTableWidgetItem* titleItem = new QTableWidgetItem(title);
            QTableWidgetItem* artistItem = new QTableWidgetItem(artist);
            QTableWidgetItem* durationItem = new QTableWidgetItem("00:00");

            QString coverPath = QCoreApplication::applicationDirPath() + "/" + cover;
            QPixmap coverImg;
            if (!coverImg.load(coverPath)) {
                coverImg = QPixmap(":/images/default_cover.png");
            }
            titleItem->setIcon(QIcon(coverImg.scaled(30, 30)));

            titleItem->setData(Qt::UserRole, path);
            titleItem->setData(Qt::UserRole + 1, cover);

            ui->songTableWidget->setItem(row, 0, titleItem);
            ui->songTableWidget->setItem(row, 1, artistItem);
            ui->songTableWidget->setItem(row, 2, durationItem);

            row++;
        }
    }

    file.close();
}

void user::on_songTableWidget_cellClicked(int row, int column)
{
    Q_UNUSED(column);

    QTableWidgetItem* item = ui->songTableWidget->item(row, 0);
    if (item) {
        QString relativePath = item->data(Qt::UserRole).toString();
        QString fullPath = QCoreApplication::applicationDirPath() + "/" + relativePath;

        QFileInfo fileInfo(fullPath);
        if (!fileInfo.exists()) {
            QMessageBox::warning(this, "Error", "File tidak ada: " + fullPath);
            return;
        }

        setCurrentlyPlayingRow(row);
        player->setSource(QUrl::fromLocalFile(fullPath));
        player->play();
        isPlaying = true;
        ui->playPauseButton->setIcon(QIcon(":/images/pause.png"));
    }
}

void user::setCurrentlyPlayingRow(int row)
{
    // Reset previous row
    if (currentRow >= 0) {
        for (int col = 0; col < ui->songTableWidget->columnCount(); col++) {
            QTableWidgetItem* item = ui->songTableWidget->item(currentRow, col);
            if (item) item->setBackground(QBrush(Qt::white));
        }
    }

    // Set new row
    currentRow = row;
    for (int col = 0; col < ui->songTableWidget->columnCount(); col++) {
        QTableWidgetItem* item = ui->songTableWidget->item(currentRow, col);
        if (item) item->setBackground(QBrush(Qt::lightGray));
    }
}

void user::updateDuration(qint64 durationMs)
{
    QTime duration(0, 0, 0);
    duration = duration.addMSecs(durationMs);
    QString durationText = duration.toString("mm:ss");

    if (currentRow >= 0) {
        QTableWidgetItem* item = ui->songTableWidget->item(currentRow, 2);
        if (item) {
            item->setText(durationText);
        }
    }

    ui->progressSlider->setMaximum(durationMs);
}

void user::updatePosition(qint64 position)
{
    ui->progressSlider->setValue(position);

    QTime currentTime(0, 0, 0);
    currentTime = currentTime.addMSecs(position);
    ui->currentTimeLabel->setText(currentTime.toString("mm:ss"));
}

void user::on_playPauseButton_clicked()
{
    if (currentRow < 0) return;

    if (isPlaying) {
        player->pause();
        ui->playPauseButton->setIcon(QIcon(":/images/play.png"));
    } else {
        player->play();
        ui->playPauseButton->setIcon(QIcon(":/images/pause.png"));
    }

    isPlaying = !isPlaying;
}

void user::on_volumeSlider_valueChanged(int value)
{
    audioOutput->setVolume(value / 100.0);
}

void user::on_urutkanButton_clicked()
{
    ui->songTableWidget->sortItems(0, Qt::AscendingOrder);
}

void user::on_hapusButton_clicked()
{
    int row = ui->songTableWidget->currentRow();
    if (row >= 0) {
        if (row == currentRow) {
            player->stop();
            currentRow = -1;
        }

        ui->songTableWidget->removeRow(row);
        simpanDataKeFile();
        QMessageBox::information(this, "Info", "Lagu berhasil dihapus.");
    } else {
        QMessageBox::warning(this, "Peringatan", "Pilih lagu yang ingin dihapus.");
    }
}

void user::simpanDataKeFile()
{
    QString filePath = QCoreApplication::applicationDirPath() + "/songs.txt";

    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Tidak bisa menyimpan ke songs.txt");
        return;
    }

    QTextStream out(&file);
    int rowCount = ui->songTableWidget->rowCount();

    for (int row = 0; row < rowCount; ++row) {
        QString title = ui->songTableWidget->item(row, 0)->text();
        QString artist = ui->songTableWidget->item(row, 1)->text();
        QString path = ui->songTableWidget->item(row, 0)->data(Qt::UserRole).toString();
        QString cover = ui->songTableWidget->item(row, 0)->data(Qt::UserRole + 1).toString();

        out << title << "|" << artist << "|" << cover << "|" << path << "\n";
    }

    file.close();
}

void user::on_backButton_clicked()
{
    Admin *adminWindow = new Admin();
    adminWindow->show();
    this->close();
}
