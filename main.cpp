#include "Maxi_includes.h"

using namespace std;
using namespace Leap;




int main( int argc, char** argv ){
    QApplication app( argc, argv ); // init QT

        cout << endl << "début programme..." << endl;


        Frame frame;
        srand(time(0));

            LeapStart* window = new LeapStart();
			window -> show();



        //test
        /*for(int i=0;i<30;i++){
            Sleep(1000);
            recup(*controle, frame);
        }*/



        cout << endl << "fin programme..." << endl;
    return app.exec(); // nec QT
    return 0;
}
