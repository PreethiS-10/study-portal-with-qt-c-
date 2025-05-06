#include "teacher.h"
#include "ui_teacher.h"
#include "oopsteach.h"
#include "mainwindow.h"
#include<string>
#include <cctype>
#include<iostream>>
using namespace std;

int no;
std::string nam;
teacher::teacher(std::string name,int x,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::teacher)
{
    ui->setupUi(this);
    ui->name->setText(QString::fromStdString(name));
    no=x;
    nam=name;
}

teacher::~teacher()
{
    delete ui;
}

void teacher::on_file1_clicked()
{
    if(no==1)
    {
        oopsteach *w1=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file1.txt",nam,no);
        w1->show();
        this->hide();
    }
    else if(no==2)
    {
        oopsteach *w2=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\probability\\file1.txt",nam,no);
        w2->show();
        this->hide();
    }
    else if(no==3)
    {
        oopsteach *w3=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\python\\file1.txt",nam,no);
        w3->show();
        this->hide();
    }
    else if(no==4)
    {
        oopsteach *w4=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\discretestructures\\file1.txt",nam,no);
        w4->show();
        this->hide();
    }
    else if(no==5)
    {
        oopsteach *w5=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\abstract\\file1.txt",nam,no);
        w5->show();
        this->hide();
    }
    else
    {
        oopsteach *w6=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\dsa\\file1.txt",nam,no);
        w6->show();
        this->hide();
    }
}


void teacher::on_file2_clicked()
{
    if(no==1)
    {
        oopsteach *w1=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file2.txt",nam,no);
        w1->show();
        this->hide();
    }
    else if(no==2)
    {
        oopsteach *w2=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\probability\\file2.txt",nam,no);
        w2->show();
        this->hide();
    }
    else if(no==3)
    {
        oopsteach *w3=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\python\\file2.txt",nam,no);
        w3->show();
        this->hide();
    }
    else if(no==4)
    {
        oopsteach *w4=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\discretestructures\\file2.txt",nam,no);
        w4->show();
        this->hide();
    }
    else if(no==5)
    {
        oopsteach *w5=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\abstract\\file2.txt",nam,no);
        w5->show();
        this->hide();
    }
    else
    {
        oopsteach *w6=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\dsa\\file2.txt",nam,no);
        w6->show();
        this->hide();
    }
}


void teacher::on_file3_clicked()
{
    if(no==1)
    {
        oopsteach *w1=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file3.txt",nam,no);
        w1->show();
        this->hide();
    }
    else if(no==2)
    {
        oopsteach *w2=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\probability\\file3.txt",nam,no);
        w2->show();
        this->hide();
    }
    else if(no==3)
    {
        oopsteach *w3=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\python\\file3.txt",nam,no);
        w3->show();
        this->hide();
    }
    else if(no==4)
    {
        oopsteach *w4=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\discretestructures\\file3.txt",nam,no);
        w4->show();
        this->hide();
    }
    else if(no==5)
    {
        oopsteach *w5=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\abstract\\file3.txt",nam,no);
        w5->show();
        this->hide();
    }
    else
    {
        oopsteach *w6=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\dsa\\file3.txt",nam,no);
        w6->show();
        this->hide();
    }
}


void teacher::on_file4_clicked()
{
    if(no==1)
    {
        oopsteach *w1=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file4.txt",nam,no);
        w1->show();
        this->hide();
    }
    else if(no==2)
    {
        oopsteach *w2=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\probability\\file4.txt",nam,no);
        w2->show();
        this->hide();
    }
    else if(no==3)
    {
        oopsteach *w3=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\python\\file4.txt",nam,no);
        w3->show();
        this->hide();
    }
    else if(no==4)
    {
        oopsteach *w4=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\discretestructures\\file4.txt",nam,no);
        w4->show();
        this->hide();
    }
    else if(no==5)
    {
        oopsteach *w5=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\abstract\\file4.txt",nam,no);
        w5->show();
        this->hide();
    }
    else
    {
        oopsteach *w6=new oopsteach("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\dsa\\file4.txt",nam,no);
        w6->show();
        this->hide();
    }
}


void teacher::on_close_clicked()
{
    MainWindow *w1=new MainWindow();
    w1->show();
    this->close();
}

