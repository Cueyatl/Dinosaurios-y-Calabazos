#ifndef LIBRERIAASCII
#define LIBRERIAASCII


#include "alertas/Alertas.h"
#include "armas/Armas.h"
#include "Enemigos/Dinosaurio/Imprimir_Dinosaurio.h"
#include "Enemigos/Esqueleto/Imprimir_Esqueleto.h"
#include "Enemigos/Fantasma/Imprimir_Fantasma.h"
#include "Enemigos/Grifo/Imprimir_Grifo.h"
#include "Enemigos/Hada/Imprimir_Hada.h"
#include "Enemigos/Lobo/Imprimir_Lobo.h"
#include "Enemigos/Oso/Imprimir_Oso.h"
#include "Enemigos/Peppa/Imprimir_Peppa.h"
#include "Enemigos/Zombie/Imprimir_Zombie.h"
#include "Objetos/Imprimir_Objetos.h"
#include "Pasillo/Imprimir_Pasillo.h"
#include <iostream>
#include <fstream>
#include <thread>
#include <vector>
using namespace std;
class LibreriaASCII{
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
			system("cls");
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

#endif //LIBRERIAASCII
