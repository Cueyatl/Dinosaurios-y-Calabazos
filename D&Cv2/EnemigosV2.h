#ifndef ENEMIGOSV2_H
#define ENEMIGOSV2_H
#include "PersonajeV2.h"
#include <iostream>
#include <string>
#include <memory>
using namespace std;
class Jabali : public PersonajeV2
{
public:
  Jabali(string nombre)
      : PersonajeV2(nombre, 75, 75, 15, 2, 9, 9) {}
  string a_1_ataque() override {return "";};
  string a_2_ataque() override {return "";};
  string a_3_ataque() override {return "";};
  string a_4_ataque() override {return "";};
  double ataque_1() override
  {
    cout << "Ataque Patada" << endl;
    return getMagia() * 1.2 + getAtaque() * 1.4 + getMagia() * 5;
  }

  double ataque_2() override
  {
    cout << "Ataque Embestida" << endl;
   return getMagia() * 1 + getDefensa() * 1 + getAgilidad() * 2;
  }

  double ataque_3() override
  {
    cout << "Ataque Mordida Fatal" << endl;
    return getMagia() * 2 + getAtaque() * 0.7 + getDefensa() * 1.1;
  }

  double ataque_4() override
  {
    cout << "Ataque Marranada" << endl;
    return getMagia() * 3 + getMagia() * 1.2 + getDefensa() * 1.3;
  }
};
class Lobo : public PersonajeV2
{
public:
  Lobo(string nombre)
      : PersonajeV2(nombre, 125, 85, 13, 2, 9, 11) {}
  string a_1_ataque() override {return "";};
  string a_2_ataque() override {return "";};
  string a_3_ataque() override {return "";};
  string a_4_ataque() override {return "";};
  double ataque_1() override
  {
    cout << "Ataque Embestida" << endl;
    return getMagia() * 2 + getDefensa() * 1.4 + getAtaque() * 1.2;
  }

  double ataque_2() override
  {
    cout << "Ataque Mordida" << endl;
    return getMagia() * 1.5 + getDefensa() * 2 + getAgilidad() * 1.5;
  }

  double ataque_3() override
  {
    cout << "Ataque Golpe Alfa" << endl;
    return getMagia() * 4 + getAtaque() * 1.1 + getMagia() * 0.9;
  }

  double ataque_4() override
  {
    cout << "Ataque Aullido Voraz" << endl;
    return getMagia() * 7 + getMagia() * 0.4 + getAgilidad() * 0.5;
  }
};
class Oso : public PersonajeV2
{
public:
  Oso(string nombre)
      : PersonajeV2(nombre, 140, 100, 18, 0, 12, 5) {}
  string a_1_ataque() override {return "";};
  string a_2_ataque() override {return "";};
  string a_3_ataque() override {return "";};
  string a_4_ataque() override {return "";};
  double ataque_1() override
  {
    cout << "Ataque Embestida" << endl;
    return getMagia() * 5 + getMagia() * 3 + getAtaque() * 1.8;
  }

  double ataque_2() override
  {
    cout << "Ataque Garra" << endl;
    return getMagia() * 1 + getDefensa() * 0.4 + getAtaque() * 1.3;
  }

  double ataque_3() override
  {
    cout << "Ataque Mordida" << endl;
   return getMagia() * 3 + getMagia() * 4 + getAgilidad() * 4.9;
  }

  double ataque_4() override
  {
    cout << "Ataque Abrazo de Oso" << endl;
    return getMagia() + getMagia() * 4.5 + getAgilidad() * 4.1;
  }
};
class Dinosaurio : public PersonajeV2
{
public:
  Dinosaurio(string nombre)
      : PersonajeV2(nombre, 150, 150, 20, 0, 10, 5) {}
  string a_1_ataque() override {return "";};
  string a_2_ataque() override {return "";};
  string a_3_ataque() override {return "";};
  string a_4_ataque() override {return "";};
  double ataque_1() override
  {
    cout << "Ataque Golpe Cola" << endl;
    return getMagia() + getDefensa() * 0.5 + getAtaque() * 1.3;
  }

  double ataque_2() override
  {
    cout << "Ataque Garra" << endl;
    return getMagia() + getMagia() * 2 + getAtaque() * 1.4;
  }

