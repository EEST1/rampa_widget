#ifndef RAMPA_H
#define RAMPA_H

#include <QWidget>

namespace Ui {
class rampa;
}

class rampa : public QWidget
{
    Q_OBJECT

public:
    explicit rampa(QWidget *parent = 0);
    ~rampa();

private slots:
    void on_Start_clicked();

    void on_Stop_clicked();

    void on_Reset_clicked();

    void on_Leer_clicked();

    void on_Conectar_clicked();

private:
    Ui::rampa *ui;
};

#endif // RAMPA_H
