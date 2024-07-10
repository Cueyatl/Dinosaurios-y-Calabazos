#ifndef IMPRIMIR_PASILLO_H
#define IMPRIMIR_PASILLO_H


#include "Imprimir_ASCII.h"
class I_Pasillo{
    public:
        Imprimir_ASCII* pasillo = new Imprimir_ASCII();
        void imprimir_escena_1(){
            pasillo->imprimirArchivo("escena_1.txt");
        }
        void imprimir_escena_2(){
            pasillo->imprimirArchivo("escena_2.txt");
        }
        void imprimir_escena_3(){
            pasillo->imprimirArchivo("escena_3.txt");
        }
        void imprimir_escena_4(){
            pasillo->imprimirArchivo("escena_4.txt");
        }
        void imprimir_escena_5(){
            pasillo->imprimirArchivo("escena_5.txt");
        }
        void imprimir_escena_6(){
            pasillo->imprimirArchivo("escena_6.txt");
        }
        void imprimir_escena_7(){
            pasillo->imprimirArchivo("escena_7.txt");
        }
        void imprimir_escena_8(){
            pasillo->imprimirArchivo("escena_8.txt");
        }
        void imprimir_escena_9(){
            pasillo->imprimirArchivo("escena_9.txt");
        }
        void imprimir_escena_10(){
            pasillo->imprimirArchivo("escena_10.txt");
        }
        void imprimir_escena_11(){
            pasillo->imprimirArchivo("escena_11.txt");
        }
        void imprimir_escena_12(){
            pasillo->imprimirArchivo("escena_12.txt");
        }
};
#endif //IMPRIMIR_PASILLO_H