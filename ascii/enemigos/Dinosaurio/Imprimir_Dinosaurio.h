#ifndef IMPRIMIR_DINOSAURIO_H
#define IMPRIMIR_DINOSAURIO_H



#include "Imprimir_ASCII.h"
class Imprimir_Dinosaurio{
    public:
        Imprimir_ASCII* dinosaurio = new Imprimir_ASCII();
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
};
#endif //IMPRIMIR_DINOSAURIO_H