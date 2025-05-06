#include "submainwindow1.h"
#include "ui_submainwindow1.h"
#include "student.h"
#include <iostream>
#include <fstream>
#include <cassert>
#include "mainwindow.h"
subMainWindow1::subMainWindow1(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::subMainWindow1)
{
    ui->setupUi(this);
}

subMainWindow1::~subMainWindow1()
{
    delete ui;
}
string id1,password1;


void add_to_file(const Student& s1)
{
    std::ofstream file("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\login info\\student.txt.txt", std::ios::app);
    if (file.is_open())
    {
        file<<s1.get_id()<<" "<<s1.get_password()<<'\n';
        file.close();
    }
    else
    {
        std::cout << "Error opening file for writing.\n";
        assert(false);
    }
}





void subMainWindow1::on_create_clicked()
{

    id1= ui->userid->text().toStdString();
    password1 = ui->password->text().toStdString();
    Student s1(id1, password1);
    add_to_file(s1);
    MainWindow *w1=new MainWindow();
    w1->show();
    this->close();
}
