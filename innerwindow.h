#ifndef INNERWINDOW_H
#define INNERWINDOW_H

#include <QDialog>

namespace Ui {
class innerwindow;
}

class innerwindow : public QDialog
{
    Q_OBJECT

public:
    explicit innerwindow(std::string name,QWidget *parent = nullptr);
    ~innerwindow();

private slots:

    void on_oops_clicked();

    void on_probability_clicked();

    void on_python_clicked();

    void on_discrete_clicked();

    void on_abstract_2_clicked();

    void on_dsa_clicked();

    void on_back_clicked();

private:
    Ui::innerwindow *ui;
};

#endif // INNERWINDOW_H
