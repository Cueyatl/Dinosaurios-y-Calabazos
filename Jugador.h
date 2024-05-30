#include "Personaje.h"
#include "ExpJugador.h"
class Jugador : public Personaje
{
private:
    
public:
  Jugador::Jugador(const string& nombre, int nivel, int vida, int ataque, int experiencia)
  : Personaje(nombre, nivel, vida, ataque) // Inicializa la clase base Personaje
{
  // ... código adicional específico de la clase Jugador
}


};




