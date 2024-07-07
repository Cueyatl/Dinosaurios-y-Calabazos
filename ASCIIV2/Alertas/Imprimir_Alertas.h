#include "Imprimir_ASCII.h"
class Alertas{
    public:
        LibreriaASCII* alerta = new LibreriaASCII();
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
}