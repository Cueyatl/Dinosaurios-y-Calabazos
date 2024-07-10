#ifndef AUXILIARES_H
#define AUXILIARES_H

#include "JugadorV2.h"
#include "EnemigosV2.h"
#include "Interfaz.h"
#include <iostream>
#include <string>
#include <memory>
#include <thread>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
using namespace this_thread;

// clase auxiliares son puros metodos estaticos. (づ￣ 3￣)づ
class Auxiliares
{
private:
public:

// static map coutaMapa(){
  
// }
  // Metodo para equipar y desequipar armas y utilizar potenciadores (pociones y amuletos).
  static void utilizarInventario(unique_ptr<PersonajeV2> &jugador, int llave, int posicionLLave)
  {
    // Otro cls en prueba, parte 2.
    system("cls");
    /*
    casos
        // si id is igual 1, garra equipada
    //  si es igual a 1.
    //  item.reutilizable y llave==1?

    /*true true, true false,false false*/
    
        // Encontrar los atributos del objeto en el inventario por medio de su llave (id).
    const datosItem item = *jugador->getItem(llave);
    // llave actual.
    jugador->m_setActualInventoryId = llave;
    // mensajes (esto es temporal creo)
    string msjPotenciador = jugador->getNombre() + " ha usado " + item.NOMBRE;
    string msjArma = jugador->getNombre() + " ha equipado " + item.NOMBRE+"\n";
    string msjNoArma = jugador->getNombre() + " ha desequipado " + jugador->getItem(jugador->m_setActualInventoryId)->NOMBRE;
    string msjGarra = jugador->getNombre() + " no ha equipado nada aun. esta armado a" + item.NOMBRE;

    if (item.reutilizable)
    {
      
      try
      {
        // equipar nuevo.
        jugador->setAtaque(jugador->getTempAtaque() + ((jugador->getTempAtaque() * item.ATAQUE)));
        jugador->setAgilidad(jugador->getTempAgilidad() + ((jugador->getTempAgilidad() * item.AGILIDAD)));
        jugador->setDefensa(jugador->getTempDefensa() + ((jugador->getTempDefensa() * item.DEFENSA)));
        jugador->setMagia(jugador->getTempMagia() + ((jugador->getTempMagia() * item.MAGIA)));
        jugador->setVida(jugador->getTempVida() + ((jugador->getTempVida() * item.VIDA)));
        cout << msjArma << endl;
        // recordando la llave.
        jugador->m_setActualInventoryId = llave;
      }
      catch (const exception &e)
      {
        cerr << "Error al EQUIPAR objeto de inventario" << e.what() << '\n';
      }
      
    }

    if (!item.reutilizable)
    {
      try
      {

        // reestablece valores.
        jugador->setAtaque(jugador->getTempAtaque() + ((jugador->getTempAtaque() * item.ATAQUE)));
        jugador->setAgilidad(jugador->getTempAgilidad() + ((jugador->getTempAgilidad() * item.AGILIDAD)));
        jugador->setDefensa(jugador->getTempDefensa() + ((jugador->getTempDefensa() * item.DEFENSA)));
        jugador->setMagia(jugador->getTempMagia() + ((jugador->getTempMagia() * item.MAGIA)));
        jugador->setVida(jugador->getTempVida() + ((jugador->getTempVida() * item.VIDA)));
        // modifica atributos iniciales
        jugador->setAtaque(jugador->getAtaque() + ((jugador->getAtaque() * item.ATAQUE)));
        jugador->setAgilidad(jugador->getAgilidad() + ((jugador->getAgilidad() * item.AGILIDAD)));
        jugador->setDefensa(jugador->getDefensa() + ((jugador->getDefensa() * item.DEFENSA)));
        jugador->setMagia(jugador->getMagia() + ((jugador->getMagia() * item.MAGIA)));
        jugador->setVida(jugador->getVida() + ((jugador->getVida() * item.VIDA)));
        // Vuelve a equipar objeto anterior.
       
        auto itemGuardadoActual = jugador->getItem(jugador->m_setActualInventoryId);
        
       
        jugador->setAtaque(jugador->getTempAtaque() + ((jugador->getTempAtaque() * itemGuardadoActual->ATAQUE)));
        jugador->setAgilidad(jugador->getTempAgilidad() + ((jugador->getTempAgilidad() * itemGuardadoActual->AGILIDAD)));
        jugador->setDefensa(jugador->getTempDefensa() + ((jugador->getTempDefensa() * itemGuardadoActual->DEFENSA)));
        jugador->setMagia(jugador->getTempMagia() + ((jugador->getTempMagia() * itemGuardadoActual->MAGIA)));
        jugador->setVida(jugador->getTempVida() + ((jugador->getTempVida() * itemGuardadoActual->VIDA)));
        jugador->eliminarItem(llave,posicionLLave);
      
        jugador->mostrarInventario();


      }
      catch (const exception &e)
      {
        cout<<"error";
      }
    }
    jugador->mostrarEstadisticas();
    // pausa para leer el pinshe mensaje
    sleep_for(chrono::seconds(6));
  }

  static int init_menuInventario(unique_ptr<PersonajeV2> &jugador)
  {
    map<int, string> menuInventario;
    int valorSeleccionado;

    string mensaje_sinInventario = jugador->getNombre() + " tienen el inventario vacio.";

    for (size_t i = 0; i < jugador->opcionesMenuInventario.size(); i++)
    {
      menuInventario[i + 1] = jugador->opcionesMenuInventario[i];
    }

    // Caso el inventario esta vacio.
    if (jugador->opcionesMenuInventario.size() == 1 && valorSeleccionado == 1)
    {

      cout << "Por ahora solo tienes tus garras.";
    }
    // Caso el inventario tiene objetos adentro.
    else
    {
      string msj_SeleccionaInv="Selecciona un objeto de tu inventario";
      valorSeleccionado = Interfaz::init_menu(false,msj_SeleccionaInv, menuInventario); // 1,2,3
      
      return valorSeleccionado;
    }
    
    return valorSeleccionado;
  };

  // Genera numero aleatorio entre un rango.
  static int numeroAleatorio(int inferior, int superior)
  {
    // var inferior <= superior siempre.
    if (inferior > superior)
    {
      swap(inferior, superior);
    }
    // Genera numero aleatorio entre rango de inferior y superior.
    return inferior + rand() % (superior - inferior + 1);
  }

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
      bool sucess = Auxiliares::numeroAleatorio(0, 1);
      if (sucess == true)
      {
        enemigo->agregarItem(llaveAleatoria);
      }
    }
  };
};

#endif // AUXILIARES_H