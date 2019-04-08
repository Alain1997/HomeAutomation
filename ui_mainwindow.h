/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Lamp1_aan;
    QPushButton *Lamp1_uit;
    QPushButton *lamp2_uit;
    QPushButton *lamp2_aan;
    QLabel *label1_aan;
    QLabel *label2_aan;
    QLabel *label1_uit;
    QLabel *label2_uit;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QTextEdit *textEdit_3;
    QTextEdit *textEdit_4;
    QTextEdit *textEdit_5;
    QCheckBox *checkBox_2;
    QPushButton *pushButton_2;
    QLabel *label_3;
    QTextEdit *textEdit_6;
    QLabel *label_4;
    QTextEdit *textEdit_7;
    QTextEdit *textEdit_8;
    QTextEdit *textEdit_9;
    QCheckBox *checkBox_3;
    QPushButton *pushButton_3;
    QLabel *label_5;
    QTextEdit *textEdit_10;
    QLabel *label_6;
    QTextEdit *textEdit_11;
    QTextEdit *textEdit_12;
    QTextEdit *textEdit_13;
    QCheckBox *checkBox_4;
    QPushButton *pushButton_4;
    QLabel *label_7;
    QTextEdit *textEdit_14;
    QLabel *label_8;
    QTextEdit *textEdit_15;
    QTextEdit *textEdit_16;
    QTextEdit *textEdit_17;
    QCheckBox *checkBox_5;
    QPushButton *pushButton_5;
    QLabel *label_9;
    QTextEdit *textEdit_18;
    QLabel *label_10;
    QTextEdit *textEdit_19;
    QTextEdit *textEdit_20;
    QTextEdit *textEdit_21;
    QCheckBox *checkBox_6;
    QPushButton *pushButton_6;
    QLabel *label_11;
    QTextEdit *textEdit_22;
    QLabel *label_12;
    QTextEdit *textEdit_23;
    QTextEdit *textEdit_24;
    QTextEdit *textEdit_25;
    QCheckBox *checkBox_7;
    QPushButton *pushButton_7;
    QLabel *label_13;
    QTextEdit *textEdit_26;
    QLabel *label_14;
    QTextEdit *textEdit_27;
    QTextEdit *textEdit_28;
    QLabel *label_15;
    QLabel *label_16;
    QPushButton *lamp2_uit_2;
    QLabel *label2_aan_2;
    QLabel *label2_uit_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(883, 468);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Lamp1_aan = new QPushButton(centralWidget);
        Lamp1_aan->setObjectName(QStringLiteral("Lamp1_aan"));
        Lamp1_aan->setGeometry(QRect(60, 180, 121, 22));
        Lamp1_uit = new QPushButton(centralWidget);
        Lamp1_uit->setObjectName(QStringLiteral("Lamp1_uit"));
        Lamp1_uit->setEnabled(true);
        Lamp1_uit->setGeometry(QRect(60, 180, 121, 22));
        lamp2_uit = new QPushButton(centralWidget);
        lamp2_uit->setObjectName(QStringLiteral("lamp2_uit"));
        lamp2_uit->setGeometry(QRect(390, 180, 121, 22));
        lamp2_aan = new QPushButton(centralWidget);
        lamp2_aan->setObjectName(QStringLiteral("lamp2_aan"));
        lamp2_aan->setGeometry(QRect(390, 180, 121, 22));
        label1_aan = new QLabel(centralWidget);
        label1_aan->setObjectName(QStringLiteral("label1_aan"));
        label1_aan->setGeometry(QRect(80, 10, 91, 151));
        label1_aan->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lamp_aan(1).png")));
        label2_aan = new QLabel(centralWidget);
        label2_aan->setObjectName(QStringLiteral("label2_aan"));
        label2_aan->setGeometry(QRect(409, 10, 91, 151));
        label2_aan->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lamp_aan(1).png")));
        label1_uit = new QLabel(centralWidget);
        label1_uit->setObjectName(QStringLiteral("label1_uit"));
        label1_uit->setGeometry(QRect(78, 10, 91, 151));
        label1_uit->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lamp_uit(1).png")));
        label2_uit = new QLabel(centralWidget);
        label2_uit->setObjectName(QStringLiteral("label2_uit"));
        label2_uit->setGeometry(QRect(407, 10, 91, 151));
        label2_uit->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lamp_uit(1).png")));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(60, 290, 41, 31));
        textEdit_2 = new QTextEdit(centralWidget);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(60, 330, 41, 31));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(60, 260, 91, 20));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 370, 80, 22));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 290, 31, 31));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 330, 31, 31));
        textEdit_3 = new QTextEdit(centralWidget);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(120, 290, 41, 31));
        textEdit_4 = new QTextEdit(centralWidget);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(120, 330, 41, 31));
        textEdit_5 = new QTextEdit(centralWidget);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(180, 330, 41, 31));
        checkBox_2 = new QCheckBox(centralWidget);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(180, 260, 91, 20));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(180, 370, 80, 22));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 290, 31, 31));
        textEdit_6 = new QTextEdit(centralWidget);
        textEdit_6->setObjectName(QStringLiteral("textEdit_6"));
        textEdit_6->setGeometry(QRect(180, 290, 41, 31));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 330, 31, 31));
        textEdit_7 = new QTextEdit(centralWidget);
        textEdit_7->setObjectName(QStringLiteral("textEdit_7"));
        textEdit_7->setGeometry(QRect(240, 290, 41, 31));
        textEdit_8 = new QTextEdit(centralWidget);
        textEdit_8->setObjectName(QStringLiteral("textEdit_8"));
        textEdit_8->setGeometry(QRect(240, 330, 41, 31));
        textEdit_9 = new QTextEdit(centralWidget);
        textEdit_9->setObjectName(QStringLiteral("textEdit_9"));
        textEdit_9->setGeometry(QRect(300, 330, 41, 31));
        checkBox_3 = new QCheckBox(centralWidget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setGeometry(QRect(300, 260, 91, 20));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 370, 80, 22));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(350, 290, 31, 31));
        textEdit_10 = new QTextEdit(centralWidget);
        textEdit_10->setObjectName(QStringLiteral("textEdit_10"));
        textEdit_10->setGeometry(QRect(300, 290, 41, 31));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(350, 330, 31, 31));
        textEdit_11 = new QTextEdit(centralWidget);
        textEdit_11->setObjectName(QStringLiteral("textEdit_11"));
        textEdit_11->setGeometry(QRect(360, 290, 41, 31));
        textEdit_12 = new QTextEdit(centralWidget);
        textEdit_12->setObjectName(QStringLiteral("textEdit_12"));
        textEdit_12->setGeometry(QRect(360, 330, 41, 31));
        textEdit_13 = new QTextEdit(centralWidget);
        textEdit_13->setObjectName(QStringLiteral("textEdit_13"));
        textEdit_13->setGeometry(QRect(420, 330, 41, 31));
        checkBox_4 = new QCheckBox(centralWidget);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));
        checkBox_4->setGeometry(QRect(420, 260, 91, 20));
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(420, 370, 80, 22));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(470, 290, 31, 31));
        textEdit_14 = new QTextEdit(centralWidget);
        textEdit_14->setObjectName(QStringLiteral("textEdit_14"));
        textEdit_14->setGeometry(QRect(420, 290, 41, 31));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(470, 330, 31, 31));
        textEdit_15 = new QTextEdit(centralWidget);
        textEdit_15->setObjectName(QStringLiteral("textEdit_15"));
        textEdit_15->setGeometry(QRect(480, 290, 41, 31));
        textEdit_16 = new QTextEdit(centralWidget);
        textEdit_16->setObjectName(QStringLiteral("textEdit_16"));
        textEdit_16->setGeometry(QRect(480, 330, 41, 31));
        textEdit_17 = new QTextEdit(centralWidget);
        textEdit_17->setObjectName(QStringLiteral("textEdit_17"));
        textEdit_17->setGeometry(QRect(540, 330, 41, 31));
        checkBox_5 = new QCheckBox(centralWidget);
        checkBox_5->setObjectName(QStringLiteral("checkBox_5"));
        checkBox_5->setGeometry(QRect(540, 260, 91, 20));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(540, 370, 80, 22));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(590, 290, 31, 31));
        textEdit_18 = new QTextEdit(centralWidget);
        textEdit_18->setObjectName(QStringLiteral("textEdit_18"));
        textEdit_18->setGeometry(QRect(540, 290, 41, 31));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(590, 330, 31, 31));
        textEdit_19 = new QTextEdit(centralWidget);
        textEdit_19->setObjectName(QStringLiteral("textEdit_19"));
        textEdit_19->setGeometry(QRect(600, 290, 41, 31));
        textEdit_20 = new QTextEdit(centralWidget);
        textEdit_20->setObjectName(QStringLiteral("textEdit_20"));
        textEdit_20->setGeometry(QRect(600, 330, 41, 31));
        textEdit_21 = new QTextEdit(centralWidget);
        textEdit_21->setObjectName(QStringLiteral("textEdit_21"));
        textEdit_21->setGeometry(QRect(650, 330, 41, 31));
        checkBox_6 = new QCheckBox(centralWidget);
        checkBox_6->setObjectName(QStringLiteral("checkBox_6"));
        checkBox_6->setGeometry(QRect(650, 260, 91, 20));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(650, 370, 80, 22));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(700, 290, 31, 31));
        textEdit_22 = new QTextEdit(centralWidget);
        textEdit_22->setObjectName(QStringLiteral("textEdit_22"));
        textEdit_22->setGeometry(QRect(650, 290, 41, 31));
        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(700, 330, 31, 31));
        textEdit_23 = new QTextEdit(centralWidget);
        textEdit_23->setObjectName(QStringLiteral("textEdit_23"));
        textEdit_23->setGeometry(QRect(710, 290, 41, 31));
        textEdit_24 = new QTextEdit(centralWidget);
        textEdit_24->setObjectName(QStringLiteral("textEdit_24"));
        textEdit_24->setGeometry(QRect(710, 330, 41, 31));
        textEdit_25 = new QTextEdit(centralWidget);
        textEdit_25->setObjectName(QStringLiteral("textEdit_25"));
        textEdit_25->setGeometry(QRect(760, 330, 41, 31));
        checkBox_7 = new QCheckBox(centralWidget);
        checkBox_7->setObjectName(QStringLiteral("checkBox_7"));
        checkBox_7->setGeometry(QRect(760, 260, 91, 20));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(760, 370, 80, 22));
        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(810, 290, 31, 31));
        textEdit_26 = new QTextEdit(centralWidget);
        textEdit_26->setObjectName(QStringLiteral("textEdit_26"));
        textEdit_26->setGeometry(QRect(760, 290, 41, 31));
        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(810, 330, 31, 31));
        textEdit_27 = new QTextEdit(centralWidget);
        textEdit_27->setObjectName(QStringLiteral("textEdit_27"));
        textEdit_27->setGeometry(QRect(820, 290, 41, 31));
        textEdit_28 = new QTextEdit(centralWidget);
        textEdit_28->setObjectName(QStringLiteral("textEdit_28"));
        textEdit_28->setGeometry(QRect(820, 330, 41, 31));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 300, 59, 14));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 340, 59, 14));
        lamp2_uit_2 = new QPushButton(centralWidget);
        lamp2_uit_2->setObjectName(QStringLiteral("lamp2_uit_2"));
        lamp2_uit_2->setGeometry(QRect(720, 180, 121, 22));
        label2_aan_2 = new QLabel(centralWidget);
        label2_aan_2->setObjectName(QStringLiteral("label2_aan_2"));
        label2_aan_2->setGeometry(QRect(742, 10, 91, 151));
        label2_aan_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lamp_aan(1).png")));
        label2_uit_2 = new QLabel(centralWidget);
        label2_uit_2->setObjectName(QStringLiteral("label2_uit_2"));
        label2_uit_2->setGeometry(QRect(740, 10, 91, 151));
        label2_uit_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/lamp_uit(1).png")));
        MainWindow->setCentralWidget(centralWidget);
        Lamp1_aan->raise();
        lamp2_aan->raise();
        label1_aan->raise();
        label2_aan->raise();
        label1_uit->raise();
        label2_uit->raise();
        Lamp1_uit->raise();
        lamp2_uit->raise();
        textEdit->raise();
        textEdit_2->raise();
        checkBox->raise();
        pushButton->raise();
        label->raise();
        label_2->raise();
        textEdit_3->raise();
        textEdit_4->raise();
        textEdit_5->raise();
        checkBox_2->raise();
        pushButton_2->raise();
        label_3->raise();
        textEdit_6->raise();
        label_4->raise();
        textEdit_7->raise();
        textEdit_8->raise();
        textEdit_9->raise();
        checkBox_3->raise();
        pushButton_3->raise();
        label_5->raise();
        textEdit_10->raise();
        label_6->raise();
        textEdit_11->raise();
        textEdit_12->raise();
        textEdit_13->raise();
        checkBox_4->raise();
        pushButton_4->raise();
        label_7->raise();
        textEdit_14->raise();
        label_8->raise();
        textEdit_15->raise();
        textEdit_16->raise();
        textEdit_17->raise();
        checkBox_5->raise();
        pushButton_5->raise();
        label_9->raise();
        textEdit_18->raise();
        label_10->raise();
        textEdit_19->raise();
        textEdit_20->raise();
        textEdit_21->raise();
        checkBox_6->raise();
        pushButton_6->raise();
        label_11->raise();
        textEdit_22->raise();
        label_12->raise();
        textEdit_23->raise();
        textEdit_24->raise();
        textEdit_25->raise();
        checkBox_7->raise();
        pushButton_7->raise();
        label_13->raise();
        textEdit_26->raise();
        label_14->raise();
        textEdit_27->raise();
        textEdit_28->raise();
        label_15->raise();
        label_16->raise();
        lamp2_uit_2->raise();
        label2_aan_2->raise();
        label2_uit_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 883, 19));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Lamp1_aan->setText(QApplication::translate("MainWindow", "Zitkamer lamp aan", 0));
        Lamp1_uit->setText(QApplication::translate("MainWindow", "Zitkamer lamp uit", 0));
        lamp2_uit->setText(QApplication::translate("MainWindow", "Keuken lamp uit", 0));
        lamp2_aan->setText(QApplication::translate("MainWindow", "Keuken lamp aan", 0));
        label1_aan->setText(QString());
        label2_aan->setText(QString());
        label1_uit->setText(QString());
        label2_uit->setText(QString());
        textEdit->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        checkBox->setText(QApplication::translate("MainWindow", "Maandag", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Set Timer", 0));
        label->setText(QApplication::translate("MainWindow", ":", 0));
        label_2->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_3->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_4->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_5->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        checkBox_2->setText(QApplication::translate("MainWindow", "Dinsdag", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Set Timer", 0));
        label_3->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_6->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        label_4->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_7->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_8->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_9->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        checkBox_3->setText(QApplication::translate("MainWindow", "Woensdag", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Set Timer", 0));
        label_5->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_10->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        label_6->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_11->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_12->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_13->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        checkBox_4->setText(QApplication::translate("MainWindow", "Donderdag", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Set Timer", 0));
        label_7->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_14->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        label_8->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_15->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_16->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_17->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        checkBox_5->setText(QApplication::translate("MainWindow", "Vrijdag", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Set Timer", 0));
        label_9->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_18->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        label_10->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_19->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_20->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_21->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        checkBox_6->setText(QApplication::translate("MainWindow", "Zaterdag", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Set Timer", 0));
        label_11->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_22->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        label_12->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_23->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_24->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_25->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        checkBox_7->setText(QApplication::translate("MainWindow", "Zondag", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Set Timer", 0));
        label_13->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_26->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        label_14->setText(QApplication::translate("MainWindow", ":", 0));
        textEdit_27->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        textEdit_28->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-</p></body></html>", 0));
        label_15->setText(QApplication::translate("MainWindow", "Aan", 0));
        label_16->setText(QApplication::translate("MainWindow", "Uit", 0));
        lamp2_uit_2->setText(QApplication::translate("MainWindow", "Keuken lamp uit", 0));
        label2_aan_2->setText(QString());
        label2_uit_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
