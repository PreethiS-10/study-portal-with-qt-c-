#include "oops.h"
#include "ui_oops.h"
#include <QFile>
#include "innerwindow.h"
#include <QMessageBox>
#include <QTextStream>
#include <QFont> // Include QFont here

int num;
std::string str;
oops::oops(std::string name,int x,QWidget *parent) : QDialog(parent), ui(new Ui::oops) {
    ui->setupUi(this);
    num=x;
    str=name;
}

oops::~oops() {
    delete ui;
}

void oops::on_file1_clicked()
{
    QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file1.txt"));
    if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file1.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\probability\\file1.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\python\\file1.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\discretestructures\\file1.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\abstract\\file1.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\dsa\\file1.txt"));
    else
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file1.txt"));

    if (!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "info", file.errorString());
        return;
    }

    QTextStream in(&file);
    QFont fallbackFont("Monumtype Corsiva"); // Use Helvetica as fallback font
    ui->textBrowser->setFont(fallbackFont); // Set the font for textBrowser widget
    ui->textBrowser->setText(in.readAll());
    file.close();
}

void oops::on_close_clicked() {
    close();
    innerwindow *w1=new innerwindow(str);
    w1->show();
    this->close();
}

void oops::on_file2_clicked() {
    QFile file("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file2.txt");
    if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file2.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\probability\\file2.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\python\\file2.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\discretestructures\\file2.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\abstract\\file2.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\dsa\\file2.txt"));
    else
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file2.txt"));
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "info", file.errorString());
        return;
    }

    QTextStream in(&file);
    QFont fallbackFont("Monumtype Corsiva"); // Use Helvetica as fallback font
    ui->textBrowser->setFont(fallbackFont); // Set the font for textBrowser widget
    ui->textBrowser->setText(in.readAll());
    file.close();
}

void oops::on_file3_clicked() {
    QFile file("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file3.txt");
    if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file3.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\probability\\file3.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\python\\file3.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\discretestructures\\file3.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\abstract\\file3.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\dsa\\file3.txt"));
    else
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file3.txt"));
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "info", file.errorString());
        return;
    }

    QTextStream in(&file);
    QFont fallbackFont("Monumtype Corsiva"); // Use Helvetica as fallback font
    ui->textBrowser->setFont(fallbackFont); // Set the font for textBrowser widget
    ui->textBrowser->setText(in.readAll());
    file.close();
}

void oops::on_file4_clicked() {
    QFile file("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file4.txt");
    if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file4.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\probability\\file4.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\python\\file4.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\discretestructures\\file4.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\abstract\\file4.txt"));
    else if(num==1)
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\dsa\\file4.txt"));
    else
        QFile file(QString::fromStdString("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\oops\\file4.txt"));
    if (!file.open(QIODevice::ReadOnly)) {
        QMessageBox::information(0, "info", file.errorString());
        return;
    }

    QTextStream in(&file);
    QFont fallbackFont("Monumtype Corsiva"); // Use Helvetica as fallback font
    ui->textBrowser->setFont(fallbackFont); // Set the font for textBrowser widget
    ui->textBrowser->setText(in.readAll());
    file.close();
}
