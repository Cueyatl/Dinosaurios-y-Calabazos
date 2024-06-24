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
  double ATAQUE;
  double MAGIA;
  double DEFENSA;
  double AGILIDAD;
  double VIDA;
  bool reutilizable;
};
datosItem objetosInventario[]={
  { "Espada Romana","Acero afilado, simbolo de poder y valor.",10, 0.2, 0, 0.1,0,0 , true},
  {"Espada flameante Encantada", "Acero afilado, ssmbolo de poder y valor.",12, 0.1,0.15, 0, 0.05, 0, true},
  { "Arco y Flecha", "Perfectos para ataques a distancia.",7, 0.5, 0, 0.1, 0.1, 0, true},
  { "Hacha Vikinga", "Ideal para cortar madera o enfrentarte a enemigos.",13, 0.1, 0, 0.1, 0.1,0, true},
  { "Baston Magico", "Pueden lanzar hechizos o potenciar tus habilidades..",11, 0.05, 0.2, 0, 0.05, 0, true},
  {"Dinamita", "Sustancia explosiva a base de nitroglicerina.",11, 0.2, 0, 0.05, 0.05, true},
  { "Glock 22", "Artefacto de una epoca menos civilizada..",6, 0.15, 0, 0, 0.15, 0, true},

  {"Pocion de Fuerza", "Artefacto de una epoca menos civilizada..",16, 0.2, 0,0.05, 0.05, 0.1 , false},
  {"Pocion de Vida", "Artefacto de una epoca menos civilizada..",3, 0,0,0,0.4, false},
  { "Pocion de Resistencia", "Artefacto de una epoca menos civilizada..",12, 0,0.1,0.2,0.1,0, false},
  {"Amuleto Ojo Turco de Agua", "Proporciona puntos de agilidad y magia", 9, 0,0.1,0.2,0.1,0, false},
  {"Amuleto Ojo Turco de Fuego", "Proporciona puntos de vida y ataque", 9, 0.3,0,0,0,0.1, false},
};
class SisInventario
{
private:
  map<int, datosItem> items;

public:
  /*agregar al inventario, si existe la llave(numero de identificacion) error: llave ya existente,
   *Si no, agregarla. Utilizando un catch por si existe un error inesperado al agregar.
   */
  void agregarItem(const int &llave)
  {
    try
    {
      // si buscando llave en items(objetos de inventario) es encontrada, ya existe
      string NOMBRE = objetosInventario[llave].NOMBRE;
      string DESCRIPCION = objetosInventario[llave].DESCRIPCION;
      int PESO = objetosInventario[llave].PESO;
      double ATAQUE = objetosInventario[llave].ATAQUE;
      double MAGIA = objetosInventario[llave].MAGIA;
      double DEFENSA = objetosInventario[llave].DEFENSA;
      double AGILIDAD = objetosInventario[llave].AGILIDAD;
      double VIDA = objetosInventario[llave].VIDA;
      bool reutilizable = objetosInventario[llave].reutilizable;

      if (items.find(llave) != items.end())
        {throw runtime_error("Llave " + to_string(llave) + " ya existente.");}
      items[llave] = datosItem{NOMBRE, DESCRIPCION, PESO, ATAQUE, MAGIA, DEFENSA, AGILIDAD, VIDA, reutilizable};
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
      /* Caso exito me da los parametros de la struct "datosItem",
         como es un map(), se encuentran en item->second*/
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


  /*Imprimir atributos de objeto. No mostrar elementos si estan en 0.*/
  void printItem(const int &llave)const{
    try
    {
      cout << getItem(llave)->NOMBRE<<endl;
      cout << getItem(llave)->DESCRIPCION<<endl;
      getItem(llave)->PESO != 0 ? cout << "Peso: " << getItem(llave)->PESO<< endl : cout << "";
      getItem(llave)->ATAQUE != 0 ? cout << "Ataque: " << getItem(llave)->ATAQUE*100<<"%" << endl : cout << "";
      getItem(llave)->AGILIDAD != 0 ? cout << "Agilidad: " << getItem(llave)->AGILIDAD*100<<"%" << endl : cout << "";
      getItem(llave)->DEFENSA != 0 ? cout << "Defensa: " << getItem(llave)->DEFENSA*100<<"%" << endl : cout << "";
      getItem(llave)->MAGIA != 0 ? cout << "Magia: " << getItem(llave)->MAGIA*100<<"%" << endl : cout << "";
      getItem(llave)->VIDA != 0 ? cout << "Vida: " << getItem(llave)->VIDA*100<<"%" << endl : cout << "";
      cout << "----------" << endl;
    }
    catch(const std::exception& e)
    {
      cerr << "Error fatal en printItem() " << e.what() << endl;
    }
    
  }

  void mostrarInventario() const
  { 
    //Por cada objeto en items, mostrar en pantalla su nombre.
    for (const auto &item : items)
    {
      cout << getItem(item.first)->NOMBRE << endl;
      cout<<"Peso: "<<getItem(item.first)->PESO<<endl;
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

  
};


#endif // SISINVENTARIO_H
