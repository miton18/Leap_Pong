#ifndef FENETRE_JEU_H
#define FENETRE_JEU_H

#include "barre.h"
#include "Maxi_includes.h"
#define TEXT_EXIT "fermer"
#define HAUTEUR_MAIN_MINI 200       // hauteur minimum des mains

class Fenetre_jeu : public QWidget {

    Q_OBJECT

    public:

        Barre * barreG;
        Barre * barreD;
        explicit Fenetre_jeu(int vitesse, QWidget *parent = 0, int w = 400, int h = 400);
        ~Fenetre_jeu();
        void afficherAxes();
        int vitesse;
        int Fenetre_jeu::recup(Leap::Controller controle, int main);



    protected:
        QGridLayout * barreLayout;
        QTabWidget * menu;
        QPushButton* stop;


    protected slots:

        void exitPong( void );
        void update();

    private:

        void create( void );
        void connect( void );


};

#endif // FENETRE_JEU_H
