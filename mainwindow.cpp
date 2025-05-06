#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "staff.h"
#include "student.h"
#include "submainwindow1.h"
#include "submainwindow.h"
#include "innerwindow.h"
#include <fstream>
#include "oopsteach.h"
#include "teacher.h"


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

std::string id, password,subject="";
bool studentChecked1 = false;
bool staffChecked1 = false;

bool checkUser(const Student& student) {
    ifstream file("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\login info\\student.txt.txt",ios::binary);
    if (!file.is_open()) {
        cout << "Failed to open staff file for reading." << endl;
        return false;
    }

    string id, password;
    while (file >> id >> password) {
        if (id == student.get_id() && password == student.get_password()) {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

bool checkUserStaff(const Staff& staff,std::string &subject) {
    ifstream file("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\login info\\staff.txt.txt",ios::binary);
    if (!file.is_open()) {
        cout << "Failed to open staff file for reading." << endl;
        return false;
    }

    string id, password,sub;
    while (file >> id >> password>>sub) {
        if (id == staff.get_id() && password == staff.get_password()) {
            subject=sub;
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

void MainWindow::on_login_clicked()
{
    std::string id = ui->userid->text().toStdString();
    std::string password = ui->password->text().toStdString();

    if (studentChecked1)
    {
        Student student(id, password);
        if (checkUser(student))
        {
            ui->check->setText("Found");
            studentChecked1=false;
            innerwindow *w1 = new innerwindow(id);
            w1->show();
            this->hide();
        }
    }
    else if (staffChecked1)
    {
        Staff staff(id, password);
        if (checkUserStaff(staff,subject))
        {
            ui->check->setText("Found");
            staffChecked1=false;
            if(subject=="c++")
            {
                teacher *w1=new teacher(staff.get_id(),1);
                w1->show();
                this->hide();
            }
            else if(subject=="probability")
            {
                teacher *w2=new teacher(staff.get_id(),2);
                w2->show();
                this->hide();
            }
            else if(subject=="python")
            {
                teacher *w3=new teacher(staff.get_id(),3);
                w3->show();
                this->hide();
            }
            else if(subject=="discrete")
            {
                teacher *w4=new teacher(staff.get_id(),4);
                w4->show();
                this->hide();
            }
            else if(subject=="abstract")
            {
                teacher *w5=new teacher(staff.get_id(),5);
                w5->show();
                this->hide();
            }
            else
            {
                teacher *w6=new teacher(staff.get_id(),6);
                w6->show();
                this->hide();
            }
        }
    }

        ui->check->setText("Not Found");

}

void MainWindow::on_signup_clicked()
{
    subMainWindow1 *w1 = new subMainWindow1();
    w1->show();
    this->hide();
}

void MainWindow::on_studentcheck_clicked()
{
    studentChecked1 = true;
}

void MainWindow::on_staffcheck_clicked()
{
    staffChecked1 = true;
}

void MainWindow::on_forgotpassword_clicked()
{
    submainwindow *w1 = new submainwindow();
    w1->show();
    this->hide();
}
