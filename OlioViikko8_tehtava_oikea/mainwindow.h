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

   void setEditNum(int num);

private slots:
    void on_plusButton_clicked();

    void on_miinusButton_clicked();

    void on_yksiButton_clicked();

    void on_kaksiButton_clicked();

    void on_kolmeButton_clicked();

    void on_enterButton_clicked();

    void on_clearButton_clicked();

private:
    Ui::MainWindow *ui;
    int num1;
    int num2;
    int num3;
    int result;

    int tila = 0;
};
#endif // MAINWINDOW_H
