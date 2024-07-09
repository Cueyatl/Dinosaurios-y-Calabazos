#include "Imprimir_ASCII.h"
class I_Objetos{
    public:
        LibreriaASCII* objetos = new LibreriaASCII();
        void imprimir_amuleto(){
            objetos->imprimirArchivo("amuleto.txt");
        }
        void imprimir_dinamita(){
            objetos->imprimirArchivo("dinamita.txt");
        }
        void imprimir_pocion_1(){
            objetos->imprimirArchivo("pocion_1.txt");
        }
        void imprimir_pocion_2(){
            objetos->imprimirArchivo("pocion_2.txt");
        }
        void imprimir_pocion_3(){
            objetos->imprimirArchivo("pocion_3.txt");
        }
}