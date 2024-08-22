#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QLineEdit>
#include <QDebug>
#include <iostream>
#include <QTimer>
#include <ctime>
#include <cstdlib>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , clickcount(0)

    , workercount(0)
    , workerprice(20)

    , orphanagecount(0)
    , orphanageprice(120)

    , casinocount(0)
    , casinoprice(600)

    , timer(new QTimer(this))

{
    ui->setupUi(this);
    ui->Warning->setVisible(false);
    ui->Winner->setVisible(false);
    ui->PlusOne_2->setVisible(false);
    ui->PlusOne->setVisible(false);
    ui->PlusOne_3->setVisible(false);

    srand(static_cast<unsigned>(time(nullptr)));


    // Create a QTimer for the background loop
    QTimer *timer = new QTimer(this);

    // Connect the timer's timeout signal to a slot that increments the counter
    connect(timer, &QTimer::timeout, this, [this]() {

        int cps = (workercount / 2) + (orphanagecount*10) + (casinocount*50);
        clickcount = clickcount + cps;
        ui->ClickCount->setText(QString::number(clickcount));
        qDebug() << "skibiby value:" << clickcount;  // Print the value (for testing)
        ui->CPScounter ->setText(QString::number(cps));
    });

    // Start the timer with an interval of 1000 milliseconds (1 second)
    timer->start(1000);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    clickcount++;
    // You can also update a label or another UI element to show the value of skibiby
    ui->ClickCount->setText(QString::number(clickcount));
}


void MainWindow::on_buyworker_clicked()
{
    if(clickcount >= workerprice){
        clickcount = (clickcount - workerprice);
        ui->ClickCount->setText(QString::number(clickcount));
        ui->PlusOne->setVisible(true);
        workercount++;
        workerprice = std::round(workerprice * 1.07 * 100.0) / 100.0;
        ui->WorkerCounter->setText(QString::number(workercount));  //IFIFEYUFUEFUAEFGUYEFUEFQGUYAEFGKU
        ui->buyworker->setText(QString::number(workerprice) + "$");

        QTimer::singleShot(1000, this, [this]() {
            ui->PlusOne->setVisible(false);  // Disable the Warning label
        });
    }
    else {
        std::cout << "Nuh uh buddy" << std::endl;
        ui->Warning->setVisible(true);  // Enable and show the Warning label

        // Create a QTimer to disable the Warning label after 1 second
        QTimer::singleShot(1000, this, [this]() {
            ui->Warning->setVisible(false);  // Disable the Warning label
        });
    }
}


void MainWindow::on_buychildren_clicked()
{
    if(clickcount >= orphanageprice){
        clickcount = (clickcount - orphanageprice);
        ui->ClickCount->setText(QString::number(clickcount));
        ui->PlusOne_2->setVisible(true);
        orphanagecount++;
        orphanageprice = std::round(orphanageprice * 1.15 * 100.0) / 100.0;
        ui->orphanageCounter2->setText(QString::number(orphanagecount));  //IFIFEYUFUEFUAEFGUYEFUEFQGUYAEFGKU
        ui->buychildren->setText(QString::number(orphanageprice) + "$");

        QTimer::singleShot(1000, this, [this]() {
            ui->PlusOne_2->setVisible(false);  // Disable the Warning label
        });
    }
    else {
        std::cout << "Nuh uh buddy" << std::endl;
        ui->Warning->setVisible(true);  // Enable and show the Warning label

        // Create a QTimer to disable the Warning label after 1 second
        QTimer::singleShot(1000, this, [this]() {
            ui->Warning->setVisible(false);  // Disable the Warning label
        });
    }
}






