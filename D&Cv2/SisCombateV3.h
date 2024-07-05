#include "SisInventario.h"
#include "Auxiliares.h"
#include "JugadorV2.h"
#include "EnemigosV2.h"
#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <random>
#include <ctime>
#include <memory>
class SisCombateV3
{
public:
  JugadorV2 jugadorId;
  EnemigosV2 enemigosId;
  int tipoJugador;
  int tipoEnemigo;

  unique_ptr<PersonajeV2> jugador;
  unique_ptr<PersonajeV2> enemigo;

  SisCombateV3(int tj, int te) : tipoJugador(tj), tipoEnemigo(te) {}

  /*Calcula la posible estamina usada por cada ataque.*/
  static int acumuladorAleatorio(double probabilidades[])
  {
    default_random_engine generator(time(nullptr));
    uniform_real_distribution<double> distribution(0.0, 1.0);

    double random_number = distribution(generator);

    double probAcumulativa = 0;
    for (int i = 0; i < 4; ++i)
    {
      probAcumulativa += probabilidades[i];
      if (random_number < probAcumulativa)
      {
        return i + 1; // Numbers start from 1
      }
    }
    return 1; // Default return value if no condition is met
  }
  double calcularEstamina(int ataque)
  {
    switch (ataque)
    {
    case 1:
      return Auxiliares::numeroAleatorio(15, 25);
      break;
    case 2:
      return Auxiliares::numeroAleatorio(18, 23);
      break;
    case 3:
      return Auxiliares::numeroAleatorio(17, 21);
      break;
    case 4:
      return Auxiliares::numeroAleatorio(11, 19);
      break;
    default:
      return -1;
      break;
    }
  }
  void turnoJugador(unique_ptr<PersonajeV2> &jugador, unique_ptr<PersonajeV2> &enemigo, int &tipoJugador, int &tipoEnemigo)
  {

    char opciones;
    /*opciones:
      a = atacar
        1= ataque_1
        2= ataque_2
        3=ataque_3
        4=ataque_4
      b = inventario
        auto jugador.mostrarInventario()
        usar de inventario por llave.
    */
    // ESTO ES TEMPORAL
    cout << "atacar: a" << endl;
    cout << "usarInventario: b" << endl;
    // FIN DE ESTO ES TEMPORAL
    cin >> opciones;
    if (opciones == 'a')
    {
      int tipoAtaque;

      // ESTO ES TEMPORAL
      cout << "Elige un ataque:" << endl;
      cout << "selecciona 1, 2, 3, 4" << endl;
      cin >> tipoAtaque;
      // FIN DE ESTO ES TEMPORAL

      try
      {
        bool salirWhile = false;
        while (tipoAtaque >= 1 && tipoAtaque <= 4 && salirWhile)
        {
          // Calcula la estamina usada por cada ataque.
          /*
          ATAQUE -- ESTAMINA USADA
          ataque_1 -- PROB(15,25)
          ataque_2 -- PROB(18,23)
          ataque_3 -- PROB(17,21)
          ataque_4 -- PROB(11,19)*/
          jugador->setStamina(calcularEstamina(tipoAtaque));
          switch (tipoAtaque)
          {
          case 1:
            enemigo->setVida(enemigo->getVida() - jugador->ataque_1());
            break;
          case 2:
            enemigo->setVida(jugador->ataque_2());
            break;
          case 3:
            enemigo->setVida(jugador->ataque_3());
            break;
          case 4:
            enemigo->setVida(jugador->ataque_4());
            break;
          default:
            cout << "no no";
            break;
          }
          salirWhile = true;
        }
        cout << jugador->ataque_1() << endl;
        cout << enemigo->getVida() << endl;
      }
      catch (const exception &e)
      {
        cerr << "Error en invocar tipo de ataque en SisCombate." << e.what() << '\n';
      }
    }
    else
    {
      try
      {
        jugador->mostrarInventario();
        int idObjetoInventario;
        cout << "ingresa id del objeto del inventario" << endl;
        cin >> idObjetoInventario;
        Auxiliares::utilizarInventario(true, jugador, idObjetoInventario);
      }
      catch (const exception &e)
      {
        cerr << "Error inesperado al intentar usar utilizarInventario() en turnoJugador()" << e.what() << '\n';
      }
    }
  }

