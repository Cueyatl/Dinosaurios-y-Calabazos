#include "Imprimir_ASCII.h"
class I_Fantasma{
    public:
        LibreriaASCII* fantasma = new LibreriaASCII();
        void imprimir_fantasma_arco(){
            fantasma->imprimirArchivo("fantasma_arco.txt");
        }
        void imprimir_fantasma_baston(){
            fantasma->imprimirArchivo("fantasma_baston.txt");
        }
        void imprimir_fantasma_espada_1(){
            fantasma->imprimirArchivo("fantasma_espada_1.txt");
        }
        void imprimir_fantasma_espada_2(){
            fantasma->imprimirArchivo("fantasma_espada_2.txt");
        }
        void imprimir_fantasma_hacha(){
            fantasma->imprimirArchivo("fantasma_hacha.txt");
        }
}