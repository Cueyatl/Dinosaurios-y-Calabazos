#include "Imprimir_ASCII.h"
class I_Zombie{
    public:
        LibreriaASCII* zombie = new LibreriaASCII();
        void imprimir_zombie_arco(){
            zombie->imprimirArchivo("zombie_arco.txt");
        }
        void imprimir_zombie_baston(){
            zombie->imprimirArchivo("zombie_baston.txt");
        }
        void imprimir_zombie_espada_1(){
            zombie->imprimirArchivo("zombie_espada_1.txt");
        }
        void imprimir_zombie_espada_2(){
            zombie->imprimirArchivo("zombie_espada_2.txt");
        }
        void imprimir_zombie_hacha(){
            zombie->imprimirArchivo("zombie_hacha.txt");
        }
}