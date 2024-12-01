#ifndef CREATERFILESPAGE_H
#define CREATERFILESPAGE_H

#include <QMainWindow>

namespace Ui {
class CreaterFilesPage;
}

class CreaterFilesPage : public QMainWindow
{
    Q_OBJECT

public:
    explicit CreaterFilesPage(QWidget *parent = nullptr);
    ~CreaterFilesPage();
    bool createFile(QString);
    bool createDir(QString);
    bool deleteFile(QString);
    bool deleteDir(QString);
    void writeStatusBar(QString, QString);
private slots:
    void on_create_clicked();

    void on_delete_btn_clicked();

private:
    Ui::CreaterFilesPage *ui;
};

#endif // CREATERFILESPAGE_H
