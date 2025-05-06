#include "submainwindow.h"
#include "ui_submainwindow.h"
#include "student.h"
#include "staff.h"
#include <fstream>
#include "mainwindow.h"
submainwindow::submainwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::submainwindow)
{
    ui->setupUi(this);
}

submainwindow::~submainwindow()
{
    delete ui;
}


string id3, password3,oldpass;
bool studentChecked3 = false;
bool staffChecked3 = false;

bool check_user1(const Student& student,string &oldpass) {
    ifstream file("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\login info\\staff.txt.txt",ios::binary);
    if (!file.is_open()) {
        cout << "Failed to open staff file for reading." << endl;
        return false;
    }

    string id, password;
    while (file >> id >> password) {
        if (id == student.get_id()) {
            password = student.get_password();
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

bool check_user_staff(const Staff& staff,string &oldpass) {
    ifstream file("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\login info\\staff.txt.txt",ios::binary);
    if (!file.is_open()) {
        cout << "Failed to open staff file for reading." << endl;
        return false;
    }

    string id, password,sub;
    while (file >> id >> password >> sub) {
        if (id == staff.get_id()) {
            password =staff.get_password();
            file.close();
            return true;
        }
    }
    oldpass=password;
    file.close();
    return false;
}
void replaceWordInFile(  string oldWord, string newWord)
{
    std::ifstream file("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\login info\\staff.txt.txt",ios::binary);
    if (!file.is_open())
    {
        std::cerr << "Error: Unable to open file: " << "C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\login info\\staff.txt.txt"<<endl;
        return;
    }

    std::string content;
    std::string line;
    while (std::getline(file, line))
    {
        size_t pos = 0;
        while ((pos = line.find(oldWord, pos)) != std::string::npos)
        {
            line.replace(pos, oldWord.length(), newWord);
            pos += newWord.length();
        }
        content += line + '\n';
    }

    file.close();

    std::ofstream outFile("C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\login info\\staff.txt.txt");
    if (!outFile.is_open())
    {
        std::cerr << "Error: Unable to open file for writing: " << "C:\\Users\\mohan\\OneDrive\\Documents\\preethiPackage\\login info\\staff.txt.txt" << std::endl;
        return;
    }

    outFile << content;
    outFile.close();

    std::cout << "Word replaced successfully." << std::endl;
}

void submainwindow::on_done_clicked() {
    int check2 = 0;
    if (studentChecked3) {
        id3 = ui->userid->text().toStdString();
        password3 = ui->password->text().toStdString();
        Student s1(id3, password3);
        check2 = check_user1(s1,oldpass);
        replaceWordInFile(oldpass,password3);
        studentChecked3 = false;
    }
    if (staffChecked3) {
        id3 = ui->userid->text().toStdString();
        password3 = ui->password->text().toStdString();
        Staff s1(id3, password3);
        check2 = check_user_staff(s1,oldpass);
        replaceWordInFile(oldpass,password3);
        staffChecked3 = false;
    }
    MainWindow *w1=new MainWindow();
    w1->show();
    this->close();
}




void submainwindow::on_studentcheck_clicked() {
    studentChecked3 = true;
}

void submainwindow::on_staffcheck_clicked() {
    staffChecked3 = true;
}

