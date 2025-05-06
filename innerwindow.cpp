#include "innerwindow.h"
#include "ui_innerwindow.h"
#include "oops.h"
#include "mainwindow.h"
std::string s;
innerwindow::innerwindow(std:: string name,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::innerwindow)
{
    ui->setupUi(this);
    ui->name->setText(QString::fromStdString(name));
    s=name;
}

innerwindow::~innerwindow()
{
    delete ui;
}

void innerwindow::on_oops_clicked()
{
    oops *w1=new oops(s,1);
    w1->show();
    this->hide();
}


void innerwindow::on_probability_clicked()
{
    oops *w1=new oops(s,2);
    w1->show();
    this->hide();
}


void innerwindow::on_python_clicked()
{
    oops *w1=new oops(s,3);
    w1->show();
    this->hide();
}


void innerwindow::on_discrete_clicked()
{
    oops *w1=new oops(s,4);
    w1->show();
    this->hide();
}


void innerwindow::on_abstract_2_clicked()
{
    oops *w1=new oops(s,5);
    w1->show();
    this->hide();
}


void innerwindow::on_dsa_clicked()
{
    oops *w1=new oops(s,5);
    w1->show();
    this->hide();
}


void innerwindow::on_back_clicked()
{
    MainWindow *w1=new MainWindow();
    w1->show();
    this->close();
}




