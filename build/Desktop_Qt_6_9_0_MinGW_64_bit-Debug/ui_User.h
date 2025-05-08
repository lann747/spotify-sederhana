/********************************************************************************
** Form generated from reading UI file 'user.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USER_H
#define UI_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_user
{
public:
    QPushButton *backButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *playPauseButton;
    QTableWidget *songTableWidget;
    QPushButton *urutkanButton;
    QPushButton *hapusButton;
    QSlider *volumeSlider;
    QSlider *progressSlider;
    QLabel *currentTimeLabel;

    void setupUi(QWidget *user)
    {
        if (user->objectName().isEmpty())
            user->setObjectName("user");
        user->resize(1280, 720);
        backButton = new QPushButton(user);
        backButton->setObjectName("backButton");
        backButton->setGeometry(QRect(160, 680, 83, 29));
        QFont font;
        font.setBold(true);
        backButton->setFont(font);
        backButton->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A;\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        label = new QLabel(user);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 251, 721));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/Frame 626.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(user);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(250, -10, 1061, 51));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);"));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/img/Frame 604.png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(user);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 40, 1061, 21));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(56, 56, 56);"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/Frame 604.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(user);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(250, 60, 1031, 251));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/playlist2.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(user);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(250, 300, 1031, 81));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(56, 56, 56);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/Frame 604.png")));
        label_5->setScaledContents(true);
        playPauseButton = new QPushButton(user);
        playPauseButton->setObjectName("playPauseButton");
        playPauseButton->setGeometry(QRect(240, 300, 121, 81));
        playPauseButton->setAutoFillBackground(false);
        playPauseButton->setStyleSheet(QString::fromUtf8("image: url(:/img/play.png);\n"
"\n"
"    background-color: transparent;\n"
"    border: none;"));
        playPauseButton->setIconSize(QSize(15, 11));
        songTableWidget = new QTableWidget(user);
        songTableWidget->setObjectName("songTableWidget");
        songTableWidget->setGeometry(QRect(250, 380, 1031, 341));
        songTableWidget->setColumnCount(0);
        songTableWidget->horizontalHeader()->setVisible(true);
        songTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        songTableWidget->horizontalHeader()->setProperty("showSortIndicator", QVariant(false));
        urutkanButton = new QPushButton(user);
        urutkanButton->setObjectName("urutkanButton");
        urutkanButton->setGeometry(QRect(1080, 320, 83, 29));
        urutkanButton->setFont(font);
        urutkanButton->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A;\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        hapusButton = new QPushButton(user);
        hapusButton->setObjectName("hapusButton");
        hapusButton->setGeometry(QRect(1180, 320, 83, 29));
        hapusButton->setFont(font);
        hapusButton->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A;\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        volumeSlider = new QSlider(user);
        volumeSlider->setObjectName("volumeSlider");
        volumeSlider->setGeometry(QRect(20, 620, 160, 18));
        volumeSlider->setOrientation(Qt::Orientation::Horizontal);
        progressSlider = new QSlider(user);
        progressSlider->setObjectName("progressSlider");
        progressSlider->setGeometry(QRect(340, 320, 160, 18));
        progressSlider->setOrientation(Qt::Orientation::Horizontal);
        currentTimeLabel = new QLabel(user);
        currentTimeLabel->setObjectName("currentTimeLabel");
        currentTimeLabel->setGeometry(QRect(340, 350, 63, 20));
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        backButton->raise();
        playPauseButton->raise();
        songTableWidget->raise();
        urutkanButton->raise();
        hapusButton->raise();
        volumeSlider->raise();
        progressSlider->raise();
        currentTimeLabel->raise();

        retranslateUi(user);

        QMetaObject::connectSlotsByName(user);
    } // setupUi

    void retranslateUi(QWidget *user)
    {
        user->setWindowTitle(QCoreApplication::translate("user", "Form", nullptr));
        backButton->setText(QCoreApplication::translate("user", "Back", nullptr));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        playPauseButton->setText(QString());
        urutkanButton->setText(QCoreApplication::translate("user", "Urutkan", nullptr));
        hapusButton->setText(QCoreApplication::translate("user", "Hapus", nullptr));
        currentTimeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class user: public Ui_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USER_H
