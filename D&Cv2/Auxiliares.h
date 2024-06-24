#ifndef AUXILIARES_H
#define AUXILIARES_H



#include "JugadorV2.h"
#include "EnemigosV2.h"
#include <iostream>
#include <vector>
#include <string> 
#include <memory> 
using namespace std;

void utilizarInventario(bool equipar, unique_ptr<PersonajeV2> &jugador, int llave){
  //Encontrar los atributos del objeto en el inventario por medio de su llave (id).
  auto item=jugador->getItem(llave);    
   //Equipar arma.
  if (equipar && item->reutilizable) {
    jugador->setTempAtaque(jugador->getAtaque());
    jugador->setAtaque(jugador->getAtaque() + (jugador->getAtaque() * item->ATAQUE));

    jugador->setTempAgilidad(jugador->getAgilidad());
    jugador->setAgilidad(jugador->getAgilidad() + (jugador->getAgilidad() * item->AGILIDAD));

    jugador->setTempDefensa(jugador->getDefensa());
    jugador->setDefensa(jugador->getDefensa() + (jugador->getDefensa() * item->DEFENSA));

    jugador->setTempMagia(jugador->getMagia());
    jugador->setMagia(jugador->getMagia() + (jugador->getMagia() * item->MAGIA));

    jugador->setTempVida(jugador->getVida());
    jugador->setVida(jugador->getVida() + (jugador->getVida() * item->VIDA));
  }
  //Desequipar arma y regresar a los atributos iniciales de la clase que el jugador eligió.
  else if (!equipar && item->reutilizable) {
    jugador->setAtaque(jugador->getTempAtaque());
    jugador->setAgilidad(jugador->getTempAgilidad());
    jugador->setDefensa(jugador->getTempDefensa());
    jugador->setMagia(jugador->getTempMagia());
    jugador->setVida(jugador->getTempVida());
  }
  //Equipar potenciador, cambia de manera permanente los atributos iniciales de la clase.
  else {
    jugador->setAtaque(jugador->getAtaque() + (jugador->getAtaque() * item->ATAQUE));
    jugador->setAgilidad(jugador->getAgilidad() + (jugador->getAgilidad() * item->AGILIDAD));
    jugador->setDefensa(jugador->getDefensa() + (jugador->getDefensa() * item->DEFENSA));
    jugador->setMagia(jugador->getMagia() + (jugador->getMagia() * item->MAGIA));
    jugador->setVida(jugador->getVida() + (jugador->getVida() * item->VIDA));
    //Eliminado objeto de un solo uso del inventario.
    jugador->elminarItem(llave);
  }
  jugador->mostrarEstadisticas();
};
#endif //AUXILIARES_H