#ifndef CREATERFILESPAGE_H
#define CREATERFILESPAGE_H

#include <QMainWindow>
#include <vector>

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
    bool checkBoxActivate(QString);
    std::vector<std::string> splitString(const std::string& str, const std::string& delimiter);
    void deleteLoopFiles(std::vector<std::string>);
    void createLoopFiles(std::vector<std::string>);
private slots:
    void on_create_clicked();

    void on_delete_btn_clicked();

    void on_pushButton_clicked();

    void on_btnAction_clicked();

private:
    Ui::CreaterFilesPage *ui;
    int nextY;
};

#endif // CREATERFILESPAGE_H
