#include "Maxi_includes.h"
#include <iostream>

LeapStart::LeapStart( std::string T, int w, int h, QWidget* parent ) : QWidget( parent ), title( new QString( T.c_str())), width( w ), height( h )
{
    // création

    create();
    connect();    

    // details
    resize( width, height );
    setWindowTitle( *title );
}

LeapStart::~LeapStart()
{
	delete title;
	
	delete layoutSlider;
        delete slider;
        delete number;
        
	delete mainLayout;
}

void LeapStart::create()
{
    mainLayout = new QVBoxLayout( this );

    layoutSlider = new QHBoxLayout();
        slider = new QSlider( Qt::Horizontal );
        number = new QLCDNumber();
        
    layoutSlider -> addWidget( slider );
    layoutSlider -> addWidget( number );
    
    start = new QPushButton( TEXT_START );
    
    mainLayout -> addLayout( layoutSlider );
    mainLayout -> addWidget( start );
}

void LeapStart::connect()
{
    QObject::connect( slider, SIGNAL(sliderMoved(int)), number, SLOT(display(int)), Qt::AutoConnection );
    QObject::connect( start, SIGNAL(clicked()), this, SLOT(launchPong()), Qt::AutoConnection );
}

void LeapStart::launchPong()
{
    std::cout << "hello" << std::endl;
    slide_val = this->slider->value ();   // recupere valeur slider;
    Fenetre_jeu * game = new Fenetre_jeu(slide_val);
    game->show ();
}
