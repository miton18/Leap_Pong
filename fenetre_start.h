#ifndef HEADER_HPP
#define HEADER_HPP

#include <string>

#include <QtGui>
#include <QtWidgets/QtWidgets>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QApplication>

#define TEXT_START "Commencer"

class LeapStart : public QWidget{

    Q_OBJECT

	public:

        LeapStart(std::string T = "LeapStart", int w = 300, int h = 100, QWidget* parent = NULL );
        ~LeapStart( void );
        int slide_val;

	protected:

		QString* title;
        int width;
        int height;
        QVBoxLayout* mainLayout;
        QHBoxLayout* layoutSlider;
        	QSlider* slider;
        	QLCDNumber* number;
        QPushButton* start;
	
	protected slots:
        void launchPong( void );
	private:
        void create( void );
        void connect( void );
};

#endif // HEADER_HPP
