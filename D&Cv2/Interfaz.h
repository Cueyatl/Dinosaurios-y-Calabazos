// archivo:Interfaz.h
// autor: Daniel Emiliano Lopez Aguilar
//  fecha: julio 2024.
/* descripción: Clase para ejecutar la interfaz de usuario,
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
    COMBATIR
------------------
Atacar
Usar inventario
------------------
      ATACAR
------------------
ataque 1
ataque 2
ataque 3
ataque 4

------------------
    INVENTARIO
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
using namespace std;
using namespace this_thread;

class Interfaz
{
private:
  /* data */
public:

//TRABAJAR EN ESTO DESPUES.
  void efecto_intermitente(vector<string> opciones, int opcion, float tiempoParpadeo, string mensaje)
  {
    for (size_t i = 0; i < 5; i++)
    {
      cout << "---------------------------------";
      cout << "   "+mensaje;
      // cout << opciones[opcion] << " seleccionado  ";
      cout << "---------------------------------";
      //Espera el parpadeo.
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
  
  static void print_Menu(int seleccionado,map<int, string>  comandos)
  {
    
    comandos[seleccionado].erase(0, 2);
    comandos[seleccionado] = "->" + comandos[seleccionado];
    for (auto i = comandos.begin(); i != comandos.end(); i++)
    {
      cout << i->second<<endl;
    }
  }

  static void init_menu(map<int, string> comandos)
  {
    char tecla;
    cout << "Presiona las teclas de flecha arriba o abajo (Esc para salir):" << endl;
    string apuntado = "->";
    // enter es 13.

      int opcion=1;
    while (true)
    {
      print_Menu(opcion, comandos);
      tecla = _getch(); // Obtener la primera parte del código de la tecla
      if (tecla == 27)
      { // 27 es el código ASCII para Esc

        break;
      }
      if (tecla == 13)
      { // 27 es el código ASCII para Esc
        for (size_t i = 0; i < 5; i++)
        {
          cout << "---------------------------------";
          cout << comandos[opcion] << "seleccionado  ";
          cout << "---------------------------------";
          sleep_for(.2s);
          system("cls");
          for (size_t i = 0; i < 20; i++)
          {
            cout << endl;
          }

          sleep_for(.2s);
          system("cls");
        }
        break;
      }

      if (tecla == -32)
      {                   // -32 indica una tecla especial
        tecla = _getch(); // Obtener la segunda parte del código de la tecla
        switch (tecla)
        {
        case 72: // Flecha arriba
          opcion <= 1 ? opcion = comandos.size() : opcion -= 1;
          break;
        case 80: // Flecha abajo
          opcion >= comandos.size() ? opcion = 1 : opcion += 1;
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
      system("cls");
    }
  }
  
  // Interfaz(/* args */);
  // ~Interfaz();
};

#endif // INTERFAZ_H