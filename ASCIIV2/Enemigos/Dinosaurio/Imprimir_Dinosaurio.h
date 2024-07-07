#include "Imprimir_ASCII.h"
class I_Dinosaurio{
    public:
        LibreriaASCII* dinosaurio = new LibreriaASCII();
        void imprimir_dinosaurio_arco(){
            dinosaurio->imprimirArchivo("dinosaurio_arco.txt");
        }
        void imprimir_dinosaurio_baston(){
            dinosaurio->imprimirArchivo("dinosaurio_baston.txt");
        }
        void imprimir_dinosaurio_espada_1(){
            dinosaurio->imprimirArchivo("dinosaurio_espada_1.txt");
        }
        void imprimir_dinosaurio_espada_2(){
            dinosaurio->imprimirArchivo("dinosaurio_espada_2.txt");
        }
        void imprimir_dinosaurio_hacha(){
            dinosaurio->imprimirArchivo("dinosaurio_hacha.txt");
        }
}