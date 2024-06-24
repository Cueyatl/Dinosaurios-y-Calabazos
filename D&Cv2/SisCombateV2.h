#ifndef SISCOMBATE_H
#define SISCOMBATE_H
#include "SisInventario.h"
#include "Auxiliares.h"
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
  /*Calcula la posible estamina usada por cada ataque.*/
  double calcularEstamina(int ataque){
    switch (ataque)
    {
    case 1:
      return rand() % 25 + 15;
      break;
    case 2:
      return rand() % 23 + 18;
      break;
    case 3:
      return rand() % 21 + 17;
      break;
    case 4:
      return rand() % 19 + 11;
      break;
    default:
      return -1;
      break;
    }
  }
  void turnoJugador(unique_ptr<PersonajeV2> &jugador,unique_ptr<PersonajeV2> &enemigo,int &tipoJugador, int &tipoEnemigo) {
    
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
   //ESTO ES TEMPORAL
   cout<<"atacar: a"<<endl;
   cout<<"usarInventario: b"<<endl;
   //FIN DE ESTO ES TEMPORAL

    if (opciones='a') 
    {
      int tipoAtaque;
      
   //ESTO ES TEMPORAL
      cout << "Elige un ataque:"<<endl;
      cout<<"selecciona 1, 2, 3 04"<<endl;
      cin>>tipoAtaque;
   //FIN DE ESTO ES TEMPORAL

      try
      {
        while (tipoAtaque >=1 && tipoAtaque <=4) {  
          //Calcula la estamina usada por cada ataque.
          /*
          ATAQUE -- ESTAMINA USADA
          ataque_1 -- PROB(15,25)
          ataque_2 -- PROB(18,23)
          ataque_3 -- PROB(17,21)
          ataque_4 -- PROB(11,19)*/
          jugador->setStamina(calcularEstamina(tipoAtaque));
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
      try
      {
       jugador->mostrarInventario();
       int idObjetoInventario;
       cout << "ingresa id del objeto del inventario" << endl;
       cin >> idObjetoInventario;
       utilizarInventario(true, jugador, idObjetoInventario);
      }
      catch(const exception& e)
      {
        cerr<<"Error inesperado al intentar usar utilizarInventario() en turnoJugador()" << e.what() << '\n';
      }
      
    
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
        //turno maquina.
        /*si vida menor a 0.5 del original && incluye objeto de pocion de vida? usar vida en turno en vez de atacar.
        si estamina mayor al 80%? probabilidad de ataque_1 al 70%.
        si estamina mayor al 50% y 80%? probabilidad de ataque_2 al 70%.
        si estamina mayor al 25% y 50%? probabilidad de ataque_3 al 70%.
        si estamina mayor al 0% y 25%? probabilidad de ataque_4 al 70%.
        */
        double opcionAtaque_1[] = {0.7, 0.1, 0.1, 0.1}; // 
        double opcionAtaque_2[] = {0.1, 0.7, 0.1, 0.1}; // 

        double stam=enemigo->getStamina();
        enemigo->setTempStamina(stam);
        double ogStam=enemigo->getTempStamina();
        if(stam>=ogStam*0.8)
        {
          
        }
        else if(/* condition */)
        {
          /* code */
        }
        else
        {
          /* code */
        }
        
        int tipoAtaque=rand()%4+1;
          enemigo->setStamina(calcularEstamina(tipoAtaque));
          switch (tipoAtaque) {  
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