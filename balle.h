#ifndef BALLE_H
#define BALLE_H
#include "Maxi_includes.h"

class Balle : public QWidget{

    public:

        Balle(int width, int height, int m_vitesse);
        void ricochet_fenetre( int width, int height);
        void defDeplacement();
        void ricochet_barre();
        void direction();
        void mouvement();
        void vitesse();

    private:

        int m_taille;
        int m_vitesse;
        int deplacementX;
        int deplacementY;
        int x;
        int y;
};

#endif // BALLE_H
