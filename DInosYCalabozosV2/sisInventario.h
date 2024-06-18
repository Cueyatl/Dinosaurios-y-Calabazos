#ifndef SISINVENTARIO.H
#define SISINVENTARIO.H
#include <iostream>
#include<string>
#include <map>

using namespace std;
struct datosItem
{
  string NOMBRE;
  string DESCRIPCION;
  int PESO;
  int DANO;
};

class sistemaInventario
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
        throw runtime_error("Llave " + to_string(llave) +" ya existente.");
      }
      
      
      items[llave] = datosItem{NOMBRE, DESCRIPCION, PESO, DANO};
    }
    catch (const exception &e)
    {
      cerr << "Error: llave de objeto de inventario no encontrada." << e.what();
    }
  }
  //try encontrar llave con metodo .find de <map> 
  const datosItem *getItem(const int &llave) const
  {
    try
    {
      auto item = items.find(llave);
      // caso exito me da los parametros de la struct "datosItem".
      return item != items.end() ? &item->second : nullptr;
    }
    /*Se agrego un catch, si existe un error es muy probable que sea aqui,
     sistemaInventario.agregarItem() funciona como un primer filtro para posibles problemas.
    */
    catch (const exception &e)
    {
      cerr << "Error fatal en GetItem. " << e.what() << endl;
      return nullptr;
    }
  }

  void mostrarInventario() const {
    for (const auto& item : items) {cout<<getItem(item.first)->NOMBRE<<endl;}
    cout << "----------" << endl;
  }
  
  void elminarItem(const int &llave) {
    try{
      auto item = items.find(llave);
      item==items.end() ? items.erase(item) : throw runtime_error("elemento " + to_string(llave) + " no encontrado");
    } catch(const exception& e) {
      cerr <<"Error: en eliminarItem(), no se pudo borrar el item." <<e.what() << '\n';
    }
  };
};


#endif //SISINVENTARIO.H
