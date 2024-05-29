#ifndef PERSONAJE_H
#define PERSONAJE_H

#include "ItemInventario.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Personaje {
private:
    const string m_NOMBRE;
    int m_nivel;
    int m_vida;
    int m_ataque;
    vector<ItemInventario> m_ObjetosEnInventario;

public:
    Personaje(const string& nombre, int nivel, int vida, int ataque)
        : m_NOMBRE(nombre), m_nivel(nivel), m_vida(vida), m_ataque(ataque) {}

    string getNombre() const {
        cout << "Nombre -> " << m_NOMBRE << endl;
        return m_NOMBRE;
    }

    void mostrarInventario() const {
        for (const auto& item : m_ObjetosEnInventario) {
            item.mostrarPropiedades();
            cout << "----------" << endl;
        }
    }

    void agregarAlInventario(const string& nombre, int peso) {
        ItemInventario item;
        item.agregarPropiedad(nombre, peso);
        m_ObjetosEnInventario.push_back(item);
    }
};

#endif //PERSONAJE_H
