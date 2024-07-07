#include "SisInventario.h"
#include "Auxiliares.h"
#include "JugadorV2.h"
#include "EnemigosV2.h"
#include "SisCombateV2.h"
#include <iostream>
#include <memory>
#include <stdexcept>
#include <ctime>
using namespace std;

int main() {
//Agrega una semilla usando la hora actual para generar numeros aleatorios.
    srand(static_cast<unsigned int>(time(nullptr)));


    int tipoJugador = 1;
    int tipoEnemigo = 1;
    string name="juan";

    //Instancia de las clases jugador y enemigo.
    JugadorV2 objJugador;
    EnemigosV2 objEnemigo;

    /*
    *unique_ptr es un puntero para generar una instancia de la clase de jugador y enemigo.
    * params: int clase de jugador y enemigo, string nombre del personaje.
    * 
    */
    unique_ptr<PersonajeV2> jugador = objJugador.seleccionarTipoClase(tipoJugador,name);
    unique_ptr<PersonajeV2> enemigo = objEnemigo.seleccionarTipoClase(tipoEnemigo, "GRIFO EL DESESPERADO DE LA SOLEDAD"); 
    
    //Ejemplo de agregar objetos a inventario.
    jugador->agregarItem(1);
    jugador->agregarItem(9);
    jugador->agregarItem(3);

    
    //Ejecutando combate.
    try {
        //Instancia de sistema de combate v2. params: unique_ptr<PersonajeV2> jugador,unique_ptr<PersonajeV2> enemigo.
        SisCombateV2 combate(jugador, enemigo);
        //Inicia combate.
        combate.init_Combate();
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;  
    }
    }