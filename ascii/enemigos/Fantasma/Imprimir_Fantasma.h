#ifndef IMPRIMIR_FANTASMA_H
#define IMPRIMIR_FANTASMA_H
#include "Imprimir_ASCII.h"
class I_Fantasma{
    public:
        Imprimir_ASCII* fantasma = new Imprimir_ASCII();
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
};
#endif //IMPRIMIR_FANTASMA_H
