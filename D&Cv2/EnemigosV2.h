#include "PersonajeV2.h"
// Todos los monstruos solo regresan el DANO de cada ataque.
class Jabali : public PersonajeV2
{
public:
  Jabali(string nombre)
      : PersonajeV2(nombre, 75, 75, 15, 2, 9, 9) {}

double ataque_1() override {
    cout << "Ataque Patada" << endl;
    return (getAtaque() * 1.1);
}

double ataque_2() override {
    cout << "Ataque Embestida" << endl;
    return (getAtaque() * 1.25) + (getDefensa() * 0.5);
}

double ataque_3() override {
    cout << "Ataque Mordida Fatal" << endl;
    return (getAtaque() * 1.1) + (getAgilidad() * 0.3);
}

double ataque_4() override {
    cout << "Ataque Marranada" << endl;
    return (getAtaque() * 1.1) + (getStamina() * 0.3);
}

};
class Lobo : public PersonajeV2
{
public:
  Lobo(string nombre)
      : PersonajeV2(nombre, 125, 85, 13, 2, 9,11) {}

 double ataque_1() override {
    cout << "Ataque Embestida" << endl;
    return (getAtaque() * 1.25) + (getDefensa() * 0.5);
}

double ataque_2() override {
    cout << "Ataque Mordida" << endl;
    return (getAtaque() * 1.4);
}

double ataque_3() override {
    cout << "Ataque Golpe Alfa" << endl;
    return (getAtaque() * 1.8);
}

double ataque_4() override {
    cout << "Ataque Aullido Voraz" << endl;
    return (getAtaque() * 1.5);
}
};
class Oso : public PersonajeV2
{
public:
  Oso(string nombre)
      : PersonajeV2(nombre, 140, 100, 18, 0, 12, 5) {}

 double ataque_1() override {
    cout << "Ataque Embestida" << endl;
    return (getAtaque() * 1.25) + (getDefensa() * 0.5);
}

double ataque_2() override {
    cout << "Ataque Garra" << endl;
    return (getAtaque() * 1.45);
}

double ataque_3() override {
    cout << "Ataque Mordida" << endl;
    return (getAtaque() * 1.6);
}

double ataque_4() override {
    cout << "Ataque Abrazo de Oso" << endl;
    return (getAtaque() * 1.9);
}

};
class Dinosaurio : public PersonajeV2
{
public:
  Dinosaurio(string nombre)
      : PersonajeV2(nombre, 150, 150, 20, 0, 10, 5) {}

 double ataque_1() override {
    cout << "Ataque Golpe Cola" << endl;
    return (getAtaque() * 1.25) + (getDefensa() * 0.5);
}

double ataque_2() override {
    cout << "Ataque Garra" << endl;
    return (getAtaque() * 1.45);
}

double ataque_3() override {
    cout << "Ataque Mordida" << endl;
    return (getAtaque() * 1.6);
}

double ataque_4() override {
    cout << "Ataque Mordida Fuerte" << endl;
    return (getAtaque() * 2);
}

};
class Esqueleto : public PersonajeV2
{
public:
  Esqueleto(string nombre)
      : PersonajeV2(nombre, 100, 75, 16, 0, 8,11) {}

  double ataque_1() override {
    cout << "Ataque Golpe Espada" << endl;
    return (getAtaque() * 1.2);
}

double ataque_2() override {
    cout << "Ataque Garra de Ultratumba" << endl;
    return (getAtaque() * 1.4);
}

double ataque_3() override {
    cout << "Ataque Embestida Cementerio" << endl;
    return (getAtaque() * 1.2);
}

double ataque_4() override {
    cout << "Ataque Rompe Craneo" << endl;
    return (getAtaque() * 0.8);
}

};
class Zombie : public PersonajeV2
{
public:
  Zombie(string nombre)
      : PersonajeV2(nombre, 125, 100, 14, 8, 7, 6) {}

