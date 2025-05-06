#ifndef OOPS_H
#define OOPS_H

#include <QDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QFont>
namespace Ui {
class oops;
}

class oops : public QDialog
{
    Q_OBJECT

public:
    explicit oops(std::string name,int x,QWidget *parent = nullptr);
    ~oops();

private slots:
    void on_file1_clicked();

    void on_close_clicked();

    void on_file2_clicked();

    void on_file3_clicked();

    void on_file4_clicked();

private:
    Ui::oops *ui;
};

#endif // OOPS_H
