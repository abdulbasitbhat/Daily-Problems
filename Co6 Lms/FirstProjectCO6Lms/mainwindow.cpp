#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QMessageBox>
//#include<QFileDialog>
#include<seconddialog.h>
//#include <QString>
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


void MainWindow::on_pushButton_clicked()
{
    QString username= ui->lineEdit->text();
    QString password= ui->lineEdit_2->text();

    if(username=="Akshit" && password=="Akshit"){
        QMessageBox::information(this,"Akshit","Hi Akshit , You have 22 marks in oop");
    }
    else if(username=="Prajjwal" && password=="Prajjwal"){
        QMessageBox::information(this,"Prajjwal","Hi Prajjwal , You have 27 marks in oop");
    }
    else if(username=="Vasu" && password=="Vasu"){
        QMessageBox::information(this,"Vasu","Hi Vasu , You have 28 marks in oop");
    }
    else if(username=="Deepak" && password=="Deepak"){
        QMessageBox::information(this,"Deepak","Hi Deepak , You have 25 marks in oop");
    }
    else if(username=="Tushar" && password=="Tushar"){
        QMessageBox::information(this,"Tushar","Hi Tushar , You have 26 marks in oop");
    }
    else if(username=="Dipsy" && password=="Dipsy"){
        QMessageBox::information(this,"Dipsy","Hi Dipsy , You have 28 marks in oop");
    }
    else if(username=="Ishnoor" && password=="Ishnoor"){
        QMessageBox::information(this,"Ishnoor","Hi Ishnoor , You have 27 marks in oop");
    }
    else if(username=="Mansideep" && password=="Mansideep"){
        QMessageBox::information(this,"Mansideep","Hi Mansideep , You have 28 marks in oop");
    }
    else if(username=="Abdul" && password=="Abdul"){
        QMessageBox::information(this,"Abdul","Hi Abdul , You have 30 marks in oop");
    }

}


void MainWindow::on_pushButton_2_clicked()
{

    QString username= ui->lineEdit->text();
    QString password= ui->lineEdit_2->text();

   /* SecondDialog secondDlg;
    secDlg.setModal(true);
    secDlg.exec();*/

    if(username=="Akshit" && password=="Akshit"){
        SecondDialog secDlg;
        secDlg.setModal(true);
        secDlg.exec();
    }
    else if(username=="Prajjwal" && password=="Prajjwal"){
        SecondDialog secDlg;
        secDlg.setModal(true);
        secDlg.exec();
    }
    else if(username=="Vasu" && password=="Vasu"){
        SecondDialog secDlg;
        secDlg.setModal(true);
        secDlg.exec();
    }
    else if(username=="Deepak" && password=="Deepak"){
        SecondDialog secDlg;
        secDlg.setModal(true);
        secDlg.exec();
    }
    else if(username=="Tushar" && password=="Tushar"){
        SecondDialog secDlg;
        secDlg.setModal(true);
        secDlg.exec();
    }
    else if(username=="Dipsy" && password=="Dipsy"){
        SecondDialog secDlg;
        secDlg.setModal(true);
        secDlg.exec();
    }
    else if(username=="Ishnoor" && password=="Ishnoor"){
        SecondDialog secDlg;
        secDlg.setModal(true);
        secDlg.exec();
    }
    else if(username=="Mansideep" && password=="Mansideep"){
        SecondDialog secDlg;
        secDlg.setModal(true);
        secDlg.exec();
    }
    else if(username=="Abdul" && password=="Abdul"){
        SecondDialog secDlg;
        secDlg.setModal(true);
        secDlg.exec();
    }

}


