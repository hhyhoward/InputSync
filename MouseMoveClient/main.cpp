#include <QCoreApplication>
#include <QDebug>
#include <QCursor>
#include <QThread>

#ifdef
#include <Windows.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qDebug()<<"start move";
    for (int i = 0; i < 10000000; i++) {
        QThread::msleep(3);
        SetCursorPos(i % 1000, i % 1000);
    }
    qDebug()<<"move end";

    return a.exec();
}
