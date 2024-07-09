#include "Imprimir_ASCII.h"
class I_Esqueleto{
    public:
        LibreriaASCII* esqueleto = new LibreriaASCII();
        void imprimir_esqueleto_arco(){
            esqueleto->imprimirArchivo("esqueleto_arco.txt");
        }
        void imprimir_esqueleto_baston(){
            esqueleto->imprimirArchivo("esqueleto_baston.txt");
        }
        void imprimir_esqueleto_espada_1(){
            esqueleto->imprimirArchivo("esqueleto_espada_1.txt");
        }
        void imprimir_esqueleto_espada_2(){
            esqueleto->imprimirArchivo("esqueleto_espada_2.txt");
        }
        void imprimir_esqueleto_hacha(){
            esqueleto->imprimirArchivo("esqueleto_hacha.txt");
        }
}