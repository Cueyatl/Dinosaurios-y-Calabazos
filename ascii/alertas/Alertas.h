#ifndef ALERTAS_H
#define ALERTAS_H


#include "Imprimir_ASCII.h"
class Alertas{
    public:
        Imprimir_ASCII* alerta = new Imprimir_ASCII();
        void imprimir_menu_juego_1(){
            alerta->imprimirArchivo("menu_juego_1.txt");
        }
        void imprimir_menu_juego_2(){
            alerta->imprimirArchivo("menu_juego_2.txt");
        }
        void imprimir_menu_juego_3(){
            alerta->imprimirArchivo("menu_juego_3.txt");
        }
        void imprimir_creditos(){
            alerta->imprimirArchivo("creditos.txt");
        }
        void imprimir_alerta_subirnivel(){
            alerta->imprimirArchivo("alerta_subirnivel.txt");
        }
};
#endif //ALERTAS_H