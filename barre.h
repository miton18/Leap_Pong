#ifndef BARRE_H
#define BARRE_H
#include "Maxi_includes.h"

class Barre : public QWidget {
    Q_OBJECT

    public:
        Barre(QWidget *parent = 0 , int position = 0);

        int m_taille;
        int m_x;
        int m_y;

        void position_leap();
        void paintEvent(QPaintEvent *event = 0);
};

#endif // BARRE_H
