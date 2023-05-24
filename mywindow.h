#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QMainWindow>
#include "firstdialog.h"
QT_BEGIN_NAMESPACE

namespace Ui {
class MyWindow;
}
QT_END_NAMESPACE

class MyWindow : public QMainWindow
{
    Q_OBJECT

public:
    MyWindow(QWidget *parent = nullptr);
    ~MyWindow();

private slots:
    void on_pushButtonClear_clicked();

    void on_pushButton_clicked();


    void on_pushButton_login_clicked();

private:
    Ui::MyWindow *ui;
    FirstDialog* dialog;
};
#endif // MYWINDOW_H
