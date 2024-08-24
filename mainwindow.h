#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_buyworker_clicked();

    void on_buychildren_clicked();

    void on_gamble_clicked();

    void on_buycasino_clicked();

    void on_buyclub_clicked();

private:
    Ui::MainWindow *ui;
    float clickcount;

    int workercount;
    float workerprice;

    int orphanagecount;
    float orphanageprice;

    int casinocount;
    float casinoprice;

    int clubcount;
    float clubprice;

    QTimer *timer;
};
#endif // MAINWINDOW_H
