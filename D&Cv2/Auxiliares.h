#ifndef AUXILIARES_H
#define AUXILIARES_H

#include "JugadorV2.h"
#include "EnemigosV2.h"
#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include <random>
#include <cstdlib>
#include <ctime>
#include <stdexcept>
using namespace std;

// clase auxiliares son puros metodos estaticos. (づ￣ 3￣)づ
class Auxiliares
{
private:
 
public:
//Genera numero aleatorio entre un rango.
static int numeroAleatorio(int inferior, int superior) {
  // var inferior <= superior siempre.
  if (inferior > superior) {
    swap(inferior, superior); 
  }
  // Genera numero aleatorio entre rango de inferior y superior.
  return inferior + rand() % (superior - inferior + 1);
}
 

  // Metodo para equipar y desequipar armas y utilizar potenciadores (pociones y amuletos).
  static void utilizarInventario(bool equipar, unique_ptr<PersonajeV2> &jugador, int llave)
  {
    // Encontrar los atributos del objeto en el inventario por medio de su llave (id).
    auto item = jugador->getItem(llave);
    // mensajes (esto es temporal creo)
    string msjPotenciador = jugador->getNombre() + " ha usado " + item->NOMBRE;
    string msjArma = jugador->getNombre() + " ha equipado " + item->NOMBRE;
    string msjNoArma = jugador->getNombre() + " ha desequipado " + item->NOMBRE;

    // Equipar arma.
    if (equipar && item->reutilizable)
    {
      try
      {
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
        cout << msjArma;
      }
      catch (const exception &e)
      {
        cerr << "Error al EQUIPAR objeto de inventario" << e.what() << '\n';
      }
    }

    // Desequipar arma y regresar a los atributos iniciales de la clase que el jugador eligió.
    else if (!equipar && item->reutilizable)
    {
      try
      {
        jugador->setAtaque(jugador->getTempAtaque());
        jugador->setAgilidad(jugador->getTempAgilidad());
        jugador->setDefensa(jugador->getTempDefensa());
        jugador->setMagia(jugador->getTempMagia());
        jugador->setVida(jugador->getTempVida());
        cout << msjNoArma;
      }
      catch (const exception &e)
      {
        cerr << "Error al DESEQUIPAR objeto de inventario" << e.what() << '\n';
      }
    }
    // Equipar potenciador, cambia de manera permanente los atributos iniciales de la clase.
    else
    {
      try
      {
        jugador->setAtaque(jugador->getAtaque() + (jugador->getAtaque() * item->ATAQUE));
        jugador->setAgilidad(jugador->getAgilidad() + (jugador->getAgilidad() * item->AGILIDAD));
        jugador->setDefensa(jugador->getDefensa() + (jugador->getDefensa() * item->DEFENSA));
        jugador->setMagia(jugador->getMagia() + (jugador->getMagia() * item->MAGIA));
        jugador->setVida(jugador->getVida() + (jugador->getVida() * item->VIDA));
        // Eliminado objeto de un solo uso del inventario.
        jugador->elminarItem(llave);
        cout << msjPotenciador;
      }
      catch (const exception &e)
      {
        cerr << "Error al UTILZAR POTENCIADOR de inventario" << e.what() << '\n';
      }
    }

    jugador->mostrarEstadisticas();
  };
/*
*Metodo para dar la posiblidad de agregar objetos al inventario del enemigo.
*Agrega potenciadores(pociones y amuletos ) al inventario del enemigo de manera aleatorio antes de iniciar el combate.
*Nota: Calculado por distribucion binomial para 3 ensayos, con la probabilidad del 50%. 
*Se obtuvieron los siguientes resultados:
Numero de exitos    Probabilidad
  0                     12.5%
  1                     37.5%
  2                     37.5%
  3                     12.5%
*/
  static void agregarInventarioEnemigo(unique_ptr<PersonajeV2> &enemigo)
  {
    // tres oportunidades para agregar objetos al inventario.
    for (int i = 0; i < 3; i++)
    {
      
      int llaveAleatoria = Auxiliares::numeroAleatorio(7, 11);
      bool sucess=  Auxiliares::numeroAleatorio(0,1);
      if (sucess==true)
      {
        enemigo->agregarItem(llaveAleatoria); 
        cout<<"yes"<<endl;
      }
      else{
        cout<<"no"<<endl;
      }
    }
    
  }
  ~Auxiliares();
};

#endif // AUXILIARES_H