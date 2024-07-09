#include "SisInventario.h"
#include "Auxiliares.h"
#include "JugadorV2.h"
#include "EnemigosV2.h"
#include "SisCombateV2.h"
#include "Interfaz.h"
#include <iostream>
#include <memory>

#include <ctime>

using namespace std;

int main(int argc, char const *argv[])
{
  srand(static_cast<unsigned int>(time(nullptr)));

  int tipoJugador = 1;
  int tipoEnemigo = 1;
  string name = "juan";
  
  // Instancia de las clases jugador y enemigo.
  JugadorV2 objJugador;
  EnemigosV2 objEnemigo;

  /*
   *unique_ptr es un puntero para generar una instancia de la clase de jugador y enemigo.
   * params: int clase de jugador y enemigo, string nombre del personaje.
   *
   */
  unique_ptr<PersonajeV2> jugador = objJugador.seleccionarTipoClase(tipoJugador, name);

  string mensaje_sinInventario = jugador->getNombre() + " tienen el inventario vacio.";
  jugador->agregarItem(11);
  jugador->agregarItem(11);
  jugador->agregarItem(1);
  // menu opciones
  map<int, string> menuOpciones;
  menuOpciones[1] = "  Atacar";
  menuOpciones[2] = "  Usar inventario";
  string msj_opciones="OPCIONES";
  cout<<Interfaz::init_menu(msj_opciones,menuOpciones);

  cout<<Auxiliares::init_menuInventario(jugador);


  return 0;
}
