#include "resultpage.h"
#include "global_data.h"
#include "ui_resultpage.h"
#include <QStandardItem>

ResultPage::ResultPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ResultPage),
    modelComplete(new QStringListModel(this)),
    modelFailed(new QStringListModel(this))
{
    ui->setupUi(this);
    this->setWindowIcon(QIcon(":/icons/Folder-icon.ico"));
    this->setWindowTitle("Result");
    ui->listView_complete->setModel(modelComplete);
    ui->listView_not_complete->setModel(modelFailed);

    QStringList qStringListMakeAction = convertToQStringList(globalVectorMakection);
    QStringList qStringListNotMakeAction = convertToQStringList(globalVectorNotMakeAction);

    modelComplete->setStringList(qStringListMakeAction);
    modelFailed->setStringList(qStringListNotMakeAction);
}

QStringList ResultPage::convertToQStringList(const std::vector<std::string>& list) {
    QStringList listNew;
    for (const auto& item : list) {
        listNew.append( QString::fromStdString(item));
    }
    return listNew;
}

ResultPage::~ResultPage()
{
    delete ui;
}