void MainWindow::on_buycasino_clicked()
{
    if(clickcount >= casinoprice){
        clickcount = (clickcount - casinoprice);
        ui->ClickCount->setText(QString::number(clickcount));
        ui->PlusOne_3->setVisible(true);
        casinocount++;
        casinoprice = std::round(casinoprice * 1.2 * 100.0) / 100.0;
        ui->CasinoCounter->setText(QString::number(casinocount));  //IFIFEYUFUEFUAEFGUYEFUEFQGUYAEFGKU
        ui->buycasino->setText(QString::number(casinoprice) + "$");

        QTimer::singleShot(1000, this, [this]() {
            ui->PlusOne_3->setVisible(false);  // Disable the Warning label
        });
    }
    else {
        std::cout << "Nuh uh buddy" << std::endl;
        ui->Warning->setVisible(true);  // Enable and show the Warning label

        // Create a QTimer to disable the Warning label after 1 second
        QTimer::singleShot(1000, this, [this]() {
            ui->Warning->setVisible(false);  // Disable the Warning label
        });
    }
}



void MainWindow::on_gamble_clicked()
{
    // Assume the QTextEdit widget is named 'gamount'
    QString text = ui->gamount->toPlainText();  // Get the text from the QTextEdit

    // Print out the text
    qDebug() << "Gamble:" << text;

    // Convert the text to a number (if necessary)
    bool ok;
    double number = text.toDouble(&ok);  // Convert to double, 'ok' will be true if conversion succeeds

    if (ok) {
        if(number <= clickcount){
            int randomNumber1 = rand() % 7 + 1;
            int randomNumber2 = rand() % 7 + 1;
            int randomNumber3 = rand() % 7 + 1;
            ui->rolla->setText(QString::number(randomNumber1));
            ui->rollb->setText(QString::number(randomNumber2));
            ui->rollc->setText(QString::number(randomNumber3));
            clickcount = clickcount - number;

            if(randomNumber1 == 7 && randomNumber2 == 7 && randomNumber3 == 7){
                clickcount = clickcount + (number*20);
                ui->ClickCount->setText(QString::number(clickcount));

                ui->Winner->setVisible(true);

                QTimer::singleShot(1000, this, [this]() {
                    ui->Winner->setVisible(false);  // Disable the Warning label
                });


            }
            else if (randomNumber3 == 7){
                clickcount = clickcount + (number*3);
                ui->ClickCount->setText(QString::number(clickcount));

                ui->Winner->setVisible(true);

                QTimer::singleShot(1000, this, [this]() {
                    ui->Winner->setVisible(false);  // Disable the Warning label
                });
            }
            else if (randomNumber1 == 6 && randomNumber2 == 6 && randomNumber3 == 6){
                clickcount = clickcount + (number*6);
                ui->ClickCount->setText(QString::number(clickcount));

                ui->Winner->setVisible(true);

                QTimer::singleShot(1000, this, [this]() {
                    ui->Winner->setVisible(false);  // Disable the Warning label
                });
            }
            else if (randomNumber1 == 5 && randomNumber2 == 5 && randomNumber3 == 5){
                clickcount = clickcount + (number*4);
                ui->ClickCount->setText(QString::number(clickcount));

                ui->Winner->setVisible(true);

                QTimer::singleShot(1000, this, [this]() {
                    ui->Winner->setVisible(false);  // Disable the Warning label
                });
            }
            else if (randomNumber1 == 4 && randomNumber2 == 4 && randomNumber3 == 4){
                clickcount = clickcount + (number*4);
                ui->ClickCount->setText(QString::number(clickcount));

                ui->Winner->setVisible(true);

                QTimer::singleShot(1000, this, [this]() {
                    ui->Winner->setVisible(false);  // Disable the Warning label
                });
            }
            else if (randomNumber1 == 3 && randomNumber2 == 3 && randomNumber3 == 3){
                clickcount = clickcount + (number*3);
                ui->ClickCount->setText(QString::number(clickcount));

                ui->Winner->setVisible(true);

                QTimer::singleShot(1000, this, [this]() {
                    ui->Winner->setVisible(false);  // Disable the Warning label
                });
            }
            else if (randomNumber1 == 2 && randomNumber2 == 2 && randomNumber3 == 2){
                clickcount = clickcount + (number*3);
                ui->ClickCount->setText(QString::number(clickcount));

                ui->Winner->setVisible(true);

                QTimer::singleShot(1000, this, [this]() {
                    ui->Winner->setVisible(false);  // Disable the Warning label
                });
            }



            qDebug() << "Gambled";
        }
    } else {
        qDebug() << "The input is not a valid number.";
    }
}

