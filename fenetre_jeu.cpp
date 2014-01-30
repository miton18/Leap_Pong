#include "Maxi_includes.h"

Fenetre_jeu::Fenetre_jeu(int vitesse, QWidget *parent, int w, int h) : QWidget(parent){

    this->vitesse=vitesse;
    std::cout << "vitesse choisie: " << vitesse << std::endl;
    this->barreG = new Barre(this, 0);
    this->barreD = new Barre(this, 1);
    // création
    resize( w, h ); //taille normal
    create();
    connect();
    this->showMaximized (); //affiche en grand

    QTimer * timer = new QTimer(this);
    QObject::connect(timer, SIGNAL(timeout()), this, SLOT(update()));
    timer->start(this->vitesse);

}

void Fenetre_jeu::create(){

    barreLayout = new QGridLayout( this );
    Leap::Controller * controle = new Leap::Controller(); // initialise controller leap
    stop = new QPushButton( TEXT_EXIT, this );

    barreLayout->addWidget (this->barreG, 1, 0);
    barreLayout->addWidget (this->barreD, 1, 3); // definit largeur layout
    barreLayout->addWidget (stop, 0, 0);

   // Balle * ping = new Balle();

        this->barreD->m_x = 540;                      // en fonction de la fenetre
        this->barreD->m_y = +HAUTEUR_MAIN_MINI - recup(*controle, 1);
        this->barreG->m_x = 0;
        this->barreG->m_y = +HAUTEUR_MAIN_MINI - recup(*controle, 0);

    this->barreG->show ();
    this->barreD->show ();
    stop->show ();


}

void Fenetre_jeu::connect(){

    QObject::connect( stop, SIGNAL(clicked()), this, SLOT(exitPong()), Qt::AutoConnection );
}

void Fenetre_jeu::exitPong(){

    std::cout << "bye" << std::endl;
    hide();
}


int Fenetre_jeu::recup(Leap::Controller controle, int main){
/*=====================================================|\
||  recupère le controleur et la frame, initialise la  ||
||  frame et renvoi un tableau : [numero main][axe]    ||
||                                                     ||
\|=====================================================*/

     //std::cout << frame.hands()[0].palmPosition() << endl;
    Leap::Frame frame;
    frame = controle.frame ();

     if(main == 0){

         std::cout << frame.hands()[0].palmPosition ()[1] << endl;
         return frame.hands()[0].palmPosition ()[1];
     }
     else if (main == 1){

         std::cout << frame.hands()[1].palmPosition ()[1] << endl;
         return frame.hands()[1].palmPosition ()[1];
     }
}
void Fenetre_jeu::update(){

    std::cout << "coucou" << endl;

    this->barreD->m_y = +HAUTEUR_MAIN_MINI - recup(*controle, 1);
    this->barreG->m_y = +HAUTEUR_MAIN_MINI - recup(*controle, 0);

}
Fenetre_jeu::~Fenetre_jeu(){

}

