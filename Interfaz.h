// archivo:Interfaz.h
// autor: Daniel Emiliano Lopez Aguilar
//  fecha: julio 2024.
/* descripcion: Clase para ejecutar la interfaz de usuario,
  ESTRUCTURA DE MENU:

Nombre
Vida: n
Estamina: n

  Interactuar
  Combatir
  Inventario
  *demos

------------------
  INTERACTUAR
------------------
"dialogo uno"
"dialogo dos"
"dialogo tres"
"dialogo cuatro"

------------------
DONE    COMBATIR
------------------
Atacar
Usar inventario
------------------
DONE      ATACAR
------------------
ataque 1
ataque 2
ataque 3
ataque 4

------------------
 DONE   INVENTARIO
------------------
objeto 1
objeto 2
objeto 3
------------------
      OBJETO
------------------
descripcion
peso: n
Ataque: n
Agilidad: n
Defensa: n
Resistencia: n
Magia: n
*/
// ejercicio #
#ifndef INTERFAZ_H
#define INTERFAZ_H

#include "JugadorV2.h"
#include "EnemigosV2.h"
#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <conio.h>
#include <thread>
#include <map>
#include "ascii/Imprimir_ASCII.h"
using namespace std;
using namespace this_thread;

class Interfaz
{
private:
  void asistenteDibujitos(int opcion)
  {
    cout<<"Creado por Josseline Abundiz, Alberto Gonzalez y Emiliano Lopez."<<endl;
    Imprimir_ASCII ascii;
    if (opcion == 1)
    {
      ascii.imprimirArchivo("ascii/alertas/menu_juego_1.txt");
    }
    else if (opcion == 2)
    {
      ascii.imprimirArchivo("ascii/alertas/menu_juego_2.txt");
    }
    else
    {
      ascii.imprimirArchivo("ascii/alertas/menu_juego_3.txt");
    }
  };

public:
  // TRABAJAR EN ESTO DESPUES.
  void efecto_intermitente(vector<string> opciones, int opcion, float tiempoParpadeo, string mensaje)
  {
    for (size_t i = 0; i < 5; i++)
    {
      cout << "---------------------------------";
      cout << "   " + mensaje;
      // cout << opciones[opcion] << " seleccionado  ";
      cout << "---------------------------------";
      // Espera el parpadeo.
      chrono::duration<double> wait_duration(tiempoParpadeo);
      sleep_for(wait_duration);
      system("cls");
      for (size_t i = 0; i < 20; i++)
      {
        cout << endl;
      }
      sleep_for(.2s);
      system("cls");
    }
  }

  // los mapas inician en uno.
  static void print_Menu(int seleccionado, map<int, string> comandos)
  {

    comandos[seleccionado].erase(0, 2);
    comandos[seleccionado] = "->" + comandos[seleccionado];
    for (auto i = comandos.begin(); i != comandos.end(); i++)
    {
      cout << i->second << endl;
    }
  }

  static int init_menu(bool dibujitos, string mensaje, map<int, string> comandos)
  {
    // Prueba, tal vez lo quitas despues.
    int valorSeleccionado;
    valorSeleccionado = 0;
    char tecla;
    cout << "Presiona las teclas de flecha arriba o abajo (Esc para salir):" << endl;

    // Opcion es el valor elegido que es regresado.
    int opcion = 1;
    while (true)
    {
      cout << mensaje << endl;
      // modifica mensaje.
      print_Menu(opcion, comandos);
      tecla = _getch(); // Obtener la primera parte del codigo de la tecla
      if (tecla == 27)
      { // 27 es el codigo ASCII para Esc
        valorSeleccionado = -1;
        break;
      }
      if (tecla == 13) // 13 es el codigo ASCII para Enter
      {
        system("cls");

        // Activa la accion.
        // Regresa el valor de la llave del mapa con i->first.
        for (auto i = comandos.begin(); i != comandos.end(); ++i)
        {
          if (i->second == comandos.at(opcion))
          {
            valorSeleccionado = i->first;
          }
        }
        break;
      }

      if (tecla == -32)
      {                   // -32 indica una tecla especial
        tecla = _getch(); // Obtener la segunda parte del codigo de la tecla
        switch (tecla)
        {
        case 72: // Flecha arriba
          opcion <= 1 ? opcion = comandos.size() : opcion -= 1;
          // actualizacion
          system("cls");
          if (dibujitos)
          {
            Interfaz inter;
            inter.asistenteDibujitos(opcion);
          }
          break;
        case 80: // Flecha abajo
          opcion >= comandos.size() ? opcion = 1 : opcion += 1;
          // actualizacion
          system("cls");
          if (dibujitos)
          {
            Interfaz inter;
            inter.asistenteDibujitos(opcion);
          }
          break;
        default:

          break;
        }
      }
      else
      {
        // NO BORRAR HASTA QUE TERMINE EL DESARROLLO.
        cout << "Otra tecla presionada: " << static_cast<int>(tecla) << endl;
      }
    }
    return valorSeleccionado;
  }

  // Interfaz(/* args */);
  // ~Interfaz();
};

#endif // INTERFAZ_H
