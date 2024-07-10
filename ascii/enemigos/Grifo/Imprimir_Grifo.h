#ifndef IMPRIMIR_GRIFO_H
#define IMPRIMIR_GRIFO_H


#include "Imprimir_ASCII.h"
class I_Grifo{
    public:
        Imprimir_ASCII* grifo = new Imprimir_ASCII();
        void imprimir_grifo_arco(){
            grifo->imprimirArchivo("grifo_arco.txt");
        }
        void imprimir_grifo_baston(){
            grifo->imprimirArchivo("grifo_baston.txt");
        }
        void imprimir_grifo_espada_1(){
            grifo->imprimirArchivo("grifo_espada_1.txt");
        }
        void imprimir_grifo_espada_2(){
            grifo->imprimirArchivo("grifo_espada_2.txt");
        }
        void imprimir_grifo_hacha(){
            grifo->imprimirArchivo("grifo_hacha.txt");
        }
};
#endif //IMPRIMIR_GRIFO_H
