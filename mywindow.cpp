#include<QMessageBox>
#include<QDebug>
#include "mywindow.h"
#include "ui_mywindow.h"
#include "QMessageBox"
#include <QPixmap>
MyWindow::MyWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MyWindow)
{
    ui->setupUi(this);
    QPixmap pix (":/reccource_/image/saad_image.png");
    int w = ui->label_pic->width();
    int h  = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}

MyWindow::~MyWindow()
{
    delete ui;
}


void MyWindow::on_pushButtonClear_clicked()
{

}

void MyWindow::on_pushButton_clicked()
{



}


void MyWindow::on_pushButton_login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if(username == "Saad" && password == "2614"){
        //   QMessageBox::information(this, "Login", "Login was successful!");

        ui->label_3->setText("Login was successful!");
        ui->statusbar->showMessage("Login was successful!",1000);
//        hide();
//        dialog = new FirstDialog(this);
//        dialog->show();

    }

    else {
        QMessageBox::critical(this, "Login", "Username or Password is False!");
        ui->statusbar->showMessage("Login was successful!",40000);
    }
}
