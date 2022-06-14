#ifndef LOGDIALOG_H
#define LOGDIALOG_H

#include "cmdthread.h"
#include <QDialog>
#include <QString>
#include <iostream>

namespace Ui {
class logDialog;
}

class logDialog : public QDialog
{
    Q_OBJECT

public:
    explicit logDialog(QWidget *parent = nullptr);
    ~logDialog();

private:
    Ui::logDialog *ui;
public slots:
    void onOutputs(QString);
private slots:
    void on_pushButton_clicked();
};

#endif // LOGDIALOG_H
