#ifndef ENEMIGOS_H
#define ENEMIGOS_H



#include "Personaje.h"
class Enemigos: public Personaje
{
private:
  /* data */
public:
   Enemigos::Enemigos(const string& nombre, int nivel, int vida, int ataque, int experiencia)
  : Personaje(nombre, nivel, vida, ataque){} // Inicializa la clase base Personaje
  
};

#endif //ENEMIGOS_H
