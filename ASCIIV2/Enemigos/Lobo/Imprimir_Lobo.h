#include "Imprimir_ASCII.h"
class I_Lobo{
    public:
        LibreriaASCII* lobo = new LibreriaASCII();
        void imprimir_lobo_arco(){
            lobo->imprimirArchivo("lobo_arco.txt");
        }
        void imprimir_lobo_baston(){
            lobo->imprimirArchivo("lobo_baston.txt");
        }
        void imprimir_lobo_espada_1(){
            lobo->imprimirArchivo("lobo_espada_1.txt");
        }
        void imprimir_lobo_espada_2(){
            lobo->imprimirArchivo("lobo_espada_2.txt");
        }
        void imprimir_lobo_hacha(){
            lobo->imprimirArchivo("lobo_hacha.txt");
        }
}