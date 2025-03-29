#include "mainwindow.h"
#include "save_load_users.h"

#include <QApplication>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow W;
    W.show();

    return a.exec();
}
