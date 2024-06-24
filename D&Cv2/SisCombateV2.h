#ifndef SISCOMBATE_H
#define SISCOMBATE_H
#include "SisInventario.h"

#include "JugadorV2.h"
#include "EnemigosV2.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class SisCombateV2
{
public:
  SisCombateV2();
  JugadorV2 jugadorId;
  EnemigosV2 enemigosId;


  void turnoJugador( 
    unique_ptr<PersonajeV2> &jugador,unique_ptr<PersonajeV2> &enemigo,int &tipoJugador, int &tipoEnemigo) {
      
    char opciones; 
    /*opciones:
      a = atacar 
        1= ataque_1
        2= ataque_2
        3=ataque_3
        4=ataque_4
      b = inventario
        auto jugador.mostrarInventario() 
        usar de inventario por llave.
    */ 
    if (opciones='a') 
    {
      int tipoAtaque;
      try
      {
        while (tipoAtaque >=1 && tipoAtaque <=4) {  
          switch (tipoAtaque) {  
            case 1:
              enemigo->setVida(jugador->ataque_1());
              break;
            case 2:
              enemigo->setVida(jugador->ataque_2());
              break;
            case 3:
              enemigo->setVida(jugador->ataque_3());
              break;
            case 4:
              enemigo->setVida(jugador->ataque_4());
              break;
            default:
              cout<<"no no";
              break;
          }
        }
      }
      catch(const exception& e)
        {cerr <<"Error en invocar tipo de ataque en SisCombate."<< e.what() << '\n';}
    }
    else
    {
     jugador->mostrarInventario();
     cout<<"usando Inventario.cpp";
    }
    
  }
  void combate(unique_ptr<PersonajeV2> jugador,unique_ptr<PersonajeV2> enemigo,int tipoJugador, int tipoEnemigo) {
    jugador = jugadorId.seleccionarTipoClase(tipoJugador, jugador->getNombre());
    enemigo = enemigosId.seleccionarTipoClase(tipoEnemigo, enemigo->getNombre());

    string mensaje_encuentro=enemigo->getNombre()+ " quiere pelear!!";
    double enemigoVidaInicial= enemigo->getVida();
    while (jugador->getVida() > 0 && enemigo->getVida() > 0) {
        // TurnoJugador del Jugador
        turnoJugador(jugador, enemigo, tipoJugador, tipoEnemigo);
        int seleccionAtaque=rand()%4+1;
          switch (seleccionAtaque) {  
            case 1:
              jugador->setVida(enemigo->ataque_1());
              jugador->getVida();
              break;
            case 2:
              jugador->setVida(enemigo->ataque_2());
              jugador->getVida();
              break;
            case 3:
              jugador->setVida(enemigo->ataque_3());
              jugador->getVida();
              break;
            case 4:
              jugador->setVida(enemigo->ataque_4());
              jugador->getVida();
              break;
            default:
              cout<<"no no";
              break;
            if (enemigo->getVida()<=enemigoVidaInicial * 0.4)
            {
              enemigo->mostrarInventario();
              enemigo->getVida();
            }
    }

    if (jugador->getVida() > 0) {
        cout << "El jugador " << jugador->getNombre() << " ha ganado!" << endl;
    } else {
        cout << "El enemigo " << enemigo->getNombre() << " ha ganado!" << endl;
    }
}
  }
  ~SisCombateV2();
};


#endif //SISCOMBATE_H