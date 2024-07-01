#include <iostream>
using namespace std;
class DialogoPeppaEscenario1{
    public:
        //Conversacion con buen carma
        void peppaDialogoBueno_A1(){
            cout<<"Yo se como puedes salir, pero debes de recorrer todo el calabozo."<<endl;
        }
        void peppaDialogoBueno_B1(){
            cout<<"Claro confia en mi, he estado aqui por mucho tiempo y conozco el"<<endl;
            cout<<"calabozo mejor que nadie."<<endl;
        }
        //Conversacion con mal karma
        void peppaDialogoMalo_A1(){
            cout<<"Joder como te atreves a venir aqui."<<endl;
        }
        void peppaDialogoMalo_B1(){
            cout<<"Jajaja por favor, no digas tonterias, derrotarme tu?"<<endl;
        }
        void peppaDialogoMalo_C1(){
            cout<<"Carajo!!!"<<endl;
        }
};