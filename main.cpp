#include "createrFilesPage.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // a.setStyleSheet("QWidget {"
    //                 "background-color: #808080;"  // Cor de fundo suave (cinza claro)
    //                 "}");
    a.setWindowIcon(QIcon(":/icons/Folder-icon.ico"));
    CreaterFilesPage w;
    w.setWindowTitle("Create Files");
    w.show();
    return a.exec();
}
