#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "admin.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    QPixmap logo(":/img/logo.png");
    ui->label->setPixmap(logo);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_loginButton_clicked() {
    QString username = ui->usernameLineEdit->text();
    QString password = ui->passwordLineEdit->text();

    if (username == "admin" && password == "123") {
        Admin *adminWindow = new Admin();
        adminWindow->show();
        this->close();
    } else {
        QMessageBox::warning(this, "Login Gagal", "Username atau password salah!");
    }
}
