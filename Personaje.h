#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "ItemInventario.h"
#include<iostream>
#include <string>
#include<vector>
using namespace std;

class Personaje : public ItemInventario
{
private:
  const string m_NOMBRE;
  int m_nivel;
  int m_vida;
  int m_ataque;
  
public:
  vector<ItemInventario> m_ObjetosEnInventario;
  Personaje(const string NOMBRE, int nivel, int vida, int ataque, vector<ItemInventario> ObjetosInventario)
    :m_NOMBRE(NOMBRE), m_nivel(nivel), m_vida(vida), m_ataque(ataque), m_ObjetosEnInventario(ObjetosInventario){};

  string getNombre()const {
    cout<<"nombre -> "<<m_NOMBRE<<endl;
    return m_NOMBRE;}

   void mostrarInventario() const {
        for (const auto& item : m_ObjetosEnInventario) {
            item.mostrarPropiedades();
            cout << "----------" << endl;
        }
    }
    void agregarAlInventario(string nombre, int peso){
        ItemInventario item;
        item.agregarPropiedad(nombre,peso);
        m_ObjetosEnInventario.push_back(item);
        
    } 
  
};

#endif //PERSONAJE_H