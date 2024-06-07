/* descripción: sistema de combate version 1.0
crea un enemigo, y personaje(protagonista) con inventario y ataques.
incluye una animacion de flechazo.
*/

#include <iostream>
#include <vector>
#include <stdexcept>
#include <thread>
#include <stdexcept>
#include <fstream>
#include <string>
#include <map>
#include <utility>
#include <tuple>

using namespace std;

#include <map>
#include <string>

struct datosItem
{
  string NOMBRE;
  string DESCRIPCION;
  int PESO;
  int DANO;
};




class sistemaInventario
{
private:
  map<string, datosItem> items;

public:
  void agregarItem(const string &llave, const string &NOMBRE, const string &DESCRIPCION, int PESO, int DANO)
  {
    try
    {
      // si buscando llave en items(objetos de inventario) es encontrada, ya existe
      if (items.find(llave) != items.end())
      {
        throw runtime_error("Llave " + llave + " de inventario ya existente.");
      }
      items[llave] = datosItem{NOMBRE, DESCRIPCION, PESO, DANO};
    }
    catch (const exception &e)
    {
      cerr << "Error: llave de objeto de inventario no encontrada." << e.what();
    }
  }

  const datosItem *getItem(const string &llave) const
  {
    try
    {
      auto item = items.find(llave);
      // caso exito me da los parametros.
      return item != items.end() ? &item->second : nullptr;
    }
    catch (const exception &e)
    {
      cerr << "Error fatal en GetItem. " << e.what() << endl;
      return nullptr;
    }
  }
};

class Personaje : public sistemaInventario
{
private:
  string m_NOMBRE;
  long int m_ataque;
  long int m_vida;
  long int m_agilidad;
protected:
  sistemaInventario inventario;
public:

  Personaje(string nombre,long int vida,long int ataque,long int agilidad)
    :m_NOMBRE(nombre),m_vida(vida), m_ataque(ataque), m_agilidad(agilidad){};
  ~Personaje();
  string getNombre(){return m_NOMBRE;};
  long int getvida(){return m_vida;};
  long int getAtaque(){return m_ataque;};
  long int getAgilidad(){return m_agilidad;};

  void setVida(double hp) {m_vida = hp;};
  void setAtaque(double atk) {m_ataque = atk;};
  void setAgilidad(double agil) {m_agilidad = agil;};

  double ataque_flechaRapida(){
    const string text_array[] = {
  "\\\\\\\\\\\\_____________________\"-._",
  "        /////~~~~~~~~~~~~~~~~~~~~~/.-'"
};
  
    double dano = (getAtaque()*0.5) + (getAgilidad()*1.5);
    return dano;
  };
};
class Enemigo: public Personaje
{
private:
  Enemigo(string nombre,long int vida, long int ataque, long int agilidad)
    : Personaje(nombre,vida, ataque, agilidad) {}
public:
  static Enemigo crearEnemigo(string nombre,long int vida, long int ataque, long int agilidad) {
    return Enemigo(nombre, vida, ataque, agilidad);
  }
  ~Enemigo();
};

class Jugador: public Personaje
{
private:
  Jugador(string nombre, long int vida, long int ataque, long int agilidad)
    : Personaje(nombre, vida, ataque, agilidad) {}
public:
  static Jugador crearJugador(string nombre, long int vida, long int ataque, long int agilidad) {
    return Jugador(nombre, vida, ataque, agilidad);
  }
  ~Jugador();
};


class SisDeCombate
{  
  protected:
    Jugador jugador;
    Enemigo enemigo;
  public:
    //vector sencillo, representa experiencia ganada, karma ganado, por ahora solo es positivo.
    vector<int, int> initCombate(Jugador jugador, Enemigo enemigo){ 
      cout<<"Enemigo ataca con Flecha rapida"<<endl;
      jugador.setVida(jugador.getvida()-enemigo.ataque_flechaRapida());
      cout<<"Enemigo ataque con flecha rapida"<<endl;
      enemigo.setVida(enemigo.getvida()-jugador.ataque_flechaRapida());

    }
    
  ~SisDeCombate();
};


 class App
 {
 protected:
 public:
  //objeto de inventario.
  void ejecutarJuego(){
  
  tuple<string, string, string,int,int > item_arcoFlecha =make_tuple(
      "0", "arco y flecha", "arco mistico, de antiguos tiempos violentos", 10, 20);
  

  Jugador  Conejo_de_Caerbannog;
  Enemigo Bors;
  }
  
  /*ocuparia un metodo switch con trys and catch
   envuelto por un while para servir como interfaz de usuario en botones.
   Pero como es un solo ataque, nos saltamos esta parte por ahora.
  */
  
  
  App(/* args */);
  ~App();
 };
 
 
int main(int argc, char const *argv[])
{
  
  sistemaInventario inventario1;
  inventario1.agregarItem("0", "espada", "una espada afilida, buena para el combate", as, 20);

  int damage = inventario1.getItem("0")->DANO;
  cout << damage << endl;
  return 0;
}