/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QLineEdit *namaLaguLineEdit;
    QPushButton *pilihLaguButton;
    QTableWidget *playlistTableWidget;
    QLineEdit *laguLineEdit;
    QLineEdit *namaArtisLineEdit;
    QPushButton *hapusButton;
    QLabel *label_2;
    QPushButton *logoutButton;
    QPushButton *pilihGambarButton;
    QLineEdit *coverLineEdit;
    QPushButton *tambahButton;
    QPushButton *keUserButton;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label;

    void setupUi(QWidget *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName("Admin");
        Admin->resize(1280, 720);
        Admin->setStyleSheet(QString::fromUtf8(""));
        namaLaguLineEdit = new QLineEdit(Admin);
        namaLaguLineEdit->setObjectName("namaLaguLineEdit");
        namaLaguLineEdit->setGeometry(QRect(390, 400, 221, 31));
        namaLaguLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        pilihLaguButton = new QPushButton(Admin);
        pilihLaguButton->setObjectName("pilihLaguButton");
        pilihLaguButton->setGeometry(QRect(510, 550, 101, 31));
        QFont font;
        font.setBold(false);
        pilihLaguButton->setFont(font);
        pilihLaguButton->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A;\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        playlistTableWidget = new QTableWidget(Admin);
        if (playlistTableWidget->columnCount() < 2)
            playlistTableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        playlistTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        playlistTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        playlistTableWidget->setObjectName("playlistTableWidget");
        playlistTableWidget->setGeometry(QRect(850, 330, 251, 261));
        playlistTableWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(15, 15, 15, 255), stop:0.36 rgba(34, 34, 34, 255), stop:0.6 rgba(53, 53, 53, 255), stop:0.75 rgba(60, 60, 60, 255), stop:0.793427 rgba(67, 67, 67, 255), stop:0.86 rgba(85, 85, 85, 255), stop:0.935 rgba(98, 98, 98, 255));\n"
"color: white;"));
        playlistTableWidget->setVerticalScrollMode(QAbstractItemView::ScrollMode::ScrollPerItem);
        playlistTableWidget->setHorizontalScrollMode(QAbstractItemView::ScrollMode::ScrollPerItem);
        playlistTableWidget->setShowGrid(false);
        playlistTableWidget->setSortingEnabled(false);
        playlistTableWidget->setWordWrap(true);
        playlistTableWidget->setCornerButtonEnabled(true);
        playlistTableWidget->setColumnCount(2);
        playlistTableWidget->horizontalHeader()->setVisible(true);
        playlistTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        playlistTableWidget->horizontalHeader()->setMinimumSectionSize(34);
        playlistTableWidget->horizontalHeader()->setHighlightSections(true);
        playlistTableWidget->horizontalHeader()->setStretchLastSection(false);
        laguLineEdit = new QLineEdit(Admin);
        laguLineEdit->setObjectName("laguLineEdit");
        laguLineEdit->setGeometry(QRect(270, 550, 221, 31));
        laguLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        namaArtisLineEdit = new QLineEdit(Admin);
        namaArtisLineEdit->setObjectName("namaArtisLineEdit");
        namaArtisLineEdit->setGeometry(QRect(390, 450, 221, 31));
        namaArtisLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        hapusButton = new QPushButton(Admin);
        hapusButton->setObjectName("hapusButton");
        hapusButton->setGeometry(QRect(890, 600, 171, 41));
        QFont font1;
        font1.setBold(true);
        hapusButton->setFont(font1);
        hapusButton->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A;\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        label_2 = new QLabel(Admin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 330, 241, 31));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        label_2->setFont(font2);
        label_2->setAutoFillBackground(false);
        label_2->setStyleSheet(QString::fromUtf8("background-color : transparent;"));
        logoutButton = new QPushButton(Admin);
        logoutButton->setObjectName("logoutButton");
        logoutButton->setGeometry(QRect(260, 680, 100, 31));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        logoutButton->setFont(font3);
        logoutButton->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A;\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        pilihGambarButton = new QPushButton(Admin);
        pilihGambarButton->setObjectName("pilihGambarButton");
        pilihGambarButton->setGeometry(QRect(510, 500, 101, 31));
        pilihGambarButton->setFont(font);
        pilihGambarButton->setAutoFillBackground(false);
        pilihGambarButton->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A;\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        coverLineEdit = new QLineEdit(Admin);
        coverLineEdit->setObjectName("coverLineEdit");
        coverLineEdit->setGeometry(QRect(270, 500, 221, 31));
        coverLineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(63, 63, 63);\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        tambahButton = new QPushButton(Admin);
        tambahButton->setObjectName("tambahButton");
        tambahButton->setGeometry(QRect(340, 600, 200, 40));
        tambahButton->setFont(font1);
        tambahButton->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A;\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        keUserButton = new QPushButton(Admin);
        keUserButton->setObjectName("keUserButton");
        keUserButton->setGeometry(QRect(1190, 680, 83, 29));
        keUserButton->setFont(font1);
        keUserButton->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A;\n"
