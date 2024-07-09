#ifndef SISINVENTARIO_H
#define SISINVENTARIO_H

#include <iostream>
#include <string>
#include <map>
#include <memory>
#include <vector>
#include <algorithm>
using namespace std;
struct datosItem
{
  
  string NOMBRE;
  string DESCRIPCION;
  int PESO;
  double ATAQUE;
  double MAGIA;
  double DEFENSA;
  double AGILIDAD;
  double VIDA;
  bool reutilizable;
  int cantidad; // Agregado para contar la cantidad de cada objeto
};

// Definir los objetos de inventario con un identificador único
//id, nombre, descipcion, peso, ataque, magia, defensa, agilidad,vida, bool reutilizable, cantidad.
map<int, datosItem> objetosInventario = {
    {1, {"A garra limpia", "Sin armas! Ahora SI es una pelea justa", 0, 0, 0, 0, 0, 0, true, 1}},
    {2, {"Espada Romana", "Acero afilado, simbolo de poder y valor.", 10, 0.2, 0, 0.1, 0, 0, true, 0}},
    {3, {"Espada flameante Encantada", "Ooh.. brilla...", 12, 0.1, 0.15, 0, 0.05, 0, true, 0}},
    {4, {"Arco y Flecha", "Perfectos para ataques a distancia.", 7, 0.5, 0, 0.1, 0.1, 0, true, 0}},
    {5, {"Hacha Vikinga", "Ideal para cortar madera o enfrentarte a enemigos.", 13, 0.1, 0, 0.1, 0.1, 0, true, 0}},
    {6, {"Baston Magico", "Canaliza el poder antiguo!!", 11, 0.05, 0.2, 0, 0.05, 0, true, 0}},
    {7, {"Dinamita", "Sustancia explosiva a base de nitroglicerina.", 11, 0.2, 0, 0.05, 0.05, 0, true, 0}},
    {8, {"Glock 22", "Artefacto de una epoca menos civilizada.", 6, 0.15, 0, 0, 0.15, 0, true, 0}},
    {9, {"Pocion de Fuerza", "Aumenta tu fuerza permanentemente.", 16, 0.2, 0, 0.05, 0.05, 0.1, false, 0}},
    {10, {"Pocion de Vida", "Restaura tu salud al instante.", 3, 0, 0, 0, 0, 0.4, false, 0}},
    {11, {"Pocion de Resistencia", "Brebaje magico que mejora tu defensa y otros aspectos.", 12, 0, 0.1, 0.2, 0.1, 0, false, 0}},
    {12, {"Amuleto Ojo Turco de Agua", "Magia oscura que proporciona puntos de AGILIDAD y MAGIA", 9, 0, 0.1, 0.2, 0.1, 0, false, 0}},
    {13, {"Amuleto Ojo Turco de Fuego", "Magia oscura que proporciona puntos de VIDA y ATAQUE", 9, 0.3, 0, 0, 0, 0.1, false, 0}},
};


class SisInventario
{
  
private:
  map<int, datosItem> items;

public:
    //Permite guardar los nombres de los objetos en el inventario actual.  
    vector<string> opcionesMenuInventario; //espada, dinamita, glock
    vector<string> IDsOpcionesMenuInventario;//"3,", "4", "6". 
    

