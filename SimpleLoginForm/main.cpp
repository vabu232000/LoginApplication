#include "mainwindow.h"

#include<QPushButton>
#include<QFile>
#include<QTextStream>
#include <QApplication>

QString readTextFile(QString path) {
    QFile file(path);
    if(file.open(QIODevice::ReadOnly|QIODevice::Text))
    {
        QTextStream in(&file);
        return in.readAll();
    }
    return "";
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QString css=readTextFile("://Text document.txt");
       if(css.length()>0)
       {
           a.setStyleSheet(css);
       }
    MainWindow w;
    w.setWindowTitle("Login");
    w.setFixedSize(500, 500);
    w.show();
    return a.exec();
}
