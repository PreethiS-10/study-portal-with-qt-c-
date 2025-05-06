#include "oopsteach.h"
#include "ui_oopsteach.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QFont>
#include <fstream>
#include <iostream>
#include "teacher.h"
std::string filen,staffname;
int xnum;

oopsteach::oopsteach(std::string filename,std::string name,int x,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::oopsteach)
{
    ui->setupUi(this);
    QFile file(QString::fromStdString(filename));
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "info", file.errorString());
        return;
    }
    xnum=x;
    staffname=name;
    QTextStream in(&file);
    QFont fallbackFont("Monotype Corsiva"); // Use Helvetica as fallback font
    ui->plainTextEdit->setFont(fallbackFont); // Set the font for textBrowser widget
    ui->plainTextEdit->insertPlainText(in.readAll());
    file.close();
    filen=filename;
}

oopsteach::~oopsteach()
{
    delete ui;
}
void intoFile(std::string content)
{
    std::ofstream file(filen);
    if (file.is_open())
    {
        file<<content<<'\n';
        file.close();
    }
    else
    {
        std::cout<< "Error opening file for writing.\n";
        assert(false);
    }
}

void oopsteach::on_save_clicked()
{
    std::string content2=ui->plainTextEdit->toPlainText().toStdString();
    intoFile(content2);
    QFile file(QString::fromStdString(filen));
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "info", file.errorString());
        return;
    }
    ui->plainTextEdit->clear();
    QTextStream in(&file);
    QFont fallbackFont("Monotype Corsiva"); // Use Helvetica as fallback font
    ui->plainTextEdit->setFont(fallbackFont); // Set the font for textBrowser widget
    ui->plainTextEdit->insertPlainText(in.readAll());
    file.close();
}


void oopsteach::on_close_clicked()
{
    this->close();
    teacher *w1=new teacher(staffname,xnum);
    w1->show();
    this->close();
}

