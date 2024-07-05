#include <iostream>
#include <fstream>
#include <thread>
#include <vector>
using namespace std;
class Libreria{
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
		void transicion(){
			this_thread::sleep_for(chrono::seconds(1));
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