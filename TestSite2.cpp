#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
class ItemInventario {
private:
  //Nombres para las propiedades del objeto.
    const string CATEGORIA_OBJETO[3]={"nombre", "Cantidad", "Peso"};
public:
    map<string, string> propiedades;
    // Constructor por defecto
    ItemInventario() {}

    // Constructor que toma un mapa de propiedades
    ItemInventario(const map<string, string>& props)
        : propiedades(props) {}

    // Método para agregar una propiedad al objeto de inventario.
    void agregarPropiedad( const string& nombre, const int& cantidad, const int& peso) {
      propiedades[CATEGORIA_OBJETO[0]] = nombre;
      propiedades[CATEGORIA_OBJETO[1]] = cantidad;
      propiedades[CATEGORIA_OBJETO[2]] = peso;
    }

    // Método para obtener una propiedad
    string obtenerPropiedad(const string& clave) const {
        auto it = propiedades.find(clave);
        if (it != propiedades.end()) {
            return it->second;
        } else {
            return ""; // O lanza una excepción si prefieres
        }
    }

    // Método para mostrar las propiedades
    void mostrarPropiedades() const {
        for (const auto& [clave, valor] : propiedades) {
            cout << clave << ": " << valor << endl;
        }
    }
};

class Personaje {
public:
    vector<ItemInventario> objetos_en_inventario;

    Personaje(const vector<ItemInventario>& objetos)
        : objetos_en_inventario(objetos) {}

    // Método para mostrar el inventario
    void mostrarInventario() const {
        for (const auto& item : objetos_en_inventario) {
            item.mostrarPropiedades();
            cout << "----------" << endl;
        }
    }
};

int main() {
    // Crear algunos objetos de ItemInventario con propiedades
    ItemInventario item1;
    item1.agregarPropiedad("nombre", "Espada");
    item1.agregarPropiedad("cantidad", "10");
    item1.agregarPropiedad("peso", "5");

    ItemInventario item2;
    item2.agregarPropiedad("nombre", "Escudo");
    item2.agregarPropiedad("cantidad", "20");
    item2.agregarPropiedad("peso", "10");

    // Crear un vector de ItemInventario
    vector<ItemInventario> inventario = {item1, item2};

    // Crear un objeto Personaje con el inventario
    Personaje personaje(inventario);

    // Mostrar el inventario del personaje
    personaje.mostrarInventario();

    return 0;
}
