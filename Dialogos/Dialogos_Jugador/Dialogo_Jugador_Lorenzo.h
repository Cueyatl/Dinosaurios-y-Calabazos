#include <iostream>
using namespace std;
class DialogoJugadorLorenzoEscenario1{
    public:
        //Conversacion con buen carma
        void jugadorDialogoBueno_Lorenzo_A1(){
            cout<<"Ouuu..."<<endl;
        }
        void jugadorDialogoBueno_Lorenzo_B1(){
            cout<<"Soy...soy..."<<endl; 
        }
        void jugadorDialogoBueno_Lorenzo_C1(){
            cout<<"Estoy perdido no se como llegue aqui, parece que no hay salida."<<endl;
        }
        void jugadorDialogoBueno_Lorenzo_D1(){
            cout<<"Joder, es la unica salida, que mas da."<<endl;
        }

        //Conversacion con mal karma
        void jugadorDialogoMalo_Lorenzo_A1(){
            cout<<"Ouuu..."<<endl;
        }
        void jugadorDialogoMalo_Lorenzo_B1(){
            cout<<"Solo estoy buscando una salida de este maldito calabozo."<<endl; 
        }
        void jugadorDialogoMalo_Lorenzo_C1(){
            cout<<"Derrotarte?"<<endl;
        }
        void jugadorDialogoMalo_Lorenzo_D1(){
            cout<<"Joder ganarte? No tenias algo mas dificil jajajaja..."<<endl;
        }
};