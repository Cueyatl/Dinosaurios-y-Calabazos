#include "Imprimir_ASCII.h"
class I_Oso{
    public:
        LibreriaASCII* oso = new LibreriaASCII();
        void imprimir_oso_arco(){
            oso->imprimirArchivo("oso_arco.txt");
        }
        void imprimir_oso_baston(){
            oso->imprimirArchivo("oso_baston.txt");
        }
        void imprimir_oso_espada_1(){
            oso->imprimirArchivo("oso_espada_1.txt");
        }
        void imprimir_oso_espada_2(){
            oso->imprimirArchivo("oso_espada_2.txt");
        }
        void imprimir_oso_hacha(){
            oso->imprimirArchivo("oso_hacha.txt");
        }
}