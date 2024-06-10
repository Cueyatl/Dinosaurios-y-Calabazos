#include <iostream>
using namespace std;
class DialogoJugadorPeppaEscenario1{
    public:
        //Conversacion con buen carma
        void jugadorDialogoBueno_Peppa_A1(){
            cout<<"En verdad sabes como salir de aqui?"<<endl;
        }
        void jugadorDialogoBueno_Peppa_B1(){
            cout<<"Que alegria!!!.... por supuesto que confio en ti."<<endl; 
        }
        //Conversacion con mal karma
        void jugadorDialogoMalo_Peppa_A1(){
            cout<<"Vengo a derrotarte."<<endl;
        }
        void jugadorDialogoMalo_Peppa_B1(){
            cout<<"Vas a lamentar no haber salido corriendo."<<endl;
        }
};