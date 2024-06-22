#ifndef SISINVENTARIO_H
#define SISINVENTARIO_H

#include <iostream>
#include <string>
#include <map>
#include <memory>


using namespace std;
struct datosItem
{
  string NOMBRE;
  string DESCRIPCION;
  int PESO;
  int DANO;
};

class SisInventario
{
private:
  map<int, datosItem> items;

public:
  /*agregar al inventario, si existe la llave(numero de identificacion) error: llave ya existente,
   *Si no, agregarla. incluye un catch por si existe un error inesperado al agregar.
   *
   */
  void agregarItem(const int &llave, const string &NOMBRE, const string &DESCRIPCION, int PESO, int DANO)
  {

    try
    {
      // si buscando llave en items(objetos de inventario) es encontrada, ya existe
      if (items.find(llave) != items.end())
      {
        throw runtime_error("Llave " + to_string(llave) + " ya existente.");
      }

      items[llave] = datosItem{NOMBRE, DESCRIPCION, PESO, DANO};
    }
    catch (const exception &e)
    {
      cerr << "Error: llave de objeto de inventario no encontrada." << e.what();
    }
  }
  // try encontrar llave con metodo .find de <map>
  const datosItem *getItem(const int &llave) const
  {
    try
    {
      auto item = items.find(llave);
      // caso exito me da los parametros de la struct "datosItem".
      return item != items.end() ? &item->second : nullptr;
    }
    /*Se agrego un catch, si existe un error es muy probable que sea aqui,
     SisInventario.agregarItem() funciona como un primer filtro para posibles problemas.
    */
    catch (const exception &e)
    {
      cerr << "Error fatal en GetItem. " << e.what() << endl;
      return nullptr;
    }
  }

  void mostrarInventario() const
  {
    for (const auto &item : items)
    {
      cout << getItem(item.first)->NOMBRE << endl;
    }
    cout << "----------" << endl;
  }

  void elminarItem(const int &llave)
  {
    /*thow error no se encontró, otro error desconocido catch{}*/
    try
    {
      auto item = items.find(llave); 
      item != items.end() ? 
        items.erase(item) 
        : throw runtime_error("Elemento con llave " + to_string(llave) + " no encontrado");
    }
    catch (const exception &e)
    {
      cerr << "Error: en eliminarItem(), no se pudo borrar el item." << e.what() << endl;
    }
  };

  void intercambiarItem(SisInventario &otroInventario, const int &llave)
  {
    try
    {
      const datosItem *item = getItem(llave);
      if (item == nullptr)
      {
        throw runtime_error("Item con llave " + to_string(llave) + " no encontrado en el inventario actual.");
      }

      // Agregar el item al otro inventario
      otroInventario.agregarItem(llave, item->NOMBRE, item->DESCRIPCION, item->PESO, item->DANO);

      // Eliminar el item del inventario actual
      SisInventario::elminarItem(llave);
    }
    catch (const exception &error)
    {
      cerr << "Error: en intercambiarItem(), no se pudo intercambiar el item. " << error.what() << '\n';
    }
  };
};


class InventarioGeneral
{
public:
  void main(){
    SisInventario Inventario;
    datosItem objetosInventario[]={
      { "Espada Romana","Espadas: Acero afilado, símbolo de poder y valor.",10, 10},
      {"Espada flameante Encantada", "Espadas: Acero afilado, símbolo de poder y valor.",10, 10},
      { "Arco y Flecha", "Perfectos para ataques a distancia.",10, 10},
      { "Hacha Vikinga", "Ideal para cortar madera o enfrentarte a enemigos.",10, 10},
      { "Baston Magico", "Pueden lanzar hechizos o potenciar tus habilidades..",10, 10},
      {"Dinamita", "Sustancia explosiva a base de nitroglicerina.",10, 10},
      { "Glock 22", "Artefacto de una epoca menos civilizada..",10, 10},
      {"Pocion de Fuerza", "Artefacto de una epoca menos civilizada..",10, 10},
      {"Pocion de Vida", "Artefacto de una epoca menos civilizada..",10, 10},
      { "Pocion de Resistencia", "Artefacto de una epoca menos civilizada..",10, 10},
      {"Amuleto Ojo Turco de Agua", "Proporciona puntos de agilidad y magia", 10, 10},
      {"Amuleto Ojo Turco de Fuego", "Proporciona puntos de vida y ataque", 10, 10},
    };
    
    // //agregarItem(id, "nombre", "descripcion", "peso","dano" ) incluir: stats modificadoras.
    // Inventario.agregarItem(0, "Espada Romana", "Espadas: Acero afilado, símbolo de poder y valor.",10, 10);
    // Inventario.agregarItem(1, "Espada flameante Encantada", "Espadas: Acero afilado, símbolo de poder y valor.",10, 10);
    // Inventario.agregarItem(2, "Arco y Flecha", "Perfectos para ataques a distancia.",10, 10);
    // Inventario.agregarItem(3, "Hacha Vikinga", "Ideal para cortar madera o enfrentarte a enemigos.",10, 10);
    // Inventario.agregarItem(4, "Baston Magico", "Pueden lanzar hechizos o potenciar tus habilidades..",10, 10);
    // Inventario.agregarItem(5, "Dinamita", "Sustancia explosiva a base de nitroglicerina.",10, 10);
    // Inventario.agregarItem(6, "Glock 22", "Artefacto de una epoca menos civilizada..",10, 10);

    // //Modificadores.
    // Inventario.agregarItem(7, "Pocion de Fuerza", "Artefacto de una epoca menos civilizada..",10, 10);
    // Inventario.agregarItem(8, "Pocion de Vida", "Artefacto de una epoca menos civilizada..",10, 10);
    // Inventario.agregarItem(9, "Pocion de Resistencia", "Artefacto de una epoca menos civilizada..",10, 10);
    // Inventario.agregarItem(10,"Amuleto Ojo Turco de Agua", "Proporciona puntos de agilidad y magia", 10, 10);
    // Inventario.agregarItem(10,"Amuleto Ojo Turco de Fuego", "Proporciona puntos de vida y ataque", 10, 10);
   
  }
  ~InventarioGeneral();
};


#endif // SISINVENTARIO_H
