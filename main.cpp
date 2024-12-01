#include "loginwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LoginWindow w;

    w.setWindowIcon(QIcon("‪‪C:/Arquivos/bot.ico"));
    w.show();
    return a.exec();
}
