#ifndef OOPSTEACH_H
#define OOPSTEACH_H

#include <QDialog>

namespace Ui {
class oopsteach;
}

class oopsteach : public QDialog
{
    Q_OBJECT

public:
    explicit oopsteach(std::string filepath,std::string name,int num,QWidget *parent = nullptr);
    ~oopsteach();

private slots:
    void on_save_clicked();
    void on_close_clicked();


private:
    Ui::oopsteach *ui;
};

#endif // OOPSTEACH_H
