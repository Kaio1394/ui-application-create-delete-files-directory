#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "createrfilespage.h"
#include "QMessageBox"

LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    this->setFixedSize(400, 300);
    ui->setupUi(this);
}

LoginWindow::~LoginWindow()
{
    delete ui;
}

bool LoginWindow::VerifyLogin(QString user, QString pass){
    if(user == "123" && pass == "123"){
        return true;
    }
    return false;
}


void LoginWindow::on_pushButton_clicked()
{
    CreaterFilesPage* filePage = new CreaterFilesPage();
    // auto user = ui->user->text();
    // auto pass = ui->pass->text();
    // bool loginCorrect = VerifyLogin(user, pass);
    this->close();
    filePage->show();
    // if(loginCorrect){
    //     this->close();
    //     filePage->show();
    // }
    // else{
    //     ui->statusbar->setStyleSheet("color: red;");
    //     ui->statusbar->showMessage("Falha no login!");
    //     ui->user->clear();
    //     ui->pass->clear();
    // }
}