  double ataque_3() override
  {
    cout << "Ataque Mordida" << endl;
    return getMagia() + getDefensa() * 1.4 + getAgilidad() * 2;
  }

  double ataque_4() override
  {
    cout << "Ataque Mordida Fuerte" << endl;
    return getMagia() + getMagia() * 1.6 + getDefensa() * 2;
  }
};
class Esqueleto : public PersonajeV2
{
public:
  Esqueleto(string nombre)
      : PersonajeV2(nombre, 100, 75, 16, 0, 8, 11) {}
  string a_1_ataque() override {return "";};
  string a_2_ataque() override {return "";};
  string a_3_ataque() override {return "";};
  string a_4_ataque() override {return "";};
  double ataque_1() override
  {
    cout << "Ataque Golpe Espada" << endl;
    return getMagia() + getAtaque() * 1.5 + getAgilidad() * 0.9;
  }

  double ataque_2() override
  {
    cout << "Ataque Garra de Ultratumba" << endl;
    return getDefensa() * 2 + getAtaque() * 0.8;
  }

  double ataque_3() override
  {
    cout << "Ataque Embestida Cementerio" << endl;
    return getMagia() + getAtaque() * 1.5;
  }

  double ataque_4() override
  {
    cout << "Ataque Rompe Craneo" << endl;
    return getAgilidad() * 1.9;
  }
};
class Zombie : public PersonajeV2
{
public:
  Zombie(string nombre)
      : PersonajeV2(nombre, 125, 100, 14, 8, 7, 6) {}
  string a_1_ataque() override {return "";};
  string a_2_ataque() override {return "";};
  string a_3_ataque() override {return "";};
  string a_4_ataque() override {return "";};
  double ataque_1() override
  {
    cout << "Ataque Agarre" << endl;
   return getMagia() * 1 + getMagia() * 1.4 + getAtaque() * 1;
  }

  double ataque_2() override
  {
    cout << "Ataque Mordida" << endl;
    return getMagia() * 1 + getAtaque() * 0.5 + getAtaque() * 1;
  }

  double ataque_3() override
  {
    cout << "Ataque Embestida" << endl;
    return getMagia() * 0.5 + getAtaque() * 1.4;
  }

  double ataque_4() override
  {
    cout << "Ataque Reclutamiento Mortal" << endl;
   return getMagia() * 0.8 + getMagia() * 1.8;
  }
};
class Fantasma : public PersonajeV2
{
public:
  Fantasma(string nombre)
      : PersonajeV2(nombre, 125, 100, 7, 12, 8, 8) {}
  string a_1_ataque() override {return "";};
  string a_2_ataque() override {return "";};
  string a_3_ataque() override {return "";};
  string a_4_ataque() override {return "";};
  double ataque_1() override
  {
    cout << "Ataque Tormento" << endl;
    return getMagia() * 0.4 + getMagia() * 2 + getDefensa() * 0.4;
  }

  double ataque_2() override
  {
    cout << "Ataque Poltergeis" << endl;
    return getMagia() * 0.6 + getDefensa() * 1.7 + getAgilidad() * 1;
  }

  double ataque_3() override
  {
    cout << "Ataque Posesión Demoníaca" << endl;
    return getMagia() * 0.7 + getAgilidad() * 1.8 + getAtaque() * 0.5;
  }

  double ataque_4() override
  {
    cout << "Ataque Golpe de Ectoplasma" << endl;
    return getMagia() * 0.4 + getMagia() * 1 + getAtaque() * 0.4;
  }
};
class Hada : public PersonajeV2
{
public:
  Hada(string nombre)
      : PersonajeV2(nombre, 80, 100, 4, 13, 10, 8) {}
  string a_1_ataque() override {return "";};
  string a_2_ataque() override {return "";};
  string a_3_ataque() override {return "";};
  string a_4_ataque() override {return "";};
  double ataque_1() override
  {
    cout << "Ataque Bola Luminosa" << endl;
    return getMagia() * 0.4 + getAgilidad() * 2 + getMagia() * 0.9;
  }

  double ataque_2() override
  {
    cout << "Ataque Polvos Mágicos" << endl;
    return getMagia() * 0.6 + getMagia() * 1.2 + getAtaque() * 1.5;
  }

