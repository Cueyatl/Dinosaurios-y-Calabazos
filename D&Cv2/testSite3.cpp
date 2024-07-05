#include "JugadorV2.h"
#include "EnemigosV2.h"
#include "Auxiliares.h"
#include "SisCombateV2.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iostream>


int main() {
  //OBLIGATORIOS PARA QUE JALE ESTE BISNE
  // Seed the random number generator only once (outside the loop)
  srand(time(NULL));
   JugadorV2 jugadorId;
   EnemigosV2 enemigoId;
    unique_ptr<PersonajeV2> jugador = jugadorId.seleccionarTipoClase(1, "Jugador");
    unique_ptr<PersonajeV2> enemigo = jugadorId.seleccionarTipoClase(1, "enemigo");
  SisCombateV2 combate;

  combate.combate(jugador,enemigo,2,2);
  
  

  return 0;
}
