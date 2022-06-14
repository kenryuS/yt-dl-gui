#include "mainwindow.h"

#include <QApplication>
#include <QDebug>
#include <QSysInfo>

void compileTime()
{
#ifdef Q_OS_MACOS
    qDebug() << "This is Mac";
#endif

#ifdef Q_OS_LINUX
    qDebug() << "This is Linux";
#endif

#ifdef Q_OS_WIN
    qDebug() << "This is Windows";
#endif
}

void runTime()
{
    QSysInfo info;
    qInfo() << "Info: " << info.prettyProductName();
}

int main(int argc, char *argv[])
{
    compileTime();
    runTime();

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
