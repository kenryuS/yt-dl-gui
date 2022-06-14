#include "logdialog.h"
#include "ui_logdialog.h"
#include "mainwindow.h"

logDialog::logDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logDialog)
{
    ui->setupUi(this);

    cmdThread task(QString::fromStdString(MainWindow::cmd));
    connect();
}

logDialog::~logDialog()
{
    delete ui;
}

void logDialog::onOutputs(QString outputs)
{
    ui->textBrowser->append(outputs);
}

void logDialog::on_pushButton_clicked()
{
    task->Stop = true;
}

