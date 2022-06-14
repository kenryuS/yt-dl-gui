#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QProcess>
#include <QThread>
#include <iostream>
#include <stdio.h>
#include <filesystem>
#include <time.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static std::string cmd;
private slots:
    void on_action_About_triggered();

    void on_destButtion_clicked();

    void on_starter_clicked();

    void cmdProcess(QString cmd);

private:
    Ui::MainWindow *ui;
    QString directoyLocation = "";
    QString options;
    std::string url = "";
    std::string cmdOptions;
};
#endif // MAINWINDOW_H
