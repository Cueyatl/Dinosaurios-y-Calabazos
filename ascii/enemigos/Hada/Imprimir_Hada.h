#ifndef iMPRIMIR_HADA_H
#define iMPRIMIR_HADA_H


#include "Imprimir_ASCII.h"
class I_Hada{
    public:
        Imprimir_ASCII* hada = new Imprimir_ASCII();
        void imprimir_hada_arco(){
            hada->imprimirArchivo("hada_arco.txt");
        }
        void imprimir_hada_baston(){
            hada->imprimirArchivo("hada_baston.txt");
        }
        void imprimir_hada_espada_1(){
            hada->imprimirArchivo("hada_espada_1.txt");
        }
        void imprimir_hada_espada_2(){
            hada->imprimirArchivo("hada_espada_2.txt");
        }
        void imprimir_hada_hacha(){
            hada->imprimirArchivo("hada_hacha.txt");
        }
};
#endif //iMPRIMIR_HADA_H