  void init_Combate()
  {
    jugador = jugadorId.seleccionarTipoClase(tipoJugador, "juan");
    enemigo = enemigosId.seleccionarTipoClase(tipoEnemigo, "Dinosaurio Salvaje "); // Use a placeholder name

    string mensaje_encuentro = enemigo->getNombre() + " quiere pelear!!";
    cout << mensaje_encuentro << endl;
    jugador = jugadorId.seleccionarTipoClase(tipoJugador, jugador->getNombre());
    enemigo = enemigosId.seleccionarTipoClase(tipoEnemigo, enemigo->getNombre());
    // Estadisticas inicales de enemigo
    enemigo->setTempVida(enemigo->getVida());
    double vidaInit = enemigo->getTempVida();
    enemigo->setTempStamina(enemigo->getStamina());
    double stamInit = enemigo->getTempStamina();
    // Fin de estadisticas inicales de enemigo

    while (jugador->getVida() >= 0 && enemigo->getVida() >= 0)
    {
      // TurnoJugador del Jugador
      turnoJugador(jugador, enemigo, tipoJugador, tipoEnemigo);
      // turno maquina.

      // Estadisticas de enemigo
      double vidaActual = enemigo->getVida();
      double stamActual = enemigo->getStamina();
      // Estadisticas de enemigo

      /*si vida menor a 0.5 del original && incluye objeto de pocion de vida? usar vida en turno en vez de atacar.
      si estamina mayor al 80%? probabilidad de ataque_1 al 70%.
      si estamina mayor al 50% y 80%? probabilidad de ataque_2 al 70%.
      si estamina mayor al 25% y 50%? probabilidad de ataque_3 al 70%.
      si estamina mayor al 0% y 25%? probabilidad de ataque_4 al 70%.
      */
      // probabilidades para el ataque del enemigo por turno
      // Esto aumenta la probabilidad de obtener algun ataque dependiendo de otros valores del enemigo.
      double prob_AtaqueUno[] = {0.5, 0.16, 0.16, 0.16};    // Numbers 1, 2, 3, 4 probabilities
      double prob_AtaqueDos[] = {0.5, 0.16, 0.16, 0.16};    // Numbers 1, 2, 3, 4 probabilities
      double prob_AtaqueTres[] = {0.5, 0.16, 0.16, 0.16};   // Numbers 1, 2, 3, 4 probabilities
      double prob_AtaqueCuatro[] = {0.5, 0.16, 0.16, 0.16}; // Numbers 1, 2, 3, 4 probabilities

      int tipoAtaque;
      // Calcula la probabilidad de tipo de ataque dependiendo de la vida y stamina.
      if (stamActual >= stamInit * 0.8 && vidaActual >= vidaInit * 0.8)
      {
        // mayor probabilidad de usar ataque 1.
        tipoAtaque = SisCombateV3::acumuladorAleatorio(prob_AtaqueUno);
      }
      else if (stamActual >= stamInit * 0.6 && vidaActual >= vidaInit * 0.6)
      {
        tipoAtaque = SisCombateV3::acumuladorAleatorio(prob_AtaqueDos);
      }
      else if (stamActual >= stamInit * 0.5 && vidaActual >= vidaInit * 0.5)
      {
        tipoAtaque = SisCombateV3::acumuladorAleatorio(prob_AtaqueTres);
      }
      else if (stamActual >= stamInit * 0.4 && vidaActual >= vidaInit * 0.4)
      {
        tipoAtaque = SisCombateV3::acumuladorAleatorio(prob_AtaqueTres);
      }
      else
      {
        tipoAtaque = 4;
      }

      enemigo->setStamina(calcularEstamina(tipoAtaque));
      switch (tipoAtaque)
      {
      case 1:
        jugador->setVida(enemigo->ataque_1());
        jugador->getVida();
        break;
      case 2:
        jugador->setVida(enemigo->ataque_2());
        jugador->getVida();
        break;
      case 3:
        jugador->setVida(enemigo->ataque_3());
        jugador->getVida();
        break;
      case 4:
        jugador->setVida(enemigo->ataque_4());
        jugador->getVida();
        break;
      default:
        cout << "no no";
        break;
        if (enemigo->getVida() <= vidaInit * 0.4)
        {

          enemigo->mostrarInventario();

          enemigo->getVida();
        }
      }
    }
    if (jugador->getVida() >= 0 && enemigo->getVida() >= 0)
    {
      cout << "El jugador " << jugador->getNombre() << " ha ganado!" << endl;
      /*SISTEMA DE EVEES, por temas de simplicidad, elije un atributo al azar
      (agilidad, ataque, defensa, magia) y le agrega el 10% del atributo seleccionado
      del enemigo. formula: a=a0+aE*0.1;
      donde a= atributo del jugador,
            a0=atributo del jugador actual
            aE=atributo del enemigo.
      */
      try
      {

        switch (Auxiliares::numeroAleatorio(1, 4))
        {
        case 1:
          jugador->setAgilidad(jugador->getAgilidad() + enemigo->getAgilidad() * 0.1);
          cout << jugador->getNombre() << " ha aumentado su Agilidad!";
          break;
        case 2:
          jugador->setAtaque(jugador->getAtaque() + enemigo->getAtaque() * 0.1);
          cout << jugador->getNombre() << " ha aumentado su Ataque!";
          break;
        case 3:
          jugador->setDefensa(jugador->getDefensa() + enemigo->getDefensa() * 0.1);
          cout << jugador->getNombre() << " ha aumentado su Defensa!";
          break;
        case 4:
          jugador->setMagia(jugador->getMagia() + enemigo->getMagia() * 0.1);
          cout << jugador->getNombre() << " ha aumentado su Magia!";
        default:
          break;
        }
        jugador->mostrarEstadisticas();
      }
      catch (const std::exception &e)
      {
        std::cerr << "Error en SISTEMA DE EVEES." << e.what() << '\n';
      }
    }
    else
    {
      cout << "el enemigo os a ganado" << endl;
    }
  }

void print_vida(){
  cout<<enemigo->getNombre() << "  -----  ";
  cout<<enemigo->getVida();
  cout<<jugador->getNombre()<< "  -----  ";
  cout<<jugador->getVida();
}
 
 void selectAtaque(int tipoAtaque){
   cin>>tipoAtaque;
  cout<<jugador->getVida() << " ha usado"<<endl;

    switch (tipoAtaque)
    {
    case 1:
    enemigo->setVida(enemigo->getVida() - jugador->ataque_1());
    
      break;
    case 2:
      enemigo->setVida(jugador->ataque_2());
      break;
    case 3:
      enemigo->setVida(jugador->ataque_3());
      break;
    case 4:
      enemigo->setVida(jugador->ataque_4());
      break;
    default:
      cout << "no no";
      break;
    }
  }

 };
