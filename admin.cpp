#include "admin.h"
#include "ui_admin.h"
#include "mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QPixmap>
#include <QHeaderView>
#include <QFont>
#include "user.h"

Admin::Admin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);

    ui->playlistTableWidget->setColumnCount(2);
    QStringList headers{"Nama Lagu", "Nama Artis"};
    ui->playlistTableWidget->setHorizontalHeaderLabels(headers);

    ui->playlistTableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->playlistTableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->playlistTableWidget->verticalHeader()->setVisible(false);

    QFont font = ui->playlistTableWidget->font();
    font.setPointSize(10);
    ui->playlistTableWidget->setFont(font);
}

Admin::~Admin() {
    delete ui;
}

void Admin::on_tambahButton_clicked() {
    QString nama = ui->namaLaguLineEdit->text().trimmed();
    QString artis = ui->namaArtisLineEdit->text().trimmed();
    QString coverPath = ui->coverLineEdit->text().trimmed();
    QString laguPath = ui->laguLineEdit->text().trimmed();

    if (nama.isEmpty() || artis.isEmpty() || coverPath.isEmpty() || laguPath.isEmpty()) {
        QMessageBox::warning(this, "Peringatan", "Lengkapi semua data terlebih dahulu!");
        return;
    }

    QString coverFileName = QFileInfo(coverPath).fileName();
    QString laguFileName = QFileInfo(laguPath).fileName();

    QString appDir = QCoreApplication::applicationDirPath();
    QString targetCover = appDir + "/" + coverFileName;
    QString targetLagu = appDir + "/" + laguFileName;

    if (!QFile::exists(targetCover)) {
        if (!QFile::copy(coverPath, targetCover)) {
            QMessageBox::critical(this, "Error", "Gagal menyalin cover ke folder aplikasi.");
            return;
        }
    }
    if (!QFile::exists(targetLagu)) {
        if (!QFile::copy(laguPath, targetLagu)) {
            QMessageBox::critical(this, "Error", "Gagal menyalin file lagu ke folder aplikasi.");
            return;
        }
    }

    int row = ui->playlistTableWidget->rowCount();
    ui->playlistTableWidget->insertRow(row);
    ui->playlistTableWidget->setItem(row, 0, new QTableWidgetItem(nama));
    ui->playlistTableWidget->setItem(row, 1, new QTableWidgetItem(artis));

    QFile file(appDir + "/songs.txt");
    if (file.open(QIODevice::Append | QIODevice::Text)) {
        QTextStream out(&file);
        out << nama << "|" << artis << "|" << coverFileName << "|" << laguFileName << "\n";
        file.close();
        QMessageBox::information(this, "Sukses", "Lagu berhasil ditambahkan.");
    } else {
        QMessageBox::critical(this, "Error", "Gagal menyimpan ke songs.txt.");
    }

    ui->namaLaguLineEdit->clear();
    ui->namaArtisLineEdit->clear();
    ui->coverLineEdit->clear();
    ui->laguLineEdit->clear();
}

void Admin::on_urutkanButton_clicked() {
    selectionSort();
}

void Admin::on_logoutButton_clicked() {
    MainWindow *login = new MainWindow();
    login->show();
    this->close();
}

void Admin::selectionSort() {
    int rowCount = ui->playlistTableWidget->rowCount();
    if(rowCount == 0) return;

    for (int i = 0; i < rowCount - 1; ++i) {
        int minIdx = i;
        for (int j = i + 1; j < rowCount; ++j) {
            QTableWidgetItem* itemJ = ui->playlistTableWidget->item(j, 0);
            QTableWidgetItem* itemMin = ui->playlistTableWidget->item(minIdx, 0);

            if(itemJ && itemMin) {
                if (itemJ->text().toLower() < itemMin->text().toLower()) {
                    minIdx = j;
                }
            }
        }

        for (int col = 0; col < 3; ++col) {
            QTableWidgetItem* itemI = ui->playlistTableWidget->item(i, col);
            QTableWidgetItem* itemMin = ui->playlistTableWidget->item(minIdx, col);

            if(itemI && itemMin) {
                QString temp = itemI->text();
                itemI->setText(itemMin->text());
                itemMin->setText(temp);
            }
        }
    }
}

void Admin::on_hapusButton_clicked() {
    int row = ui->playlistTableWidget->currentRow();
    if (row >= 0) {
        ui->playlistTableWidget->removeRow(row);
    } else {
        QMessageBox::warning(this, "Peringatan", "Pilih baris yang ingin dihapus.");
    }
}

void Admin::on_pilihGambarButton_clicked() {
    QString fileName = QFileDialog::getOpenFileName(this, "Pilih Gambar Cover", "",
                                                    "Images (*.png *.jpg *.jpeg);;All Files (*)");
    if (!fileName.isEmpty()) {
        ui->coverLineEdit->setText(fileName);
    }
}

void Admin::on_pilihLaguButton_clicked() {
    QString fileName = QFileDialog::getOpenFileName(this, "Pilih Lagu", "",
                                                    "Audio (*.mp3 *.wav);;All Files (*)");
    if (!fileName.isEmpty()) {
        ui->laguLineEdit->setText(fileName);
    }
}

void Admin::on_keUserButton_clicked() {
    mainWindow = new user();
    mainWindow->show();
    this->hide();
}
