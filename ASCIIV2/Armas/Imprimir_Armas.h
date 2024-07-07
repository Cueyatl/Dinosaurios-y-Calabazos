#include "Imprimir_ASCII.h"
class Armas{
    public:
        LibreriaASCII* armas = new LibreriaASCII();
        void imprimir_arco(){
            armas->imprimirArchivo("arco.txt");
        }
        void imprimir_baston(){
            armas->imprimirArchivo("baston.txt");
        }
        void imprimir_espada_1(){
            armas->imprimirArchivo("espada_1.txt");
        }
        void imprimir_espada_2(){
            armas->imprimirArchivo("espada_2.txt");
        }
        void imprimir_glock22(){
            armas->imprimirArchivo("glock22.txt");
        }
        void imprimir_hacha(){
            armas->imprimirArchivo("hacha.txt");
        }
}