"color: white;\n"
"padding: 6px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        label_3 = new QLabel(Admin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(0, 0, 251, 721));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/img/Frame 626.png")));
        label_3->setScaledContents(true);
        label_4 = new QLabel(Admin);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, -10, 1061, 51));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);"));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/img/Frame 604.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(Admin);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 40, 1061, 21));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(56, 56, 56);"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/img/Frame 604.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(Admin);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, 300, 1061, 421));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 36, 36);"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/img/Frame 604.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(Admin);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(270, 400, 131, 31));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        label_7->setFont(font4);
        label_7->setAutoFillBackground(false);
        label_7->setStyleSheet(QString::fromUtf8("background-color : transparent;"));
        label_8 = new QLabel(Admin);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(270, 450, 131, 31));
        label_8->setFont(font4);
        label_8->setAutoFillBackground(false);
        label_8->setStyleSheet(QString::fromUtf8("background-color : transparent;"));
        label = new QLabel(Admin);
        label->setObjectName("label");
        label->setGeometry(QRect(250, 60, 1031, 251));
        label->setFocusPolicy(Qt::FocusPolicy::NoFocus);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/playlist2.png")));
        label->setScaledContents(true);
        label->raise();
        label_5->raise();
        label_4->raise();
        label_6->raise();
        namaLaguLineEdit->raise();
        pilihLaguButton->raise();
        playlistTableWidget->raise();
        laguLineEdit->raise();
        namaArtisLineEdit->raise();
        hapusButton->raise();
        label_2->raise();
        pilihGambarButton->raise();
        coverLineEdit->raise();
        tambahButton->raise();
        keUserButton->raise();
        label_7->raise();
        label_8->raise();
        label_3->raise();
        logoutButton->raise();

        retranslateUi(Admin);

        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QWidget *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Form", nullptr));
#if QT_CONFIG(accessibility)
        namaLaguLineEdit->setAccessibleName(QString());
#endif // QT_CONFIG(accessibility)
#if QT_CONFIG(accessibility)
        namaLaguLineEdit->setAccessibleDescription(QString());
#endif // QT_CONFIG(accessibility)
        namaLaguLineEdit->setPlaceholderText(QCoreApplication::translate("Admin", "Nama Lagu", nullptr));
        pilihLaguButton->setText(QCoreApplication::translate("Admin", "Pilih Lagu", nullptr));
        QTableWidgetItem *___qtablewidgetitem = playlistTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Admin", "Nama Lagu", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = playlistTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Admin", "Nama Artis", nullptr));
        laguLineEdit->setText(QString());
        laguLineEdit->setPlaceholderText(QCoreApplication::translate("Admin", "Lagu", nullptr));
        namaArtisLineEdit->setPlaceholderText(QCoreApplication::translate("Admin", "Nama Artis", nullptr));
        hapusButton->setText(QCoreApplication::translate("Admin", "Hapus", nullptr));
        label_2->setText(QCoreApplication::translate("Admin", "TAMBAH LAGU", nullptr));
        logoutButton->setText(QCoreApplication::translate("Admin", "Logout", nullptr));
        pilihGambarButton->setText(QCoreApplication::translate("Admin", "Pilih Gambar", nullptr));
        coverLineEdit->setPlaceholderText(QCoreApplication::translate("Admin", "Gambar", nullptr));
        tambahButton->setText(QCoreApplication::translate("Admin", "Tambah", nullptr));
        keUserButton->setText(QCoreApplication::translate("Admin", "User", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("Admin", "Nama Lagu", nullptr));
        label_8->setText(QCoreApplication::translate("Admin", "Nama Artis", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
