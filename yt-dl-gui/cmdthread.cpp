#include "cmdthread.h"

cmdThread::cmdThread(QObject *parent)
    : QThread{parent}
{

}

void cmdThread::run(QString cmd)
{
    QProcess proc;
    proc.startCommand(cmd);
    bool returnBool = false;
    while (returnBool == false)
    {
        if(this->Stop) break;
        returnBool = proc.waitForFinished(500);
        QString output = proc.readAll();
        if (output.isEmpty())
        {
            emit outputs(output);
        }
    }
}
