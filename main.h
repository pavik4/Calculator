#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_DECIMAL_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_PLUS_clicked();

    void on_pushButton_MINUS_clicked();

    void on_pushButton_MULTIPLY_clicked();

    void on_pushButton_DIVIDE_clicked();

    void on_pushButton_EQUALS_clicked();

    void on_pushButton_SQRT_clicked();

    void on_pushButton_SQUARE_clicked();

    void on_pushButton_potenz_clicked();

    void on_pushButton_NEGATIVE_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
