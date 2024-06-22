#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "SisInventario.h"
#include <iostream>
#include <string>
using namespace std;

class PersonajeV2 : public SisInventario{
protected:
  SisInventario inventario;
private:
  string m_NOMBRE;
  double m_ataque;
  double m_agilidad;
  double m_defenza;
  double m_magia;
  double m_stamina;
  double m_vida; 
  

public:
  PersonajeV2(){}
  PersonajeV2(string nombre,double vida, double stamina, double ataque, double magia, double defensa, double agilidad)
        :m_NOMBRE(nombre), m_vida(vida), m_stamina(stamina), m_ataque(ataque), m_magia(magia), m_defenza(defensa), m_agilidad(agilidad){}; 


  virtual double ataque_1()  = 0;
  virtual double ataque_2()  = 0;
  virtual double ataque_3()  = 0;
  virtual double ataque_4()  = 0;

  string getNombre(){return m_NOMBRE;};
  double getAtaque(){return m_ataque;};
  double getAgilidad(){return m_agilidad;};
  double getDefenza(){return m_defenza;}
  double getMagia(){return m_magia;}
  double getStamina(){return m_stamina;}
  double getVida(){return m_vida;};

  void setAtaque(double ataque) {m_ataque = ataque;};
  void setAgilidad(double agilidad) {m_agilidad = agilidad;};
  void setMagia(double magia){m_magia = magia;}
  void setStamina(double stamina){m_stamina = stamina;}
  void setDefenza(double defensa){m_defenza = defensa;}
  void setVida(double vida) {m_vida = vida;};

  void mostrarEstadisticas(){
    cout<<"Vida ->      "<<getVida()<<" HP"<<endl;
    cout<<"Stamina ->   "<<getStamina()<<" STA"<<endl;
    cout<<"Ataque ->    "<<getAtaque()<<" ATK"<<endl;
    cout<<"Magia ->     "<<getMagia()<<" MG"<<endl;
    cout<<"Defenza ->   "<<getDefenza()<<" DEF"<<endl;
    cout<<"Agilidad ->  "<<getAgilidad()<<" AGIL"<<endl;
  }
};


#endif //PERSONAJE_H
