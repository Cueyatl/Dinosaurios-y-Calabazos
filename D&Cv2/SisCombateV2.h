#ifndef SISCOMBATE_H
#define SISCOMBATE_H
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
using namespace std;

//NOTA: metodos ordenados de manera alfabetica, excepto init_Combate(), está al inicio e iniciliza el combate.
class SisCombateV2
{
public:
  // Valores inicializadores.
  JugadorV2 objJugador;
  EnemigosV2 objEnemigo;

  unique_ptr<PersonajeV2> &jugador;
  unique_ptr<PersonajeV2> &enemigo;

  SisCombateV2(unique_ptr<PersonajeV2> &unique_jugador,
               unique_ptr<PersonajeV2> &unique_enemigo) : jugador(unique_jugador), enemigo(unique_enemigo) {}
  // Fin de valores inicializadores.
  /*Calcula la posible estamina usada por cada ataque.*/
//Ejecuta el combate en un while jugador y enemigo siguen vivos.
void init_Combate()
  {
    cout << "COMBATE!!" << endl;
    string mensaje_encuentro = enemigo->getNombre() + " quiere pelear!!";
    cout << mensaje_encuentro << endl;

    // Guarda los valores  inicales de enemigo. (sisEvees)
    enemigo->setTempVida(enemigo->getVida());
    double vidaInit = enemigo->getTempVida();
    enemigo->setTempStamina(enemigo->getStamina());
    double stamInit = enemigo->getTempStamina();

    //Agrega inventario al enemigo.
    Auxiliares::agregarInventarioEnemigo(enemigo);
    // Guarda los valores iniciales de jugador antes de combate. (sisEvees)
    jugador->setTempVida(jugador->getVida());
    jugador->setTempStamina(jugador->getStamina());

    // Iniciar el combate.
    while (jugador->getVida() >= 0 || enemigo->getVida() >= 0)
    {
      // Ambos siguen vivos.
      if (jugador->getVida() >= 0 && enemigo->getVida() >= 0)
      {
        turnoJugador(jugador, enemigo);
        turnoEnemigo(vidaInit, stamInit);
      }
      
      // Alguno de los dos está muerto, no tiene caso volver a atacar.
      else if( jugador->getVida()<=0 || enemigo->getVida()<=0)
      {
        break;
      }

      // Imprime tu vida y estamina despues de cada golpe.
      print_vida();
    }
    // Sistema de recompensa de evees, restaura valores.
    sisEvees(jugador, enemigo);
  }

/*Calculo de estadistica acumulada para cambiar las probabilidades del enemigo
 para utilizar un ataque dependiendo de su estamina actual*/
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

