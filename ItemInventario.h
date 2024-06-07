//archivo:ItemInventario.h 
//autor: Daniel Emiliano Lopez Aguilar
// fecha: 5/27/2024
/* descripción: 
* Funciona en conjunto con Personaje.h
* Clase que representa un objeto(item) del inventario.
* Propiedades del objeto: nombre, peso.
*/

#ifndef ITEMINVENTARIO_H
#define ITEMINVENTARIO_H

#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

class ItemInventario {
private:
//Nombres para las propiedades del objeto
    const string m_CATEGORIA_OBJETO[2] = { "Nombre", "Peso" };
    map<string, string> propiedades;
protected:
    // Constructor por defecto
    ItemInventario() {}

    // Constructor que toma un mapa de propiedades
    ItemInventario(const map<string, string>& props)
        : propiedades(props) {}

    // Método para agregar una propiedad al objeto de inventario.
    void agregarPropiedad(const string& nombre, const int& peso) {
        //mapa propiedades. cada renglon es un objeto del inventario.
        propiedades[m_CATEGORIA_OBJETO[0]] = nombre;
        propiedades[m_CATEGORIA_OBJETO[1]] = to_string(peso);        
    }

    //Metodo confomado por mapa con "clave:valor" para buscar nombre como clave.
    string buscarPorNombre(const string& clave) const {
        auto item = propiedades.find(clave);
        if (item != propiedades.end()) {
            return item->second;
        } else {
            return "objeto del inventario no encontrado"; // O lanza una excepción si prefieres
        }
    }

    // Método para mostrar las propiedades
    void mostrarPropiedades() const {
        for (const auto& [clave, valor] : propiedades) {
            cout << clave << ": " << valor << endl;
        }
    }
    
    /*Esta linea permite utilizar los metodos de esta clase en  protected
    para que se puedan utilizar en la clase heredada(Personaje)*/
    friend class Personaje;
    friend class PrototipoPersonaje;
};

#endif //ITEMINVENTARIO_H
