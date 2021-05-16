#include "dialog.h"
#include "ui_dialog.h"
#include <QDebug>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_Exit_button_clicked()
{
    close();
}

void Dialog::on_Confirm_button_clicked()
{
    QString email = ui->lineEdit->text();
       QString pwd = ui->lineEdit_2->text();
       QString confirmPwd = ui->lineEdit_3->text();
       qDebug() << "Email :" << email;
       qDebug() << "Password :" << pwd;
       qDebug() << "Confirm Password :" << confirmPwd;

       if(!email.isEmpty() && !pwd.isEmpty() && !confirmPwd.isEmpty())
       {

       }
       else
       {
           qDebug() << "One Field is Empty";
       }
}
