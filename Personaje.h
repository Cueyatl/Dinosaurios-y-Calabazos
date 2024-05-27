#ifndef PERSONAJE_H
#define PERSONAJE_H

#include<iostream>
#include <string>
#include<vector>
using namespace std;

class ItemInventario
{
private:
    int m_cantidad;
    int m_nombre;
    int m_peso;
public:
  ItemInventario() : m_cantidad(0), m_nombre(0), m_peso(0) {}
    ItemInventario(int cantidad, int nombre, int peso)
      : m_cantidad(cantidad), m_nombre(nombre), m_peso(peso) {}
    

    int getCantidad() const { return m_cantidad; }
    int getNombre() const { return m_nombre; }
    int getPeso() const { return m_peso; }

    void setCantidad(int cantidad) { m_cantidad = cantidad; }
    void setNombre(int nombre) { m_nombre = nombre; }
    void setPeso(int peso) { m_peso = peso; }

    void mostrarItemInventario(){
      cout<<"Objeto -> "<<getNombre()<<endl;
      cout<<"Cantidad -> "<<getCantidad()<<endl;
      cout<<"Peso -> "<<getCantidad()*getPeso()<<endl;
    };
    

};

class Personaje : public ItemInventario
{
private:
  const string m_NOMBRE;
  int m_nivel;
  int m_vida;
  int m_ataque;
  vector<ItemInventario> m_ObjetosEnInventario;
  
public:
  Personaje(const string NOMBRE, int nivel, int vida, int ataque, vector<ItemInventario> ObjetosInventario)
    :m_NOMBRE(NOMBRE), m_nivel(nivel), m_vida(vida), m_ataque(ataque), m_ObjetosEnInventario(ObjetosInventario){};

  string getNombre()const {
    cout<<"nombre -> "<<m_NOMBRE<<endl;
    return m_NOMBRE;}
    
  void agregarAlInventraio(){
    m_ObjetosEnInventario.push_back(ItemInventario(1,"Cuchara de madera",1));
  }
  
};

#endif //PERSONAJE_H