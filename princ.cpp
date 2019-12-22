// Basé sur :
// CC-BY Edouard.Thiel@univ-amu.fr - 22/01/2019

#include "princ.h"
#include <QColorDialog>
#include <QDebug>

Princ::Princ(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);
}

void Princ::on_doubleSpinBox_intervalle_valueChanged(double arg1)
{
    glarea->fumee->timeInterval = static_cast<float>(arg1) ;
}

void Princ::on_doubleSpinBox_duree_de_vie_valueChanged(double arg1)
{
    glarea->fumee->time_to_live_particle = static_cast<float>(arg1);
}

void Princ::on_pushButton_clicked()
{
    QColor color = QColorDialog::getColor(Qt::white, this);
    if(color.isValid())
        glarea->fumee->particle_color = QVector3D(color.red()/255.0f, color.green()/255.0f, color.blue()/255.0f);

}
