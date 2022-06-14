#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_action_About_triggered()
{
    QMessageBox::about(this, "About YT-DL-GUI", "This is the helper program of youtube-dl.");
}


void MainWindow::on_destButtion_clicked()
{
    directoyLocation = QFileDialog::getExistingDirectory(this, "Select the destination...", QDir::homePath(), QFileDialog::ShowDirsOnly);
    ui->destIn->setText(directoyLocation);
}


void MainWindow::on_starter_clicked()
{
    cmd = "youtube-dl ";
    url = (ui->urlIn->text()).toStdString();
    if (ui->audioOption->isChecked())
    {
        options = ui->audioFileFormat->currentText();
        if (options.toStdString() == "MP3")
        {
            cmd.append("-x --audio-format mp3 ");
        }
        else if (options.toStdString() == "M4A")
        {
            cmd.append("-x --audio-format m4a ");
        }
        else if (options.toStdString() == "ACC")
        {
            cmd.append("-x --audio-format acc ");
        }
        else if (options.toStdString() == "WAV")
        {
            cmd.append("-x --audio-format wav ");
        }
        else if (options.toStdString() == "OPUS")
        {
            cmd.append("-x --audio-format opus ");
        }
    }
    else
    {
        options = ui->videoFileFormat->currentText();
        if (options.toStdString() == "MP4")
        {
            cmd.append("--recode-video mp4 ");
        }
        else if (options.toStdString() == "MKV")
        {
            cmd.append("--recode-video mkv ");
        }
        else if (options.toStdString() == "OGG")
        {
            cmd.append("--recode-video ogg ");
        }
        else if (options.toStdString() == "AVI")
        {
            cmd.append("--recode-video avi ");
        }
        else if (options.toStdString() == "WEBM")
        {
            cmd.append("--recode-video webm ");
        }
    }
    cmd.append(url);
    std::cout << cmd << std::endl;
    std::cout << options.toStdString() << std::endl;
    std::filesystem::current_path(std::filesystem::path(directoyLocation.toStdString()));
    std::cout << std::filesystem::current_path() << std::endl;
    cmd = "bash command.bash";
}
