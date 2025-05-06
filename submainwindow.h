#ifndef SUBMAINWINDOW_H
#define SUBMAINWINDOW_H

#include <QDialog>

namespace Ui {
class submainwindow;
}

class submainwindow : public QDialog
{
    Q_OBJECT

public:
    explicit submainwindow(QWidget *parent = nullptr);
    ~submainwindow();

private slots:
    void on_done_clicked();

    void on_studentcheck_clicked();

    void on_staffcheck_clicked();

private:
    Ui::submainwindow *ui;
};

#endif // SUBMAINWINDOW_H
