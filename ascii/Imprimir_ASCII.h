#ifndef IMPRIMIR_ASCII_H
#define IMPRIMIR_ASCII_H


// #include "alertas/Alertas.h"
// #include "armas/Armas.h"
// #include "enemigos/dinosaurio/Imprimir_Dinosaurio.h"
// #include "enemigos/esqueleto/Imprimir_Esqueleto.h"
// #include "enemigos/fantasma/Imprimir_Fantasma.h"
// #include "enemigos/grifo/Imprimir_Grifo.h"
// #include "enemigos/hada/Imprimir_Hada.h"
// #include "enemigos/lobo/Imprimir_Lobo.h"
// #include "enemigos/oso/Imprimir_Oso.h"
// #include "enemigos/peppa/Imprimir_Peppa.h"
// #include "enemigos/zombie/Imprimir_Zombie.h"
// #include "objetos/Imprimir_Objetos.h"
// #include "pasillo/Imprimir_Pasillo.h"
#include <iostream>
#include <fstream>
#include <thread>
#include <vector>
using namespace std;
class Imprimir_ASCII{
	public:
		void imprimirArchivo(string nombre){
			string linea;
	
			ifstream archivo(nombre.c_str());
			if(archivo.fail()){
			cout<<"No existe el fichero"<<endl;
				exit(1);
			}
			
			while(!archivo.eof()){
				getline(archivo,linea);
				if(!archivo.eof()){
					cout<<linea<<endl;
				}		
			}
			archivo.close();
		}
		void transicion(int segundos){
			this_thread::sleep_for(chrono::seconds(segundos));
			// system("cls");
		}
};
/*int main(){
	Libreria* prueba = new Libreria();
	
	prueba->imprimirArchivo("esqueleto_espada_1.txt");
	prueba->imprimirArchivo("esqueleto_espada_2.txt");
	prueba->imprimirArchivo("esqueleto_arco.txt");
	prueba->imprimirArchivo("esqueleto_baston.txt");
	prueba->imprimirArchivo("esqueleto_hacha.txt");
	
	//prueba->transicion();
	return 0;
}*/

#endif //IMPRIMIR_ASCII_H
