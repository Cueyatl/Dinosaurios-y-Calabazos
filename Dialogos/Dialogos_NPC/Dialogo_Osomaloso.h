#include <iostream>
using namespace std;
class DialogoOsomalosoEscenario1{
    public:
        //Conversacion con buen karma
        void osomalosoDialogoBueno_A1(){
            cout<<"Quien eres tu?"<<endl;
        }
        void osomalosoDialogoBueno_B1(){
            cout<<"Como llegaste aqui chiquitin?"<<endl;
        }
        void osomalosoDialogoBueno_C1(){
            cout<<"Puedes quedarte aqui conmigo si quieres, he estado solo tanto tiempo."<<endl;
        }
        void osomalosoDialogoBueno_D1(){
            cout<<"Tal vez pueda ayudarte a salir de esta parte del calabozo, veras tengo conmigo una"<<endl;
            cout<<"llave magica que te ayudara a abrir todas las puertas del castillo."<<endl;
        }
        //Conversacion con mal karma
        void osomalosoDialogoMalo_A1(){
            cout<<"Que te hace creer que eres capaz de poder enfrentarme y derrotarme a mi?"<endl;
        }
        void osomalosoDialogoMalo_B1(){
            cout<<"A si? A donde crees que vas?"<<endl; 
        }
};
