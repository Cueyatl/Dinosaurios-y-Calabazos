#include "SisInventario.h"
#include "Auxiliares.h"
#include "JugadorV2.h"
#include "EnemigosV2.h"
#include "SisCombateV2.h"
#include "Interfaz.h"
#include <iostream>
#include <memory>
#include <stdexcept>
#include <ctime>






int main(int argc, char const *argv[])
{

  

 map<int, string> menuOpciones;
    menuOpciones[1]="Atacar";
    menuOpciones[2]="Usar inventario";
 map<int, string> menuInventario;
     
 map<int, string> seleccionarDeInventario;


    // Inserting elements
    //seleccionar opciones 1 al 2.
    //seleccionar objetos del inventario.  0 al 10.
    
    //seleccionar ataque int 1 al 4.

    // Accessing elements
    cout << "Key 1: " << menuOpciones[1] << endl;
    
    

  return 0;
}
