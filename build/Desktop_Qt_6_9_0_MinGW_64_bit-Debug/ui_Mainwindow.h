/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
    QPushButton *loginButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1280, 720);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(10, 10, 10, 255), stop:0.13615 rgba(32, 32, 32, 255), stop:0.286385 rgba(48, 48, 48, 255), stop:0.43662 rgba(54, 54, 54, 255), stop:0.568075 rgba(79, 79, 79, 255), stop:0.713615 rgba(92, 92, 92, 255), stop:0.830986 rgba(101, 101, 101, 255), stop:0.943662 rgba(86, 86, 86, 255));"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(440, 60, 400, 600));
        widget->setStyleSheet(QString::fromUtf8("background-color: #121212;\n"
"border-radius: 16px;"));
        usernameLineEdit = new QLineEdit(widget);
        usernameLineEdit->setObjectName("usernameLineEdit");
        usernameLineEdit->setGeometry(QRect(40, 170, 320, 45));
        QFont font;
        font.setPointSize(16);
        usernameLineEdit->setFont(font);
        usernameLineEdit->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A;\n"
"color: white;\n"
"padding: 10px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        usernameLineEdit->setCursorMoveStyle(Qt::CursorMoveStyle::VisualMoveStyle);
        usernameLineEdit->setClearButtonEnabled(false);
        passwordLineEdit = new QLineEdit(widget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setGeometry(QRect(40, 270, 320, 45));
        passwordLineEdit->setFont(font);
        passwordLineEdit->setStyleSheet(QString::fromUtf8("background-color: #2A2A2A;\n"
"color: white;\n"
"padding: 10px;\n"
"border: none;\n"
"border-radius: 6px;\n"
""));
        loginButton = new QPushButton(widget);
        loginButton->setObjectName("loginButton");
        loginButton->setGeometry(QRect(40, 350, 320, 50));
        loginButton->setFont(font);
        loginButton->setStyleSheet(QString::fromUtf8("background-color: rgb(29, 185, 84);\n"
"color: rgb(255,255,255);"));
        label = new QLabel(widget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 271, 81));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setPixmap(QPixmap(QString::fromUtf8(":/img/logo.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 140, 121, 20));
        QFont font1;
        font1.setPointSize(14);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(138, 138, 138);"));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 240, 121, 20));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(138, 138, 138);"));
        usernameLineEdit->raise();
        loginButton->raise();
        passwordLineEdit->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
