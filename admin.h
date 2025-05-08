#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>
#include <QMediaPlayer>
#include <QAudioOutput>

class user;

namespace Ui {
class Admin;
}

class Admin : public QWidget
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

private slots:
    void on_tambahButton_clicked();
    void on_urutkanButton_clicked();
    void on_hapusButton_clicked();
    void on_pilihGambarButton_clicked();
    void on_pilihLaguButton_clicked();
    void on_logoutButton_clicked();
    void on_keUserButton_clicked();

private:
    Ui::Admin *ui;
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
    user *mainWindow = nullptr;

    void selectionSort();
    void saveToFile();
    void loadFromFile();
    void setupTable();
    bool validateInput(const QString& nama, const QString& artis,
                       const QString& cover, const QString& lagu);
};

#endif // ADMIN_H
