#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "func.h"


const int SIZE = 9;
int arr[SIZE] = {1,2,3,4,5,6,7,8,9};
int leftShift = 0, rightShift = 0;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Сдвиг массива");
    QString label1;
    for(int i = 0; i < SIZE; ++i ){
        label1.append(QString::number(arr[i]).append(" "));
    }
    ui->label_4->setText(label1);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_leftButton_clicked()
{
    shiftArray(SIZE, arr, -1);
    ui->label_5->setText(createString(SIZE, arr));
    leftShift++;
    QString tmp = "Сдвиг влево сделан " + QString::number(leftShift) + " раз.";

    ui->statusbar->showMessage(tmp);

}

void MainWindow::on_rightButton_clicked()
{
    shiftArray(SIZE, arr, 1);
    ui->label_5->setText(createString(SIZE, arr));
    QString tmp = "Сдвиг вправо сделан " + QString::number(++rightShift) + " раз.";
    ui->statusbar->showMessage(tmp);
}
