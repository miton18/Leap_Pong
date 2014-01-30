#include "barre.h"

Barre::Barre(QWidget *parent, int position) : QWidget( parent ){



    //QMessageBox::information(parent, "alerte de jeu", "replacez vos mains !");

}


void Barre::position_leap(){


}
void Barre::paintEvent(QPaintEvent *event ) {

  QPainter painter;
  painter.begin(this);
  QRect * rect = new QRect(m_x, m_y , 130, 250);
  painter.fillRect(*rect, Qt::darkBlue);
  painter.end();

  // This is very important if you don't want to handle _every_
  // detail about painting this particular widget. Without this
  // the control would just be red, if that was the brush used,
  // for instance.
  //Barre::paintEvent(event);
}
