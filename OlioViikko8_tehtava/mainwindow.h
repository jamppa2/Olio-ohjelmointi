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
    void updateProgressBar();
    void timeout();
    void winGame(short);
    void setGameInfoText(QString, short);

private slots:
    void on_Switch1_clicked();

    void on_Switch2_clicked();

    void on_T1_clicked();

    void on_T2_clicked();

    void on_StartGameButton_clicked();

    void on_StopGameButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
