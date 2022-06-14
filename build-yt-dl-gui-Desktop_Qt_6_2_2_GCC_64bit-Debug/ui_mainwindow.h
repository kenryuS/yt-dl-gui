/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Exit;
    QAction *action_About;
    QAction *action_Trouble_Shooting;
    QWidget *centralwidget;
    QPushButton *starter;
    QLineEdit *urlIn;
    QLineEdit *destIn;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *audioOption;
    QPushButton *destButtion;
    QComboBox *audioFileFormat;
    QComboBox *videoFileFormat;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menu_Help;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(400, 300));
        MainWindow->setMaximumSize(QSize(400, 300));
        action_Exit = new QAction(MainWindow);
        action_Exit->setObjectName(QString::fromUtf8("action_Exit"));
        action_About = new QAction(MainWindow);
        action_About->setObjectName(QString::fromUtf8("action_About"));
        action_Trouble_Shooting = new QAction(MainWindow);
        action_Trouble_Shooting->setObjectName(QString::fromUtf8("action_Trouble_Shooting"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        starter = new QPushButton(centralwidget);
        starter->setObjectName(QString::fromUtf8("starter"));
        starter->setGeometry(QRect(9, 201, 381, 51));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setUnderline(false);
        starter->setFont(font);
        urlIn = new QLineEdit(centralwidget);
        urlIn->setObjectName(QString::fromUtf8("urlIn"));
        urlIn->setGeometry(QRect(10, 80, 371, 31));
        QFont font1;
        font1.setPointSize(10);
        urlIn->setFont(font1);
        destIn = new QLineEdit(centralwidget);
        destIn->setObjectName(QString::fromUtf8("destIn"));
        destIn->setGeometry(QRect(10, 120, 281, 31));
        destIn->setReadOnly(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 371, 31));
        QFont font2;
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setItalic(true);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 50, 371, 16));
        audioOption = new QCheckBox(centralwidget);
        audioOption->setObjectName(QString::fromUtf8("audioOption"));
        audioOption->setGeometry(QRect(10, 159, 151, 31));
        destButtion = new QPushButton(centralwidget);
        destButtion->setObjectName(QString::fromUtf8("destButtion"));
        destButtion->setGeometry(QRect(300, 120, 80, 31));
        audioFileFormat = new QComboBox(centralwidget);
        audioFileFormat->addItem(QString());
        audioFileFormat->addItem(QString());
        audioFileFormat->addItem(QString());
        audioFileFormat->addItem(QString());
        audioFileFormat->addItem(QString());
        audioFileFormat->addItem(QString());
        audioFileFormat->setObjectName(QString::fromUtf8("audioFileFormat"));
        audioFileFormat->setEnabled(false);
        audioFileFormat->setGeometry(QRect(280, 160, 101, 31));
        videoFileFormat = new QComboBox(centralwidget);
        videoFileFormat->addItem(QString());
        videoFileFormat->addItem(QString());
        videoFileFormat->addItem(QString());
        videoFileFormat->addItem(QString());
        videoFileFormat->addItem(QString());
        videoFileFormat->setObjectName(QString::fromUtf8("videoFileFormat"));
        videoFileFormat->setGeometry(QRect(170, 160, 101, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 23));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        QWidget::setTabOrder(urlIn, destIn);
        QWidget::setTabOrder(destIn, audioOption);
        QWidget::setTabOrder(audioOption, starter);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_Exit);
        menu_Help->addAction(action_About);
        menu_Help->addAction(action_Trouble_Shooting);

        retranslateUi(MainWindow);
        QObject::connect(action_Exit, &QAction::triggered, MainWindow, qOverload<>(&QMainWindow::close));
        QObject::connect(audioOption, &QCheckBox::toggled, audioFileFormat, &QComboBox::setEnabled);
        QObject::connect(audioOption, &QCheckBox::toggled, videoFileFormat, &QComboBox::setDisabled);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "yt-dl-gui", nullptr));
        action_Exit->setText(QCoreApplication::translate("MainWindow", "&Exit", nullptr));
        action_About->setText(QCoreApplication::translate("MainWindow", "&About", nullptr));
        action_Trouble_Shooting->setText(QCoreApplication::translate("MainWindow", "&Trouble Shooting", nullptr));
        starter->setText(QCoreApplication::translate("MainWindow", "Start Downloading", nullptr));
        urlIn->setPlaceholderText(QCoreApplication::translate("MainWindow", "URL(ex. https://youtube.com)", nullptr));
        destIn->setPlaceholderText(QCoreApplication::translate("MainWindow", "Full Path to the Destination Directory", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "yt-dl-gui", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Download Youtube video as video file or audio file!", nullptr));
        audioOption->setText(QCoreApplication::translate("MainWindow", "Download as Audio", nullptr));
        destButtion->setText(QCoreApplication::translate("MainWindow", "Select ...", nullptr));
        audioFileFormat->setItemText(0, QCoreApplication::translate("MainWindow", "MP3", nullptr));
        audioFileFormat->setItemText(1, QCoreApplication::translate("MainWindow", "M4A", nullptr));
        audioFileFormat->setItemText(2, QCoreApplication::translate("MainWindow", "AAC", nullptr));
        audioFileFormat->setItemText(3, QCoreApplication::translate("MainWindow", "OPUS", nullptr));
        audioFileFormat->setItemText(4, QCoreApplication::translate("MainWindow", "WAV", nullptr));
        audioFileFormat->setItemText(5, QCoreApplication::translate("MainWindow", "webm", nullptr));

        videoFileFormat->setItemText(0, QCoreApplication::translate("MainWindow", "MP4", nullptr));
        videoFileFormat->setItemText(1, QCoreApplication::translate("MainWindow", "MKV", nullptr));
        videoFileFormat->setItemText(2, QCoreApplication::translate("MainWindow", "OGG", nullptr));
        videoFileFormat->setItemText(3, QCoreApplication::translate("MainWindow", "AVI", nullptr));
        videoFileFormat->setItemText(4, QCoreApplication::translate("MainWindow", "WEBM", nullptr));

        menu_File->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
