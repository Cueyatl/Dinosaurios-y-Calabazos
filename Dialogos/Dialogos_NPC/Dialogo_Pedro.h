#include <iostream>
using namespace std;
class DialogoPedroEscenario1{
    public:
        //Conversacion con buen karma
        void pedroDialogoBueno_A1(){
            cout<<"Vale la pena, no olvides por que luchamos por encontrar la salida de aqui."<<endl;
        }
        void pedroDialogoBueno_B1(){
            cout<<"Recuerda las pociones regeneran tu vida y te dan poderes."<<endl;
        }
        //Conversacion con mal karma
        void pedroDialogoMalo_A1(){
            cout<<"Mi apetito no conoce limites, hoy sereis mi cena..."<<endl;
        }
        void pedrotoDialogoMalo_B1(){
            cout<<""<<endl; 
        }
};
