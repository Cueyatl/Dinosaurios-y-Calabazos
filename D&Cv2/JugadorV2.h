// Clase para definir personaje que selecciona jugador.
// Archivo antes Personaje, Ahora Jugador.h
#ifndef JUGADORV2_H
#define JUGADORV2_H
#include "PersonajeV2.h" //clase Personaje
#include <iostream>
#include <string>
#include <memory> 
using namespace std;  

// clase modificada para fines de pruebas
class Espadachin : public PersonajeV2
{
public:
  Espadachin(string nombre)
      : PersonajeV2(nombre, 100, 100, 12, 8, 7, 8)   {}

  double ataque_1()  override {
    cout<<"Ataque Golpe cola"<<endl;
    return (getAtaque() * 0.9) + (getAgilidad() * 0.2);}

  double ataque_2() override {
    cout<<"Ataque Mordida Final"<<endl;
    return (getAtaque() * 2.8);}
  
  double ataque_3() override{
    cout<<"Ataque Garra Jurasica"<<endl;
    return (getAtaque() * 1.3) + (getDefensa() * 0.8);}
  
   double ataque_4() override{
    cout<<"Ataque Pisoteo Devastador"<<endl;
    return (getAtaque() * 1.1) + (getDefensa() * 1.2);}
};


class Berserker : public PersonajeV2
{
public:
  Berserker(string nombre)
    : PersonajeV2(nombre, 125, 80, 8, 18, 8, 1) {}

  double ataque_1()  override {
    cout<<"Ataque Giro Rex"<<endl;
    return (getAtaque() * 1.35);}

  double ataque_2() override {
    cout<<"Ataque Rugido X2"<<endl;
    return (getAtaque() * 1.35 * 2);}
  
  double ataque_3() override{
    cout<<"Ataque Garra Jurasica"<<endl;
    return (getAtaque() * 1.15) + (getDefensa() * 1.2);}

  double ataque_4() override{
    cout<<"Ataque Sismo Volcanico"<<endl;
    return (getAtaque() * 2.2) + (getDefensa() * 1.5);}
};

class Mago : public PersonajeV2
{
public:
  Mago(string nombre)
      : PersonajeV2(nombre, 80, 115, 8, 18, 8, 1) {}

    double ataque_1() override { // Renombrado de ataqueRayoFuego
        cout << "Ataque Rayo de Fuego" << endl;
        return (getMagia() * 1.3);
    }
    double ataque_2() override { // Renombrado de ataqueBolaOscura
        cout << "Ataque Bola Oscura" << endl;
        return (getMagia() * 1.7);
    }
    double ataque_3() override { // Renombrado de ataqueRugidoMagico
        cout << "Ataque Rugido Mágico" << endl;
        return (getMagia() * 2.0);
    }
    double ataque_4() override { // Renombrado de ataqueMeteoroCataclismico
        cout << "Ataque Meteoro Cataclismico" << endl;
        return (getMagia() * 3.2);
    }
};

class Sacerdote : public PersonajeV2
{
public:
  Sacerdote(string nombre)
      : PersonajeV2(nombre, 100, 125,11, 15, 4, 5) {}

    double ataque_1() override { // Renombrado de rayoSanto
        cout << "Ataque Rayo Santo" << endl;
        return (getMagia() * 1.5);
    }

    double ataque_2() override { // Renombrado de luzSagrada
        cout << "Ataque Luz Sagrada" << endl;
        return (getMagia() * 1.7);
    }

    double ataque_3() override { // Renombrado de furiaDivina
        cout << "Ataque Furia Divina" << endl;
        return (getMagia() * 3.0);
    }

    double ataque_4() override { // Renombrado de LlamaBendita
        cout << "Ataque Llama Bendita" << endl;
        return (getMagia() * 1.4);
    }

};

class Ladron : public PersonajeV2
{
public:
  Ladron(string nombre)
      : PersonajeV2(nombre, 90, 125, 12, 4, 5, 4) {}

  double ataque_1() override {
    cout << "Ataque Corte" << endl;
    return (getAtaque() * 0.7) + (getAgilidad() * 0.6);
}

double ataque_2() override {
    cout << "Ataque Corte X" << endl;
    return (getAtaque() * 0.9) + (getAgilidad() * 0.9);
}

double ataque_3() override {
    cout << "Ataque Garra Sigilo" << endl;
    return (getAtaque() * 1) + (getAgilidad() * 0.9);
}

double ataque_4() override {
    cout << "Ataque Trampa Joshi" << endl;
    return (getAtaque() * 1.2) + (getAgilidad() * 1.3);
}
};

class Arquero : public PersonajeV2
{
public:
  Arquero(string nombre)
      : PersonajeV2(nombre, 100, 100, 11, 3, 3, 18) {}
      
 double ataque_1() override {
    cout << "Ataque Disparo" << endl;
    return (getAtaque() * 0.9) + (getAgilidad() * 0.2);
}

double ataque_2() override {
    cout << "Ataque Flecha Rápida" << endl;
    return (getAtaque() * 0.5) + (getAgilidad() * 1.5);
}

double ataque_3() override {
    cout << "Ataque Dino Flecha" << endl;
    return (getAtaque() * 1.1) + (getAgilidad() * 0.5);
}

double ataque_4() override {
    cout << "Ataque Flecha Extinción" << endl;
    return (getAtaque() * 1.7) + (getAgilidad() * 1.3);
}
};

class JugadorV2
{
private:
  /* data */
public:
/*Try and catch porque no confio mucho en este codigo jasjas*/
  unique_ptr<PersonajeV2> seleccionarTipoClase(int classId, string nombre)
  {
    switch (classId)
    {
    case 1:
    try {return make_unique<Espadachin>(nombre);}
    catch(const std::exception& e){
      cerr <<"error en crear pointer espadachin, checa JugadorV2.seleccionarTipoClase()"<< e.what() << '\n';}
    break;
    case 2:
      try {return make_unique<Berserker>(nombre);}
      catch(const std::exception& e){
        cerr <<"error en crear pointer Berserker, checa JugadorV2.seleccionarTipoClase()"<< e.what() << '\n';}
      
    break;
    case 3:
      try {return make_unique<Mago>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Mago, checa JugadorV2.seleccionarTipoClase()"<< e.what() << '\n';}
      
    break;
    case 4:
      try {return make_unique<Sacerdote>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Sacerdote, checa JugadorV2.seleccionarTipoClase()"<< e.what() << '\n';}
    break;
    case 5:
      try {return make_unique<Ladron>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Ladron, checa JugadorV2.seleccionarTipoClase()"<< e.what() << '\n';}
    break;
    case 6:
      try {return make_unique<Arquero>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Arquero, checa JugadorV2.seleccionarTipoClase()"<< e.what() << '\n';}
    default:
      return nullptr;
    }
    return nullptr;
  };
  
};

#endif // JUGADORV2_H