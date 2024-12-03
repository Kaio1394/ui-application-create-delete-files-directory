#include "createrfilespage.h"
#include "ui_createrfilespage.h"
#include "QDir"
#include "QFile"
#include "QMessageBox"
#include <vector>
#include <regex>

CreaterFilesPage::CreaterFilesPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CreaterFilesPage)
{
    this->setFixedSize(400, 300);
    ui->setupUi(this);
}

CreaterFilesPage::~CreaterFilesPage()
{
    delete ui;
}

bool CreaterFilesPage::checkBoxActivate(QString textComboBox){
    QString currentTextComboBox = ui->comboBoxOpt->currentText();
    if(currentTextComboBox == textComboBox){
        return true;
    }
    return false;
}

bool CreaterFilesPage::createFile(QString path){
    QFile file(path);
    if (!file.open(QIODevice::WriteOnly)) {
        return false;
    }

    file.close();
    return true;
}

bool CreaterFilesPage::createDir(QString path){
    QDir dir;

    if (dir.exists(path)) {
        return true;
    }

    if (dir.mkpath(path)) {
        return true;
    } else {
        return false;
    }
}

bool CreaterFilesPage::deleteFile(QString path){
    QFile file(path);
    if (file.exists()) {
        if (file.remove()) {
            return true;
        } else {
            return false;
        }
    } else {
        return false;
    }
}
bool CreaterFilesPage::deleteDir(QString path){
    QDir dir(path);

    if (dir.exists(path)) {
        dir.rmdir(path);
        return true;
    }
    return false;
}

void CreaterFilesPage::writeStatusBar(QString text, QString color){
    ui->statusbar->setStyleSheet("color: " + color + ";");
    ui->statusbar->showMessage(text);
}

void CreaterFilesPage::on_create_clicked()
{
    bool created = false;
    QString path = ui->path->text();
    bool rdbFile = ui->radioButton_File->isChecked();
    bool rdbDir = ui->radioButton_Dir->isChecked();

    if(path == ""){
        writeStatusBar("Caminho do arquivo está vazio!", "red");
    }
    else{
        if(rdbFile){
            created = createFile(path);
        }
        else if(rdbDir){
            created = createDir(path);
        }
        else{
            writeStatusBar("Marque um dos radio buttom.", "red");
        }
        if(!created){
            writeStatusBar("Arquivo/diretório[" + path +"] não foi criado com sucesso!", "red");
        }
        else{
            writeStatusBar("Arquivo/diretório[" + path +"] foi criado com sucesso!", "green");
        }
    }
}


void CreaterFilesPage::on_delete_btn_clicked()
{
    bool created = false;
    QString path = ui->path_delete->text();
    bool rdbFile = ui->radioButton_File_delete->isChecked();
    bool rdbDir = ui->radioButton_Dir_delete->isChecked();

    if(path == ""){
        writeStatusBar("Caminho do arquivo está vazio!", "red");
    }
    else{
        if(rdbFile){
            created = deleteFile(path);
        }
        else if(rdbDir){
            created = deleteDir(path);
        }
        else{
            writeStatusBar("Marque um dos radio buttom.", "red");
        }
        if(!created){
            writeStatusBar("Arquivo/diretório[" + path +"] não foi deletado com sucesso!", "red");
        }
        else{
            writeStatusBar("Arquivo/diretório[" + path +"] foi deletado com sucesso!", "green");
        }
    }
}


void CreaterFilesPage::on_pushButton_clicked()
{
    QWidget *thirdTab = ui->tabWidget->widget(2);

    if (thirdTab) {
        QLineEdit *newLineEdit = new QLineEdit(thirdTab);

        newLineEdit->setGeometry(10, nextY, thirdTab->width() - 20, 30);

        nextY += 40;

        newLineEdit->show();
    } else {
        qDebug() << "Terceira aba não encontrada.";
    }
}

std::vector<std::string> CreaterFilesPage::splitString(const std::string& str, const std::string& delimiter) {
    std::regex re(delimiter);
    std::sregex_token_iterator begin(str.begin(), str.end(), re, -1);
    std::sregex_token_iterator end;

    return std::vector<std::string>(begin, end);
}

void CreaterFilesPage::on_btnAction_clicked()
{
    QString editText = ui->paths->toPlainText();
    if(editText.isEmpty()){
        writeStatusBar("Caminho contendo os paths está vazio!", "red");
    }

    std::vector<std::string> vectorSplit = splitString(editText.toStdString(), "\n");
    if(checkBoxActivate("Create")){

    }else{

    }
}

