#ifndef CMDTHREAD_H
#define CMDTHREAD_H

#include <QThread>
#include <QProcess>
#include <QString>
#include <iostream>

class cmdThread : public QThread
{
    Q_OBJECT

public:
    explicit cmdThread(QObject *parent = nullptr);
    void run(QString);
    bool Stop;
signals:
    void outputs(QString);
public slots:

};

#endif // CMDTHREAD_H
