#ifndef SUBMAINWINDOW1_H
#define SUBMAINWINDOW1_H

#include <QMainWindow>

namespace Ui {
class subMainWindow1;
}

class subMainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit subMainWindow1(QWidget *parent = nullptr);
    ~subMainWindow1();

private slots:


    void on_create_clicked();

private:
    Ui::subMainWindow1 *ui;
};

#endif // SUBMAINWINDOW1_H
