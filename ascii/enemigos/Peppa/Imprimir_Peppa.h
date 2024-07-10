#ifndef IMPRIMIR_PEPPA_H
#define IMPRIMIR_PEPPA_H


#include "Imprimir_ASCII.h"
class I_Peppa{
    public:
        Imprimir_ASCII* peppa = new Imprimir_ASCII();
        void imprimir_peppa_arco(){
            peppa->imprimirArchivo("peppa_arco.txt");
        }
        void imprimir_peppa_baston(){
            peppa->imprimirArchivo("peppa_baston.txt");
        }
        void imprimir_peppa_espada_1(){
            peppa->imprimirArchivo("peppa_espada_1.txt");
        }
        void imprimir_peppa_espada_2(){
            peppa->imprimirArchivo("peppa_espada_2.txt");
        }
        void imprimir_peppa_hacha(){
            peppa->imprimirArchivo("peppa_hacha.txt");
        }
};
#endif //IMPRIMIR_PEPPA_H
