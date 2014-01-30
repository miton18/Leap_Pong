#include "balle.h"
#define SIZEBALL 5

Balle::Balle(int width, int height, int m_vitesse){
    x= width/2;
    y= height/2;
    defDeplacement();
    m_vitesse = 1000;
}

void Balle::defDeplacement(){//définition du déplacement de la balle
    int random = rand()%1;	//nombre aléatoire qui servira à savoir si le déplacement est positif ou non
    deplacementX = rand()%SIZEBALL;
    deplacementY = rand()%SIZEBALL;

    if (random){
        deplacementX = -deplacementX;
    }

    random = rand()%2;
    if (random){
        deplacementY = -deplacementY;
    }
}

void Balle::mouvement(){
    Sleep(m_vitesse);
    x += deplacementX;
    y += deplacementY;

}

void Balle::ricochet_fenetre(int width, int height){


 if (y <= SIZEBALL && deplacementY < 0) // si on est trop haut la balle redescend
 {
   deplacementY = -deplacementY; // rendre déplacementY positif
 }

 if (y >= height-SIZEBALL && deplacementY > 0)  // si on est trop bas la balle remonte
 {
   deplacementY = -deplacementY; // // rendre déplacementY négatif
 }


 if (x <= SIZEBALL && deplacementX < 0)
 {
   //-----------------GAME OVER player2,  player1 WIN--------------------------------
 }

 if ( x >= width-SIZEBALL && deplacementX > 0){
       //-----------------GAME OVER player1,  player2 WIN--------------------------------
 }
}


void Balle::ricochet_barre(){


}
