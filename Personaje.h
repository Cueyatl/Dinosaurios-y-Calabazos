// Clase para definir personaje que selecciona jugador.

#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "ItemInventario.h"
#include "ExpJugador.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Personaje : public PrototipoPersonaje
{
private:
//si algo no funciona es por aqui:

  const string m_NOMBRE;
  int m_experiencia;
  int m_nivel;
  int m_vida=PrototipoPersonaje::m_vida;
  int m_ataque=PrototipoPersonaje::m_ataque;
public:
  vector<ItemInventario> m_ObjetosEnInventario;
   Personaje() : m_NOMBRE("Ingresa tu nombre"), m_nivel(1), m_vida(10), m_ataque(10), m_experiencia(0) {}

  Personaje(const string NOMBRE, int nivel, int vida, int ataque, vector<ItemInventario> ObjetosInventario, int experiencia)
    :m_NOMBRE(NOMBRE), m_nivel(nivel), m_vida(vida), m_ataque(ataque), m_ObjetosEnInventario(ObjetosInventario),m_experiencia(experiencia){};

  // string getNombre()const {oy
  //   cout<<"nombre -> "<<m_NOMBRE<<endl;
  //   return m_NOMBRE;}

  //  void mostrarInventario() const {
  //       for (const auto& item : m_ObjetosEnInventario) {
  //           item.mostrarPropiedades();
  //           cout << "----------" << endl;
  //       }
  //   }
  //   void agregarAlInventario(string nombre, int peso){
  //       ItemInventario item;
  //       item.agregarPropiedad(nombre,peso);
  //       m_ObjetosEnInventario.push_back(item);
  //   }

};

class Clase : public Personaje{
    protected:
        double m_vida;
        double m_stamina;
        double m_ataque;
        double m_magia;
        double m_defenza;
        double m_agilidad;
    public:
        Clase(double hp, double sta, double atk, double mag, double def, double agil)
        : m_vida(hp), m_stamina(sta), m_ataque(atk), m_magia(mag), m_defenza(def), m_agilidad(agil){}; 
        void mostrarEstadisticas(){
            cout<<"Vida ->      "<<getVida()<<" HP"<<endl;
            cout<<"Stamina ->   "<<getStamina()<<" Sta"<<endl;
            cout<<"Ataque ->    "<<getAtaque()<<" ATK"<<endl;
            cout<<"Magia ->     "<<getMagia()<<" MG"<<endl;
            cout<<"Defenza ->   "<<getDefenza()<<" DEF"<<endl;
            cout<<"Agilidad ->  "<<getAgilidad()<<" AGIL"<<endl;
        }
        double getVida(){
            return m_vida;
        }
        double getStamina(){
            return m_stamina;
        }
        double getAtaque(){
            return m_ataque;
        }
        double getMagia(){
            return m_magia;
        }
        double getDefenza(){
            return m_defenza;
        }
        double getAgilidad(){
            return m_agilidad;
        }
        void setVida(double hp){
            m_vida = hp;
        }
        void setStamina(double sta){
            m_stamina = sta;
        }
        void setAtaque(double atk){
            m_ataque = atk;
        }
        void setMagia(double mag){
            m_magia = mag;
        }
        void setDefenza(double def){
            m_defenza = def;
        }
        void setAgilidad(double agil){
            m_agilidad = agil;
        }
};

class Guerrero : public Clase{
    public:
    	Guerrero(double hp, double sta, double atk, double mag, double def, double agil) : Clase(hp, sta, atk, mag, def, agil){};
};

class Magico : public Clase{
    public:
		Magico(double hp, double sta, double atk, double mag, double def, double agil) : Clase(hp, sta, atk, mag, def, agil){};
};

class Sigilo : public Clase{
    public:
    	Sigilo(double hp, double sta, double atk, double mag, double def, double agil) : Clase(hp, sta, atk, mag, def, agil){};
};

//clase modificada para fines de pruebas
class Espadachin : public Guerrero{
    public:
    	Espadachin() : Guerrero(100,100,10,0,6,5){};
        double ataqueGolpeCola(){
            double dano = (getAtaque()*0.9) + (getDefenza()*0.5);
            cout<<"Ataque golpe Cola!"<<endl;
            return dano;
        }
        double ataqueDinoEstoque(){
            double dano = (getAtaque()*1.5);
            return dano;
        }
        double garraJurasica(){
            double dano = (getAtaque()*1.3) + (getDefenza()*0.8);
            return dano;
        } 
        double ataqueMordidaFinal(){
            double dano = (getAtaque()*2.8);
            return dano;
        }
};

class Berserker : public Guerrero{
    public:
    	Berserker() : Guerrero(125,80,15,0,8,3){};
        double ataqueGiroRex(){
            double dano = (getAtaque()*1.35);
            return dano;
        }
        double ataqueRugidoX2(){
            double dano = (ataqueGiroRex()*2);
            return dano;
        }
        double ataqueFuriaJurasica(){
            double dano = (getAtaque()*1.15) + (getDefenza()*1.2);
            return dano;
        }
        double ataqueSismoVolcanico(){
            double dano = (getAtaque()*2.2) + (getDefenza()*1.5);
            return dano;
        }
};

class Mago : public Magico{
    public:
    	Mago() : Magico(80,115,0,15,3,2){};
        double ataqueRayoFuego(){
            double dano = (getMagia()*1.3);
            return dano;
        }
        double ataqueBolaOscura(){
            double dano = (getMagia()*1.7);
            return dano;
        }
        double ataqueRugidoMagico(){
            double dano = (getMagia()*2);
            return dano;
        }
        double ataqueMeteoroCataclismico(){
            double dano = (getMagia()*3.2);
            return dano;
        }
};

class Sacerdote : public Magico{
    public:
    	Sacerdote() : Magico(100,125,0,8,2,1){};
        double rayoSanto(){
            double dano = (getMagia()*1.5);
            return dano;
        }
        double sanacion(){
            double curacion = (getVida()*0.4);
            return curacion;
        }
        double descanso(){
            double energia = (getStamina()*0.5);
            return energia;
        }
        double furiaDivina(){
            double dano = (getMagia()*3);
            return dano;
        }
};

class Ladron : public Sigilo{
    public:
    	Ladron() : Sigilo(90,125,6,0,4,10){};
        double corte(){
            double dano = (getAtaque()*0.7) + (getAgilidad()*0.6);
            return dano;
        }
        double corteX(){
            double dano = (getAtaque()*0.9) + (getAgilidad()*0.9);
            return dano;
        }
        double garraSigilo(){
            double dano = (getAtaque()*1) + (getAgilidad()*0.9);
            return dano;
        }
        double trampaJoshi(){
            double dano = (getAtaque()*1.2) + (getAgilidad()*1.3);
            return dano;
        }
};

class Arquero : public Sigilo{
    public:
    	Arquero() : Sigilo(100,100,12,0,2,6){};
        double disparo(){
            double dano = (getAtaque()*0.9) + (getAgilidad()*0.2);
            return dano;
        }
        double flechaRapida(){
            double dano = (getAtaque()*0.5) + (getAgilidad()*1.5);
            return dano;
        }
        double dinoFlecha(){
            double dano = (getAtaque()*1.1) + (getAgilidad()*0.5);
            return dano;
        }
        double flechaExtincion(){
            double dano = (getAtaque()*1.7) + (getAgilidad()*1.3);
            return dano;
        }
};

#endif //PERSONAJE_H