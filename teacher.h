#ifndef TEACHER_H
#define TEACHER_H

#include <QDialog>
#include <iostream>

namespace Ui {
class teacher;
}

class teacher : public QDialog
{
    Q_OBJECT

public:
    explicit teacher(std::string name,int x,QWidget *parent = nullptr);
    ~teacher();
    std::string name;
    int x;

private slots:
    void on_file1_clicked();

    void on_file2_clicked();

    void on_file3_clicked();

    void on_file4_clicked();

    void on_close_clicked();

private:
    Ui::teacher *ui;
};

#endif // TEACHER_H
