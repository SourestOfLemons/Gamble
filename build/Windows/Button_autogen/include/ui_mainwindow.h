/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *ClickCount;
    QPushButton *buyworker;
    QLabel *label;
    QLabel *Warning;
    QLabel *PlusOne;
    QLabel *label_2;
    QLabel *WorkerCounter;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *orphanageCounter2;
    QLabel *PlusOne_2;
    QPushButton *buychildren;
    QLabel *label_5;
    QLabel *CPScounter;
    QLabel *label_6;
    QTextEdit *gamount;
    QPushButton *gamble;
    QLabel *rolla;
    QLabel *rollb;
    QLabel *rollc;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *Winner;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *buycasino;
    QLabel *PlusOne_3;
    QLabel *CasinoCounter;
    QLabel *label_12;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(320, 190, 100, 81));
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::MediaRecord));
        pushButton->setIcon(icon);
        pushButton->setIconSize(QSize(28, 39));
        ClickCount = new QLabel(centralwidget);
        ClickCount->setObjectName("ClickCount");
        ClickCount->setGeometry(QRect(320, 170, 101, 16));
        ClickCount->setAlignment(Qt::AlignmentFlag::AlignCenter);
        buyworker = new QPushButton(centralwidget);
        buyworker->setObjectName("buyworker");
        buyworker->setGeometry(QRect(570, 190, 100, 32));
        buyworker->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(580, 170, 71, 16));
        Warning = new QLabel(centralwidget);
        Warning->setObjectName("Warning");
        Warning->setEnabled(true);
        Warning->setGeometry(QRect(250, 90, 341, 51));
        QFont font;
        font.setPointSize(25);
        Warning->setFont(font);
        Warning->setScaledContents(false);
        PlusOne = new QLabel(centralwidget);
        PlusOne->setObjectName("PlusOne");
        PlusOne->setGeometry(QRect(590, 220, 58, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(660, 30, 101, 20));
        WorkerCounter = new QLabel(centralwidget);
        WorkerCounter->setObjectName("WorkerCounter");
        WorkerCounter->setGeometry(QRect(720, 30, 58, 16));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(580, 240, 101, 16));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(660, 50, 101, 20));
        orphanageCounter2 = new QLabel(centralwidget);
        orphanageCounter2->setObjectName("orphanageCounter2");
        orphanageCounter2->setGeometry(QRect(740, 50, 58, 16));
        PlusOne_2 = new QLabel(centralwidget);
        PlusOne_2->setObjectName("PlusOne_2");
        PlusOne_2->setGeometry(QRect(590, 290, 91, 16));
        buychildren = new QPushButton(centralwidget);
        buychildren->setObjectName("buychildren");
        buychildren->setGeometry(QRect(570, 260, 100, 32));
        buychildren->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(280, 300, 171, 21));
        QFont font1;
        font1.setPointSize(16);
        label_5->setFont(font1);
        CPScounter = new QLabel(centralwidget);
        CPScounter->setObjectName("CPScounter");
        CPScounter->setGeometry(QRect(450, 300, 71, 21));
        CPScounter->setFont(font1);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 120, 58, 16));
        gamount = new QTextEdit(centralwidget);
        gamount->setObjectName("gamount");
        gamount->setGeometry(QRect(30, 150, 104, 21));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(gamount->sizePolicy().hasHeightForWidth());
        gamount->setSizePolicy(sizePolicy);
        gamount->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::IBeamCursor)));
        gamble = new QPushButton(centralwidget);
        gamble->setObjectName("gamble");
        gamble->setGeometry(QRect(30, 170, 100, 32));
        gamble->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        rolla = new QLabel(centralwidget);
        rolla->setObjectName("rolla");
        rolla->setGeometry(QRect(30, 200, 58, 16));
        rollb = new QLabel(centralwidget);
        rollb->setObjectName("rollb");
        rollb->setGeometry(QRect(60, 200, 58, 16));
        rollc = new QLabel(centralwidget);
        rollc->setObjectName("rollc");
        rollc->setGeometry(QRect(90, 200, 58, 16));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(30, 230, 211, 141));
        label_7->setScaledContents(false);
        label_7->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        label_7->setWordWrap(false);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(30, 290, 211, 141));
        label_8->setScaledContents(false);
        label_8->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        label_8->setWordWrap(false);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(30, 270, 211, 141));
        label_9->setScaledContents(false);
        label_9->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        label_9->setWordWrap(false);
        Winner = new QLabel(centralwidget);
        Winner->setObjectName("Winner");
        Winner->setEnabled(true);
        Winner->setGeometry(QRect(310, 90, 261, 51));
        Winner->setFont(font);
        Winner->setScaledContents(false);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 250, 211, 141));
        label_10->setScaledContents(false);
        label_10->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignTop);
        label_10->setWordWrap(false);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(580, 300, 101, 16));
        buycasino = new QPushButton(centralwidget);
        buycasino->setObjectName("buycasino");
        buycasino->setGeometry(QRect(570, 320, 100, 32));
        buycasino->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        PlusOne_3 = new QLabel(centralwidget);
        PlusOne_3->setObjectName("PlusOne_3");
        PlusOne_3->setGeometry(QRect(590, 350, 91, 16));
        CasinoCounter = new QLabel(centralwidget);
        CasinoCounter->setObjectName("CasinoCounter");
        CasinoCounter->setGeometry(QRect(740, 70, 58, 16));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(660, 70, 101, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QString());
        ClickCount->setText(QCoreApplication::translate("MainWindow", "Click the button", nullptr));
        buyworker->setText(QCoreApplication::translate("MainWindow", "20$", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Buy worker", nullptr));
        Warning->setText(QCoreApplication::translate("MainWindow", "NOT ENOUGH MONEY", nullptr));
        PlusOne->setText(QCoreApplication::translate("MainWindow", "+1 worker", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Workers: ", nullptr));
        WorkerCounter->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Buy orphanage", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "orphanages: ", nullptr));
        orphanageCounter2->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        PlusOne_2->setText(QCoreApplication::translate("MainWindow", "+1 orphanage", nullptr));
        buychildren->setText(QCoreApplication::translate("MainWindow", "120$", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Clicks Per Second:", nullptr));
        CPScounter->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Gamble", nullptr));
        gamble->setText(QCoreApplication::translate("MainWindow", "Gamble", nullptr));
        rolla->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        rollb->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        rollc->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Getting a 7 IN THE LAST ROW", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "All 7's will give you x20 money", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "All 1-6's will give you x4 money", nullptr));
        Winner->setText(QCoreApplication::translate("MainWindow", "YOU WIN!", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "will give you x3 money", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Buy Casino", nullptr));
        buycasino->setText(QCoreApplication::translate("MainWindow", "600$", nullptr));
        PlusOne_3->setText(QCoreApplication::translate("MainWindow", "+1 Casino", nullptr));
        CasinoCounter->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Casinos: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
