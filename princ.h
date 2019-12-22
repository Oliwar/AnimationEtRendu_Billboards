// Basé sur :
// CC-BY Edouard.Thiel@univ-amu.fr - 22/01/2019

#ifndef PRINC_H
#define PRINC_H

#include "ui_princ.h"

class Princ : public QMainWindow, private Ui::Princ
{
    Q_OBJECT

public:
    explicit Princ(QWidget *parent = nullptr);
private slots:
    void on_doubleSpinBox_intervalle_valueChanged(double arg1);
    void on_doubleSpinBox_duree_de_vie_valueChanged(double arg1);
    void on_pushButton_clicked();
};

#endif // PRINC_H