  // Calcula la estamina usada por cada ataque. Usado para jugador y enemigo.
  /*
  ATAQUE -- ESTAMINA USADA
  ataque_1 -- PROB(15,25)
  ataque_2 -- PROB(18,23)
  ataque_3 -- PROB(17,21)
  ataque_4 -- PROB(11,19)*/
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

//TODO: Quiero agregar mas mensajes en forma de mapa, en vez de metodos, porque creo que hay muchos mensajes dispersos.
  void mensaje_hasMuerto()
  {
    string mensaje_hasMuerto = jugador->getNombre() + " ha Muerto.\nFin del juego.";
    cout << mensaje_hasMuerto << endl;
  }
  // ESTO ES TEMPORAL Aqui debe de ejecutarse el menu de interfaz.h
  void menu_atacarInventario()
  {
    // pasar esto a un menu, si no hay suficiente estamina cambiar menu
    cout << "atacar: a" << endl;
    cout << "usarInventario: b" << endl;
  }
  void menu_Inventario()
  {
    cout << "Continuar" << endl;
    cout << "usarInventario: b" << endl;
  }
  // FIN DE ESTO ES TEMPORAL

// Muestra la vida y la estamina de jugador y enemigo despues de darse de madrasos.
  void print_vida()
  {
    string mensaje_mostrarVida = "vida  -----  ";
    string mensaje_mostrarEstamina = "Estamina ----- ";

    cout << enemigo->getNombre() << endl;
    cout << mensaje_mostrarVida;
    cout << enemigo->getVida() << endl;
    cout << mensaje_mostrarEstamina;
    cout << enemigo->getStamina() << endl;

    cout << jugador->getNombre() << endl;
    cout << mensaje_mostrarVida;
    cout << jugador->getVida() << endl;
    cout << mensaje_mostrarEstamina;
    cout << jugador->getStamina() << endl;
  }

//Selecciona ataque con un switch, funciona en turnoJugador y turnoEnemigo.
  void selectAtaque(int tipoAtaque, bool turnoJugador)
  {
    string mensaje_Usado = " ha usado ";
    if (turnoJugador)
    {

      cout << jugador->getNombre() << mensaje_Usado;
      switch (tipoAtaque)
      {
      case 1:
        enemigo->setVida(enemigo->getVida() - jugador->ataque_1());
        break;
      case 2:
        enemigo->setVida(enemigo->getVida() - jugador->ataque_2());
        break;
      case 3:
        enemigo->setVida(enemigo->getVida() - jugador->ataque_3());
        break;
      case 4:
        enemigo->setVida(enemigo->getVida() - jugador->ataque_4());
        break;
      default:
        cerr << "no no... en selectAtaque de enemigo (。_。)";
        break;
      }
    }
    else
    {
      cout << enemigo->getNombre() << mensaje_Usado;
      switch (tipoAtaque)
      {
      case 1:
        jugador->setVida(jugador->getVida() - jugador->ataque_1());
        break;
      case 2:
        jugador->setVida(jugador->getVida() - enemigo->ataque_2());
        break;
      case 3:
        jugador->setVida(jugador->getVida() - enemigo->ataque_3());
        break;
      case 4:
        jugador->setVida(jugador->getVida() - enemigo->ataque_4());
        break;
      default:
        cerr << "no no... pero en selectAtaque de enemigo (。_。)";
        break;
      }
    }
  }

/*SISTEMA DE EVEES, por temas de simplicidad, elije un atributo al azar
  (agilidad, ataque, defensa, magia) y le agrega el 10% del atributo seleccionado
  del enemigo. formula: a = a0 + (aE * 0.1)
  donde:
    a= atributo del jugador. 
    a0 = atributo del jugador actual.
    aE = atributo del enemigo.
  */
  void sisEvees(unique_ptr<PersonajeV2> &jugador, unique_ptr<PersonajeV2> &enemigo)
  {
    // Valor a curar despues de combate.
    double factorDeRegeneracion=0.95;
    if (jugador->getVida() >= 0)
    {
      cout << "El jugador " << jugador->getNombre() << " ha ganado!" << endl;

      try
      {
        // Aplica el valor ganado de manera aleatoria.
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
        cout << endl;
        // Restaura vida y estamina de enemigo por si vuelve a aparecer.
        enemigo->setVida(enemigo->getTempVida());
        enemigo->setStamina(enemigo->getTempStamina());

        // restaurar vida y estamina de jugador.
        jugador->setVida(jugador->getTempVida()*factorDeRegeneracion);
        jugador->setStamina(jugador->getTempStamina());
        jugador->mostrarEstadisticas();
      }
      catch (const exception &e)
      {
        cerr << "Error en SISTEMA DE EVEES." << e.what() << '\n';
      }
    }
    else
    {
      cout << "El enemigo " << enemigo->getNombre() << " ha ganado!" << endl;
      mensaje_hasMuerto();
    }
  }

//Turno de lanzar ataque de enemigo.
  void turnoEnemigo(double vidaInit, double stamInit)
  {
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

    int tipoAtaque = Auxiliares::numeroAleatorio(1, 4);
    cout << "ataque de enemigo seleccionado " << tipoAtaque << endl;
    // Calcula la probabilidad de tipo de ataque dependiendo de la vida y stamina.
    if (stamActual >= stamInit * 0.8 && vidaActual >= vidaInit * 0.8)
    {
      // mayor probabilidad de usar ataque 1.
      tipoAtaque = SisCombateV2::acumuladorAleatorio(prob_AtaqueUno);
    }
    else if (stamActual >= stamInit * 0.6 && vidaActual >= vidaInit * 0.6)
    {
      tipoAtaque = SisCombateV2::acumuladorAleatorio(prob_AtaqueDos);
    }
    else if (stamActual >= stamInit * 0.5 && vidaActual >= vidaInit * 0.5)
    {
      tipoAtaque = SisCombateV2::acumuladorAleatorio(prob_AtaqueTres);
    }
    else if (stamActual >= stamInit * 0.4 && vidaActual >= vidaInit * 0.4)
    {
      tipoAtaque = SisCombateV2::acumuladorAleatorio(prob_AtaqueTres);
    }
    else
    {
      tipoAtaque = 4;
    }
    selectAtaque(tipoAtaque, false);
    enemigo->setStamina(enemigo->getStamina() - calcularEstamina(tipoAtaque));
  }
//Turno de lanzar ataque de Jugador.
  void turnoJugador(unique_ptr<PersonajeV2> &jugador, unique_ptr<PersonajeV2> &enemigo)
  {

    // char opciones;
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
    // cin >> opciones;
    // SELECCIONAR ATAQUE
    // Jugador sigue vivo?
    if (jugador->getVida() >= 0)
    {

      // Jugador tiene estamina para atacar?
      if (jugador->getStamina() >= 0)
      {

        cout << "jugador tiene estamina" << endl;
        menu_atacarInventario();
        char opciones;
        cin >> opciones;

        if (opciones == 'a')

        {

          int tipoAtaque;
          // Menú para seleccionar el ataque
          cout << "Elige un ataque:" << endl;
          cout << "selecciona 1, 2, 3, 4" << endl;
          cin >> tipoAtaque;

          // Comprobación de ataque válido
          if (tipoAtaque >= 1 && tipoAtaque <= 4)
          {
            try
            {
              // Calcula la estamina usada por cada ataque
              jugador->getStamina() >= 0 ? jugador->setStamina(jugador->getStamina() - calcularEstamina(tipoAtaque))
                                         : jugador->setStamina(0);

              // Seleccionar ataque
              selectAtaque(tipoAtaque, true);
            }
            catch (const exception &e)
            {
              cerr << "Error en invocar tipo de ataque en SisCombate: " << e.what() << '\n';
            }
          }
          else
          {
            cerr << "Ataque INVALIDO. Selecciona un ataque valido (1-4)." << endl;
          }
        }
        else if (opciones == 'b')
        {
          usarInventarioEnCombate();
        }
        else
        {
          cerr << "Opcion INVALIDA. Selecciona 'a' para atacar o 'b' para usar el inventario." << endl;
        }
      }
      // Jugador NO tiene estamina,
      else
      {
        char opciones;
        cin >> opciones;
        cout << "Estamina insuficiente, No puedes atacar!";
        menu_Inventario();
        if (opciones == 'a')
        {
          cout << jugador->getNombre() << " no hace nada" << endl;
        }
        else if (opciones == 'b')
        {
          usarInventarioEnCombate();
        }
        else
        {
          cerr << "Opcion INVALIDA. Selecciona 'a' para atacar o 'b' para usar el inventario." << endl;
        }
      }
    }
    // Jugador NO tiene vida.
    else
    {
      mensaje_hasMuerto();
    }
  };

//Permite usar el inventario dentro de combate. TODO: incluir interfaz.h al sistema de inventario.
  void usarInventarioEnCombate()
  {
    try
    {
      // Usar inventario
      jugador->mostrarInventario();
      int idObjetoInventario;
      cout << "Ingresa ID del objeto del inventario" << endl;
      cin >> idObjetoInventario;
      Auxiliares::utilizarInventario(true, jugador, idObjetoInventario);
    }
    catch (const exception &e)
    {
      cerr << "Error inesperado al intentar usar utilizarInventario() en turnoJugador(): " << e.what() << '\n';
    }
  }
  
};

#endif // SISCOMBATE_H