  double ataque_1() override {
    cout << "Ataque Agarre" << endl;
    return (getAtaque() * 1.2);
}

double ataque_2() override {
    cout << "Ataque Mordida" << endl;
    return (getAtaque() * 1.4);
}

double ataque_3() override {
    cout << "Ataque Embestida" << endl;
    return (getAtaque() * 1.4);
}

double ataque_4() override {
    cout << "Ataque Reclutamiento Mortal" << endl;
    return (getAtaque() * 1.1);
}
};
class Fantasma : public PersonajeV2
{
public:
  Fantasma(string nombre)
      : PersonajeV2(nombre, 125, 100, 7, 12, 8, 8) {}

  double ataque_1() override {
    cout << "Ataque Tormento" << endl;
    return (getMagia() * 1.3);
}

double ataque_2() override {
    cout << "Ataque Poltergeis" << endl;
    return (getMagia() * 1.5);
}

double ataque_3() override {
    cout << "Ataque Posesión Demoníaca" << endl;
    return (getMagia() * 2);
}

double ataque_4() override {
    cout << "Ataque Golpe de Ectoplasma" << endl;
    return (getMagia() * 2);
}

};
class Hada : public PersonajeV2
{
public:
  Hada(string nombre)
      : PersonajeV2(nombre, 80, 100, 4, 13, 10, 8) {}

 double ataque_1() override {
    cout << "Ataque Bola Luminosa" << endl;
    return (getMagia() * 1.3);
}

double ataque_2() override {
    cout << "Ataque Polvos Mágicos" << endl;
    return (getMagia() * 1.5);
}

double ataque_3() override {
    cout << "Ataque Golpe de Padrastro Borracho" << endl;
    return (getMagia() * 1.6);
}

double ataque_4() override {
    cout << "Ataque Magia Virtuosa" << endl;
    return (getMagia() * 1.4);
}


};
class Grifo : public PersonajeV2
{
public:
  Grifo(string nombre)
      : PersonajeV2(nombre, 150, 120, 14, 7, 10, 4) {}

  double ataque_1() override {
    cout << "Ataque Golpe Fuerte" << endl;
    return (getAtaque() * 1.3) + (getMagia() * 0.7) + (getDefensa() * 0.5);
}

double ataque_2() override {
    cout << "Ataque Embestida Celestial" << endl;
    return (getAtaque() * 1.5) + (getMagia() * 0.8) + (getDefensa() * 0.2);
}

double ataque_3() override {
    cout << "Ataque Vuelo del Alba" << endl;
    return (getAtaque() * 1.7) + (getMagia() * 1.2) + (getDefensa() * 0.7);
}

double ataque_4() override {
    cout << "Ataque Garra Fatal" << endl;
    return (getAtaque() * 1.7) + (getMagia() * 1.2) + (getDefensa() * 0.7);
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
      try {return make_unique<Jabali>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Lobo, checa EnemigosV2.seleccionarTipoClase()"<< e.what() << '\n';}
      break;
    case 2:
      try {return make_unique<Lobo>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Lobo, checa EnemigosV2.seleccionarTipoClase()"<< e.what() << '\n';}
      break;
    case 3:
      try {return make_unique<Oso>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Oso, checa EnemigosV2.seleccionarTipoClase()"<< e.what() << '\n';}
      break;
    case 4:
      try {return make_unique<Dinosaurio>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Dinosaurio, checa EnemigosV2.seleccionarTipoClase()"<< e.what() << '\n';}
      break;
    case 5:
      try {return make_unique<Esqueleto>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Esqueleto, checa EnemigosV2.seleccionarTipoClase()"<< e.what() << '\n';}
      break;
    case 6:
      try {return make_unique<Zombie>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Zombie, checa EnemigosV2.seleccionarTipoClase()"<< e.what() << '\n';}
      break;
    case 7:
      try {return make_unique<Fantasma>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Fanstasma, checa EnemigosV2.seleccionarTipoClase()"<< e.what() << '\n';}
      break;
    case 8:
      try {return make_unique<Hada>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Hada, checa EnemigosV2.seleccionarTipoClase()"<< e.what() << '\n';}
      break;
    case 9:
      try {return make_unique<Grifo>(nombre);}
      catch(const std::exception& e){
      cerr <<"error en crear pointer Grifo, checa EnemigosV2.seleccionarTipoClase()"<< e.what() << '\n';}
      break;
    default:
      return nullptr;
    }
    return nullptr;
  };
  
};