  void agregarItem(const int &llave)
  {
    try
    {
      // Verificar si la llave existe en los objetos de inventario
      if (objetosInventario.find(llave) == objetosInventario.end())
      {
        throw runtime_error("Llave no encontrada.");
      }

      // Obtener los datos del objeto
      
      string NOMBRE = objetosInventario[llave].NOMBRE;
      string DESCRIPCION = objetosInventario[llave].DESCRIPCION;
      int PESO = objetosInventario[llave].PESO;
      double ATAQUE = objetosInventario[llave].ATAQUE;
      double MAGIA = objetosInventario[llave].MAGIA;
      double DEFENSA = objetosInventario[llave].DEFENSA;
      double AGILIDAD = objetosInventario[llave].AGILIDAD;
      double VIDA = objetosInventario[llave].VIDA;
      bool reutilizable = objetosInventario[llave].reutilizable;

      // Verificar si el objeto ya existe en el inventario del jugador
      if (items.find(llave) != items.end())
      {
        // Si el objeto es reutilizable, solo aumentar la cantidad
        if (!reutilizable)
        {
          items[llave].cantidad++; 
        }
        else
        {
          // Si no es reutilizable, agregar el objeto con una cantidad de 1
          items[llave] = datosItem{NOMBRE, DESCRIPCION, PESO, ATAQUE, MAGIA, DEFENSA, AGILIDAD, VIDA, reutilizable, 1};
        }
      }
      else
      {
        // Si el objeto no existe en el inventario del jugador, agregarlo con una cantidad de 1
        items[llave] = datosItem{NOMBRE, DESCRIPCION, PESO, ATAQUE, MAGIA, DEFENSA, AGILIDAD, VIDA, reutilizable, 1};
      }
      //Agregados para la interfaz para seleccionar objetos del inventario.
      opcionesMenuInventario.push_back("  " + items[llave].NOMBRE);
      IDsOpcionesMenuInventario.push_back(to_string(llave));
    }
    catch (const exception &e)
    {
      cerr << "Error: llave de objeto de inventario " << llave << " no encontrada. " << e.what() << endl;
    }
  }
    
  // try encontrar llave con metodo .find de <map>
  const datosItem *getItem(const int &llave) const
  {
    try
    {
      auto item = items.find(llave);
      // Caso éxito me da los parámetros de la struct "datosItem",
      // como es un map(), se encuentran en item->second
      return item != items.end() ? &item->second : nullptr;
    }
    // Se agregó un catch, si existe un error es muy probable que sea aquí,
    // SisInventario.agregarItem() funciona como un primer filtro para posibles problemas.
    catch (const exception &e)
    {
      cerr << "Error fatal en getItem. " << e.what() << endl;
      return nullptr;
    }
  }

  // Imprimir atributos de objeto. No mostrar elementos si están en 0.
  void mostrarItem(const int &llave) const
  {
    try
    {
      const datosItem *item = getItem(llave);
      if (item)
      {
        
        cout << item->NOMBRE << endl;
        cout << item->DESCRIPCION << endl;
        item->PESO != 0 ? cout << "Peso: " << item->PESO << endl : cout << "";
        item->ATAQUE != 0 ? cout << "Ataque: " << item->ATAQUE * 100 << "%" << endl : cout << "";
        item->AGILIDAD != 0 ? cout << "Agilidad: " << item->AGILIDAD * 100 << "%" << endl : cout << "";
        item->DEFENSA != 0 ? cout << "Defensa: " << item->DEFENSA * 100 << "%" << endl : cout << "";
        item->MAGIA != 0 ? cout << "Magia: " << item->MAGIA * 100 << "%" << endl : cout << "";
        item->VIDA != 0 ? cout << "Vida: " << item->VIDA * 100 << "%" << endl : cout << "";
        cout << "Cantidad: " << item->cantidad << endl;
        
      }
      else
      {
        cout << "Objeto no encontrado en el inventario." << endl;
      }
    }
    catch (const std::exception &e)
    {
      cerr << "Error fatal en mostrarItem() " << e.what() << endl;
    }
  }

  
  void mostrarInventario() const
  {
    // Por cada objeto en items, mostrar en pantalla su nombre.
    for (const auto &item : items)
    { 
      
      cout << "----------" << endl;
      mostrarItem(item.first);  
    }
    cout << "----------" << endl;
  }

  void eliminarItem(const int &llave, int posicionLLave)
  {
    // Throw error no se encontró, otro error desconocido catch{}
    try
    {
      auto item = items.find(llave);
      if (item != items.end())
      {
        items.erase(item);
      opcionesMenuInventario.erase(std::remove(opcionesMenuInventario.begin(), opcionesMenuInventario.end(), opcionesMenuInventario.at(posicionLLave)), opcionesMenuInventario.end());

      }
      else
      {
        throw runtime_error("Elemento con llave " + to_string(llave) + " no encontrado");
      }
    }
    catch (const exception &e)
    {
      cerr << "Error: en eliminarItem(), no se pudo borrar el item. " << e.what() << endl;
    }
  }


};
#endif // SISINVENTARIO_H