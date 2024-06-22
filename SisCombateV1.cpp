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



int main(int argc, char const *argv[])
{
  
  sistemaInventario inventario1;
  inventario1.agregarItem(0, "espada", "una espada afilida, buena para el combate", 10, 20);

  int damage = inventario1.getItem(0)->DANO;
  cout << damage << endl;
  inventario1.mostrarInventario();
  return 0;
}

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
  map<int, datosItem> items;

  
public:
  /*agregar al inventario, si existe la llave(numero de identificacion) error: llave ya existente,
  *Si no, agregarla. incluye un catch por si existe un error inesperado al agregar.
  *
  */
  void agregarItem(const int &llave, const string &NOMBRE, const string &DESCRIPCION, int PESO, int DANO)
  {
    
    try
    {
      // si buscando llave en items(objetos de inventario) es encontrada, ya existe
      if (items.find(llave) != items.end())
      {
        throw runtime_error("Llave " + to_string(llave) +" ya existente.");
      }
      
      
      items[llave] = datosItem{NOMBRE, DESCRIPCION, PESO, DANO};
    }
    catch (const exception &e)
    {
      cerr << "Error: llave de objeto de inventario no encontrada." << e.what();
    }
  }
  //try encontrar llave con metodo .find de <map> 
  const datosItem *getItem(const int &llave) const
  {
    try
    {
      auto item = items.find(llave);
      // caso exito me da los parametros de la struct "datosItem".
      return item != items.end() ? &item->second : nullptr;
    }
    /*Se agrego un catch, si existe un error es muy probable que sea aqui,
     sistemaInventario.agregarItem() funciona como un primer filtro para posibles problemas.
    */
    catch (const exception &e)
    {
      cerr << "Error fatal en GetItem. " << e.what() << endl;
      return nullptr;
    }
  }

  void mostrarInventario() const {
    for (const auto& item : items) {cout<<getItem(item.first)->NOMBRE<<endl;}
    cout << "----------" << endl;
  }
  
  void elminarItem(const int &llave) {
    try{
      auto item = items.find(llave);
      item==items.end() ? items.erase(item) : throw runtime_error("elemento " + to_string(llave) + " no encontrado");
    } catch(const exception& e) {
      cerr <<"Error: en eliminarItem(), no se pudo borrar el item." <<e.what() << '\n';
    }
  };
};





class Personaje : public sistemaInventario
{
private:
  string m_NOMBRE;
  long int m_ataque;
  long int m_agilidad;
  long int m_defenza;
  long int m_magia;
  long int m_stamina;
  long int m_vida; 
  

protected:
  sistemaInventario inventario;
public:
  
  Personaje(string nombre,long int vida, long int stamina, long int ataque, long int magia, long int defensa, long int agilidad)
        :m_NOMBRE(nombre), m_vida(vida), m_stamina(stamina), m_ataque(ataque), m_magia(magia), m_defenza(defensa), m_agilidad(agilidad){}; 

  string getNombre(){return m_NOMBRE;};
  long int getAtaque(){return m_ataque;};
  long int getAgilidad(){return m_agilidad;};
  long int getDefenza(){return m_defenza;}
  long int getMagia(){return m_magia;}
  long int getStamina(){return m_stamina;}
  long int getVida(){return m_vida;};

  void setAtaque(double ataque) {m_ataque = ataque;};
  void setAgilidad(double agilidad) {m_agilidad = agilidad;};
  void setMagia(double magia){m_magia = magia;}
  void setStamina(double stamina){m_stamina = stamina;}
  void setDefenza(double defensa){m_defenza = defensa;}
  void setVida(double vida) {m_vida = vida;};

  void mostrarEstadisticas(){
    cout<<"Vida ->      "<<getVida()<<" HP"<<endl;
    cout<<"Stamina ->   "<<getStamina()<<" Sta"<<endl;
    cout<<"Ataque ->    "<<getAtaque()<<" ATK"<<endl;
    cout<<"Magia ->     "<<getMagia()<<" MG"<<endl;
    cout<<"Defenza ->   "<<getDefenza()<<" DEF"<<endl;
    cout<<"Agilidad ->  "<<getAgilidad()<<" AGIL"<<endl;
  }

  ~Personaje();
};

class Enemigo: public Personaje
{
  public:
    Enemigo(string NOMBRE,double vida, double stamina, double ataque, double magia, double defensa, double agilidad) 
    : Personaje(NOMBRE,vida, stamina, ataque, magia, defensa, agilidad){};
  ~Enemigo();
};
//no tiene esta clase de salvaje..

class Oso : public Enemigo{
    private:
    const string NOMBRE="Guerrero Oso Perdido";
    public:
        Oso() : Enemigo(NOMBRE,200,100,20,0,15,7){};
        double embestida(){
            double dano = (getAtaque()*1.25) + (getDefenza()*0.5);
            return dano;
        }
        double ataqueGarra(){
            double dano = (getAtaque()*1.45);
            return dano;
        }
        double mordida(){
            double dano = (getAtaque()*1.6);
            return dano;
        }
        double abrazoDeOso(){
            double dano = (getAtaque()*1.9);
            return dano;
        }
};
class Jugador: public Personaje
{
public:
  Jugador(string NOMBRE,double vida, double stamina, double ataque, double magia, double defensa, double agilidad) 
    : Personaje(NOMBRE,vida, stamina, ataque, magia, defensa, agilidad){};
  Jugador();
  // static Jugador crearJugador(string nombre, long int vida, long int ataque, long int agilidad) {
  //   return Jugador(nombre, vida, ataque, agilidad);
  // }
  ~Jugador();
};


class Berserker : public Personaje{
    public:
    	Berserker() : Personaje("nombre",125,80,15,0,8,3){};
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


// class SisDeCombate
// {  
//   protected:
//     Jugador jugador;
//     Enemigo enemigo;
//   public:
//     //vector sencillo, representa experiencia ganada, karma ganado, por ahora solo es positivo.
//     vector<int, int> initCombate(Jugador jugador, Enemigo enemigo){ 
//       cout<<"Enemigo ataca con Flecha rapida"<<endl;
//       // jugador.setVida(jugador.getvida()-enemigo.ataque_flechaRapida());
//       // cout<<"Enemigo ataque con flecha rapida"<<endl;
//       // enemigo.setVida(enemigo.getvida()-jugador.ataque_flechaRapida());

//     }
    
//   ~SisDeCombate();
// };


 class App
 {
 protected:
 public:
  //objeto de inventario.
  void ejecutarJuego(){
  
  tuple<string, string, string,int,int > item_arcoFlecha =make_tuple(
      "0", "arco y flecha", "arco mistico, de antiguos tiempos violentos", 10, 20);
  

  Jugador  Conejo_de_Caerbannog;
  // Enemigo Bors;
  Conejo_de_Caerbannog.agregarItem(0, "wer","descr",10, 10);
  Conejo_de_Caerbannog.mostrarInventario();
  }
  
  /*ocuparia un metodo switch con trys and catch
   envuelto por un while para servir como interfaz de usuario en botones.
   Pero como es un solo ataque, nos saltamos esta parte por ahora.
  */
  
  
  App(/* args */);
  ~App();
 };
 
 