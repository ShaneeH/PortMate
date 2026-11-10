#include "mainwindow.h"

#include <QApplication>
#include "services/memoryservice.h"

int main(int argc, char *argv[])
{
    memoryservice mem;
    mem.getRam();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return QApplication::exec();
}
