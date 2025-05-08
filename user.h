#ifndef USER_H
#define USER_H

#include <QWidget>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QTableWidgetItem>

namespace Ui {
class user;
}

class user : public QWidget
{
    Q_OBJECT

public:
    explicit user(QWidget *parent = nullptr);
    ~user();

private slots:
    void on_songTableWidget_cellClicked(int row, int column);
    void on_backButton_clicked();
    void on_urutkanButton_clicked();
    void on_hapusButton_clicked();
    void updateDuration(qint64 durationMs);
    void updatePosition(qint64 position);
    void on_playPauseButton_clicked();
    void on_volumeSlider_valueChanged(int value);

private:
    Ui::user *ui;
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
    int currentRow = -1;
    bool isPlaying = false;

    void loadSongs();
    void simpanDataKeFile();
    void setupTable();
    void setupPlayer();
    void setupConnections();
    void setCurrentlyPlayingRow(int row);
};

#endif // USER_H
