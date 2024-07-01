#include <iostream>
using namespace std;
class DialogoLorenzoEscenario1{
    public:
        //Conversacion con buen karma
        void lorenzoDialogoBueno_A1(){
            cout<<"Quien osa despertarme?"<<endl;
        }
        void lorenzoDialogoBueno_B1(){
            cout<<"Quien eres tu?"<<endl;
        }
        void lorenzoDialogoBueno_C1(){
            cout<<"Que haceis en mi territorio?"<<endl;
        }
        void lorenzoDialogoBueno_D1(){
            cout<<"Yo conozco una salida, pero tendras que recorrer todo el calabozo."<<endl;
        }
        //Conversacion con mal karma
        void lorenzoDialogoMalo_A1(){
            cout<<"Quien osa despertarme?"<<endl;
        }
        void lorenzoDialogoMalo_B1(){
            cout<<"Quien eres tu y que haces en mi calabozo?"<<endl; 
        }
        void lorenzoDialogoMalo_C1(){
            cout<<"Jajaja imposible, no creo que seas capaz de derrotarme."<<endl;
        }
        void lorenzoDialogoMalo_D1(){
            cout<<"Es la unica forma en la que puedes salir de aqui."<<endl;
        }
        void lorenzoDialogoMalo_E1(){
            cout<<"*Ruje e inicia la pelea.*"<<endl;
        }
};
