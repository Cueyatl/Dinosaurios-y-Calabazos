#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "SisInventario.h"
#include <iostream>
#include <string>
#include <memory> 
using namespace std;

class PersonajeV2 : public SisInventario{
protected:
private:
public:
  double m_setActualInventoryId;
  string m_NOMBRE;
  double m_ataque;
  double m_agilidad;
  double m_defenza;
  double m_magia;
  double m_stamina;
  double m_vida;

  double m_tempAtaque;
  double m_tempAgilidad;
  double m_tempDefensa;
  double m_tempMagia;
  double m_tempVida;
  double m_tempStamina;
  SisInventario inventario;

  PersonajeV2(){}
  PersonajeV2(string nombre,double vida, double stamina, double ataque, double magia, double defensa, double agilidad)
        :m_NOMBRE(nombre), m_vida(vida), m_stamina(stamina), m_ataque(ataque), m_magia(magia), m_defenza(defensa), m_agilidad(agilidad){}; 

  /*Metodos virtuales para declarar los cuatro ataques que tienen cada clase derivada de las clases EnemigosV2 y JugadorV2*/
  virtual double ataque_1()  = 0;
  virtual double ataque_2()  = 0;
  virtual double ataque_3()  = 0;
  virtual double ataque_4()  = 0;
  virtual string a_1_ataque()=0;
  virtual string a_2_ataque()=0;
  virtual string a_3_ataque()=0;
  virtual string a_4_ataque()=0;
  //Getters.
  string getNombre(){return m_NOMBRE;};
  double getAtaque(){return m_ataque;};
  double getAgilidad(){return m_agilidad;};
  double getDefensa(){return m_defenza;}
  double getMagia(){return m_magia;}
  double getStamina(){return m_stamina;}
  double getVida(){return m_vida;};
  //Setters.
  void setNombre(string nombre){m_NOMBRE=nombre;};
  void setAtaque(double ataque) {m_ataque = ataque;};
  void setAgilidad(double agilidad) {m_agilidad = agilidad;};
  void setMagia(double magia){m_magia = magia;}
  void setStamina(double stamina){m_stamina = stamina;}
  void setDefensa(double defensa){m_defenza = defensa;}
  void setVida(double vida) {m_vida = vida;};
  /*Metodos getters and setters para guardar de manera temporal los atributos iniciales de cada clase. 
  con esto se pueden desequipar los objetos NO reutilizables y regresar a las estadisticas iniciales de 
  cada clase derivada de JugadorV2.
  Estos muchachos se utilizan en el metodo utilizarInventario()*/
  double getTempAtaque() { return m_tempAtaque; }
  void setTempAtaque(double tempAtaque) {m_tempAtaque = tempAtaque;}
  double getTempAgilidad() { return m_tempAgilidad; }
  void setTempAgilidad(double tempDefensa) { m_tempAgilidad = tempDefensa; }
  double getTempDefensa() { return m_tempDefensa; }
  void setTempDefensa(double tempDefensa) { m_tempDefensa = tempDefensa; }
  double getTempMagia() { return m_tempMagia; }
  void setTempMagia(double tempMagia) { m_tempMagia = tempMagia; }
  double getTempVida() { return m_tempVida; }
  void setTempVida(double tempVida) { m_tempVida = tempVida; }
  double getTempStamina(){return m_tempStamina;}
  void setTempStamina(double tempStamina){m_tempStamina=tempStamina;}

  void mostrarEstadisticas(){
    cout<<"Vida ->      "<<getVida()<<endl;
    cout<<"Stamina ->   "<<getStamina()<<endl;
    cout<<"Ataque ->    "<<getAtaque()<<endl;
    cout<<"Magia ->     "<<getMagia()<<endl;
    cout<<"Defenza ->   "<<getDefensa()<<endl;
    cout<<"Agilidad ->  "<<getAgilidad()<<endl;
    cout << "----------" << endl;

  }
};

#endif //PERSONAJE_H