  double ataque_3() override
  {
    cout << "Ataque Golpe de Padrastro Borracho" << endl;
    return getMagia() * 0.4 + getAgilidad() * 1.6 + getAtaque() * 1.4;
  }

  double ataque_4() override
  {
    cout << "Ataque Magia Virtuosa" << endl;
    return getMagia() * 0.7 + getDefensa() * 0.5 + getMagia() * 0.5;
  }
};
class Grifo : public PersonajeV2
{
public:
  Grifo(string nombre)
      : PersonajeV2(nombre, 150, 120, 14, 7, 10, 4) {}

  string a_1_ataque() override {return "";};
  string a_2_ataque() override {return "";};
  string a_3_ataque() override {return "";};
  string a_4_ataque() override {return "";};
  double ataque_1() override
  {
    cout << "Ataque Golpe Fuerte" << endl;
    return getMagia() * 2 + getAgilidad() * 4 + getDefensa() * 0.3;
  }

  double ataque_2() override
  {
    cout << "Ataque Embestida Celestial" << endl;
   return getMagia() * 0.5 + getAtaque() * 0.9 + getMagia() * 1.9;
  }

  double ataque_3() override
  {
    cout << "Ataque Vuelo del Alba" << endl;
    return getMagia() * 0.9 + getAgilidad() * 1 + getMagia() * 1.9;
  }

  double ataque_4() override
  {
    cout << "Ataque Garra Fatal" << endl;
   return 10.5 + getMagia() * 0.2 + getDefensa() * 0.9;
  }
};

class EnemigosV2
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
      try
      {
        return make_unique<Jabali>(nombre);
      }
      catch (const std::exception &e)
      {
        cerr << "error en crear pointer Lobo, checa EnemigosV2.seleccionarTipoClase()" << e.what() << '\n';
      }
      break;
    case 2:
      try
      {
        return make_unique<Lobo>(nombre);
      }
      catch (const std::exception &e)
      {
        cerr << "error en crear pointer Lobo, checa EnemigosV2.seleccionarTipoClase()" << e.what() << '\n';
      }
      break;
    case 3:
      try
      {
        return make_unique<Oso>(nombre);
      }
      catch (const std::exception &e)
      {
        cerr << "error en crear pointer Oso, checa EnemigosV2.seleccionarTipoClase()" << e.what() << '\n';
      }
      break;
    case 4:
      try
      {
        return make_unique<Dinosaurio>(nombre);
      }
      catch (const std::exception &e)
      {
        cerr << "error en crear pointer Dinosaurio, checa EnemigosV2.seleccionarTipoClase()" << e.what() << '\n';
      }
      break;
    case 5:
      try
      {
        return make_unique<Esqueleto>(nombre);
      }
      catch (const std::exception &e)
      {
        cerr << "error en crear pointer Esqueleto, checa EnemigosV2.seleccionarTipoClase()" << e.what() << '\n';
      }
      break;
    case 6:
      try
      {
        return make_unique<Zombie>(nombre);
      }
      catch (const std::exception &e)
      {
        cerr << "error en crear pointer Zombie, checa EnemigosV2.seleccionarTipoClase()" << e.what() << '\n';
      }
      break;
    case 7:
      try
      {
        return make_unique<Fantasma>(nombre);
      }
      catch (const std::exception &e)
      {
        cerr << "error en crear pointer Fanstasma, checa EnemigosV2.seleccionarTipoClase()" << e.what() << '\n';
      }
      break;
    case 8:
      try
      {
        return make_unique<Hada>(nombre);
      }
      catch (const std::exception &e)
      {
        cerr << "error en crear pointer Hada, checa EnemigosV2.seleccionarTipoClase()" << e.what() << '\n';
      }
      break;
    case 9:
      try
      {
        return make_unique<Grifo>(nombre);
      }
      catch (const std::exception &e)
      {
        cerr << "error en crear pointer Grifo, checa EnemigosV2.seleccionarTipoClase()" << e.what() << '\n';
      }
      break;
    default:
      return nullptr;
    }
    return nullptr;
  };
};
#endif // ENEMIGOSV2_H
