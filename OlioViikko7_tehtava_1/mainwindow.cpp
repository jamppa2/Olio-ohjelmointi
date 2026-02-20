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
void MainWindow::on_CountButton_clicked()
{
    //1. luetaan nykyinen luku
    QString luku = ui->countEdit->text();
    qDebug() << "Nykyinen luku merkkijonona " << luku;
    //2. muutetaan merkkijono kokonaisluvuksi
    int num = luku.toInt();
    qDebug() << "Nykyinen luku kokonaislukuna " << num;
    //3. lisätään lukuun 1
    num = num + 1;
    qDebug() << "Uusi luku kokonaislukuna " << num;
    //4. kirjoitetaan takaisin edittiin
    QString txt = QString::number(num);
    ui->countEdit->setText(txt);
}


void MainWindow::on_resetButton_clicked()
{
    //palauttaa takaisin nollaan
    ui->countEdit->setText("0");
}
