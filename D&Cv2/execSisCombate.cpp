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
    srand(static_cast<unsigned int>(time(nullptr)));


    int tipoJugador = 1;
    int tipoEnemigo = 1;
    string name="juan";
    JugadorV2 objJugador;
    EnemigosV2 objEnemigo;

    unique_ptr<PersonajeV2> jugador = objJugador.seleccionarTipoClase(tipoJugador,name);
    unique_ptr<PersonajeV2> enemigo = objEnemigo.seleccionarTipoClase(tipoEnemigo, "GRIFO EL DESESPERADO DE LA SOLEDAD"); // Use a placeholder name
    jugador->agregarItem(2);
    jugador->agregarItem(9);

    

    try {
        SisCombateV2 combate(jugador, enemigo);
        combate.init_Combate();
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    }