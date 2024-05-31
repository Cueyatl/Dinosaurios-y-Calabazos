#ifndef PERSONAJE_H
#define PERSONAJE_H
#include "ItemInventario.h"
#include <iostream>
#include <string>
#include <vector>
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

class Clase : public Personaje{
    protected:
        double experiencia;
        double vida;
        double stamina;
        double ataque;
        double magia;
        double defenza;
        double agilidad;
    public:
        Clase(double hp, double sta, double atk, double mag, double def, double agil): vida(hp), stamina(sta), ataque(atk), magia(mag), defenza(def), agilidad(agil){}; 
        void viewStats(){
            cout<<"Vida ->      "<<getVida()<<" HP"<<endl;
            cout<<"Stamina ->   "<<getStamina()<<" Sta"<<endl;
            cout<<"Ataque ->    "<<getAtaque()<<" ATK"<<endl;
            cout<<"Magia ->     "<<getMagia()<<" MG"<<endl;
            cout<<"Defenza ->   "<<getDefenza()<<" DEF"<<endl;
            cout<<"Agilidad ->  "<<getAguilidad()<<" AGIL"<<endl;
        }
        double getVida(){
            return vida;
        }
        double getStamina(){
            return stamina;
        }
        double getAtaque(){
            return ataque;
        }
        double getMagia(){
            return magia;
        }
        double getDefenza(){
            return defenza;
        }
        double getAguilidad(){
            return agilidad;
        }
        void setVida(double hp){
            vida = hp;
        }
        void setStamina(double sta){
            stamina = sta;
        }
        void setAtaque(double atk){
            ataque = atk;
        }
        void setMagia(double mag){
            magia = mag;
        }
        void setDefenza(double def){
            defenza = def;
        }
        void setAgilidad(double agil){
            agilidad = agil;
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

class Espadachin : public Guerrero{
    public:
    	Espadachin() : Guerrero(100,100,10,0,6,5){};
        double golpeCola(){
            double dano = (getAtaque()*0.9) + (getDefenza()*0.5);
            return dano;
        }
        double dinoEstoque(){
            double dano = (getAtaque()*1.5);
            return dano;
        }
        double garraJurasica(){
            double dano = (getAtaque()*1.3) + (getDefenza()*0.8);
            return dano;
        } 
        double mordidaFinal(){
            double dano = (getAtaque()*2.8);
            return dano;
        }
};

class Berserker : public Guerrero{
    public:
    	Berserker() : Guerrero(125,80,15,0,8,3){};
        double giroRex(){
            double dano = (getAtaque()*1.35);
            return dano;
        }
        double rugidoX2(){
            double dano = (giroRex()*2);
            return dano;
        }
        double furiaJurasica(){
            double dano = (getAtaque()*1.15) + (getDefenza()*1.2);
            return dano;
        }
        double sismoVolcanico(){
            double dano = (getAtaque()*2.2) + (getDefenza()*1.5);
            return dano;
        }
};

class Mago : public Magico{
    public:
    	Mago() : Magico(80,115,0,15,3,2){};
        double rayoFuego(){
            double dano = (getMagia()*1.3);
            return dano;
        }
        double bolaOscura(){
            double dano = (getMagia()*1.7);
            return dano;
        }
        double rugidoMagico(){
            double dano = (getMagia()*2);
            return dano;
        }
        double meteoroCataclismico(){
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
            double dano = (getAtaque()*0.7) + (getAguilidad()*0.6);
            return dano;
        }
        double corteX(){
            double dano = (getAtaque()*0.9) + (getAguilidad()*0.9);
            return dano;
        }
        double garraSigilo(){
            double dano = (getAtaque()*1) + (getAguilidad()*0.9);
            return dano;
        }
        double trampaJoshi(){
            double dano = (getAtaque()*1.2) + (getAguilidad()*1.3);
            return dano;
        }
};

class Arquero : public Sigilo{
    public:
    	Arquero() : Sigilo(100,100,12,0,2,6){};
        double disparo(){
            double dano = (getAtaque()*0.9) + (getAguilidad()*0.2);
            return dano;
        }
        double flechaRapida(){
            double dano = (getAtaque()*0.5) + (getAguilidad()*1.5);
            return dano;
        }
        double dinoFlecha(){
            double dano = (getAtaque()*1.1) + (getAguilidad()*0.5);
            return dano;
        }
        double flechaExtincion(){
            double dano = (getAtaque()*1.7) + (getAguilidad()*1.3);
            return dano;
        }
};

#endif //PERSONAJE_H