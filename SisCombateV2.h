#ifndef SISCOMBATE_H
#define SISCOMBATE_H
#include "SisInventario.h"
#include "Auxiliares.h"
#include "JugadorV2.h"
#include "EnemigosV2.h"
#include "Interfaz.h"
#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <random>
#include <ctime>
#include <memory>
#include "ascii/Imprimir_ASCII.h"

using namespace std;

// NOTA: metodos ordenados de manera alfabetica, excepto init_Combate(), está al inicio e iniciliza el combate.
class SisCombateV2
{
public:
  // Valores inicializadores.
  JugadorV2 objJugador;
  EnemigosV2 objEnemigo;

  unique_ptr<PersonajeV2> &jugador;
  unique_ptr<PersonajeV2> &enemigo;
  int llaveInventarioGlobal;
  SisCombateV2(unique_ptr<PersonajeV2> &unique_jugador,
               unique_ptr<PersonajeV2> &unique_enemigo) : jugador(unique_jugador), enemigo(unique_enemigo) {}
  // Fin de valores inicializadores.
  /*Calcula la posible estamina usada por cada ataque.*/
  // Ejecuta el combate en un while jugador y enemigo siguen vivos.
  void mostrar_ascii(string nombre)
  {
    Imprimir_ASCII imp;
    vector<string> nombres = {"Peppa","Pedro el lobo", "Oso maloso", "Dino Dani", "Huesos", "Zombie?","Vincent", "Lucero", "Lorenzo el Grifo"};
    int switchCase;
    for (size_t i = 0; i < nombres.size(); i++)
    {
      if (nombre == nombres[i])
      {
        switchCase = i;
        break;
      }
    }
    switch (switchCase)
    {
    case 2:
      switch (llaveInventarioGlobal)
      {
      case 1:
        cout << "Garra aplicada";
        break;
      case 2:
        imp.imprimirArchivo(" ascii/lobo/lobo_espada_1.txt");
        break;
      case 3:
        imp.imprimirArchivo(" ascii/lobo/lobo_espada_2.txt");
        break;
      case 4:
        imp.imprimirArchivo(" ascii/lobo/lobo_arco.txt");
        break;
      case 5:
        imp.imprimirArchivo(" ascii/lobo/lobo_hacha.txt");
        break;
      case 6:
        imp.imprimirArchivo(" ascii/lobo/lobo_baston.txt");
        break;
      default:
        cout << "Hada: Con que pelearas con tus garra eh." << endl;
        break;
      }
      break;
    case 3: // oso maloso
      switch (llaveInventarioGlobal)
      {
      case 1:
        cout << "Garra aplicada";
        break;
      case 2:
        imp.imprimirArchivo("ascii/oso/oso_espada_1.txt");
        break;
      case 3:
        imp.imprimirArchivo("ascii/oso/oso_espada_2.txt");
        break;
      case 4:
        imp.imprimirArchivo("ascii/oso/oso_arco.txt");
        break;
      case 5:
        imp.imprimirArchivo("ascii/oso/oso_hacha.txt");
        break;
      case 6:
        imp.imprimirArchivo("ascii/oso/oso_baston.txt");

        break;
      default:
        cout << "definitivamente " << jugador->getNombre() << "esta usando sus garras." << endl;
        break;
      }
      break;
    case 4:
      switch (llaveInventarioGlobal)
      {
      case 1:
        imp.imprimirArchivo("ascii/dinosaurio/dinosaurio_espada_1.txt");
        break;
      case 2:
        imp.imprimirArchivo("ascii/dinosaurio/dinosaurio_espada_2.txt");
        break;
      case 3:
        imp.imprimirArchivo("ascii/dinosaurio/dinosaurio_arco.txt");
        break;
      case 4:
        imp.imprimirArchivo("ascii/dinosaurio/dinosaurio_hacha.txt");
        break;
      case 5:
        imp.imprimirArchivo("ascii/dinosaurio/dinosaurio_baston.txt");
        break;
      default:
        cout << "Dani: Wow, okay, admiro que solo vengas con tus garras, pero yo no.";
        break;
      }
      break;

    case 5:
      switch (llaveInventarioGlobal)
      {
      case 1:
        cout << "Garra aplicada";
        break;
      case 2:
        imp.imprimirArchivo(" ascii/esqueleto/esqueleto_espada_1.txt");
        break;
      case 3:
        imp.imprimirArchivo(" ascii/esqueleto/esqueleto_espada_2.txt");
        break;
      case 4:
        imp.imprimirArchivo(" ascii/esqueleto/esqueleto_arco.txt");
        break;
      case 5:
        imp.imprimirArchivo(" ascii/esqueleto/esqueleto_hacha.txt");
        break;
      case 6:
        imp.imprimirArchivo(" ascii/esqueleto/esqueleto_baston.txt");
        break;
      default:
        cout << "Hada: Con que pelearas con tus garra eh." << endl;
        break;
      }
      break;
    case 6:
      switch (llaveInventarioGlobal)
      {
      case 1:
        cout << "Garra aplicada";
        break;
      case 2:
        imp.imprimirArchivo(" ascii/zombie/zombie_espada_1.txt");
        break;
      case 3:
        imp.imprimirArchivo(" ascii/zombie/zombie_espada_2.txt");
        break;
      case 4:
        imp.imprimirArchivo(" ascii/zombie/zombie_arco.txt");
        break;
      case 5:
        imp.imprimirArchivo(" ascii/zombie/zombie_hacha.txt");
        break;
      case 6:
        imp.imprimirArchivo(" ascii/zombie/zombie_baston.txt");
        break;
      default:
        cout << "Hada: Con que pelearas con tus garra eh." << endl;
        break;
      }
      break;
      case 7:
      switch (llaveInventarioGlobal)
      {
      case 1:
          cout << "Garra aplicada";
        break;
      case 2:
        imp.imprimirArchivo(" ascii/fantasma/fantasma_espada_1.txt");
        break;
      case 3:
        imp.imprimirArchivo(" ascii/fantasma/fantasma_espada_2.txt");
        break;
      case 4:
        imp.imprimirArchivo(" ascii/fantasma/fantasma_arco.txt");
        break;
      case 5:
        imp.imprimirArchivo(" ascii/fantasma/fantasma_hacha.txt");
        break;
      case 6:
        imp.imprimirArchivo(" ascii/fantasma/fantasma_baston.txt");
        break;
      default:
        cout<<"Hada: Con que pelearas con tus garra eh."<<endl;
        break;
      }
      break;
    case 8:
      switch (llaveInventarioGlobal)
      {
      case 1:
        cout << "Garra aplicada";
        break;
      case 2:
        imp.imprimirArchivo(" ascii/hada/hada_espada_1.txt");
        break;
      case 3:
        imp.imprimirArchivo(" ascii/hada/hada_espada_2.txt");
        break;
      case 4:
        imp.imprimirArchivo(" ascii/hada/hada_arco.txt");
        break;
      case 5:
        imp.imprimirArchivo(" ascii/hada/hada_hacha.txt");
        break;
      case 6:
        imp.imprimirArchivo(" ascii/hada/hada_baston.txt");
        break;
      default:
        cout << "Hada: Con que pelearas con tus garra eh." << endl;
        break;
      }
      break;
    case 9:
      switch (llaveInventarioGlobal)
      {
      case 1:
        cout << "Garra aplicada";
        break;
      case 2:
        imp.imprimirArchivo(" ascii/grifo/grifo_espada_1.txt");
        break;
      case 3:
        imp.imprimirArchivo(" ascii/grifo/grifo_espada_2.txt");
        break;
      case 4:
        imp.imprimirArchivo(" ascii/grifo/grifo_arco.txt");
        break;
      case 5:
        imp.imprimirArchivo(" ascii/grifo/grifo_hacha.txt");
        break;
      case 6:
        imp.imprimirArchivo(" ascii/grifo/grifo_baston.txt");
        break;
      default:
        cout << "Lorenzo: veo que solo traes tus garras" << endl;
        break;
      }
      break;
    default:
      break;
    }
  }
  void init_Combate()
  {
    cout << "COMBATE!!" << endl;
    string mensaje_encuentro = enemigo->getNombre() + " quiere pelear!!";
    cout << mensaje_encuentro << endl;

    // Guarda los valores  inicales de enemigo. (sisEvees)

    double vidaInit = enemigo->getTempVida();

    double stamInit = enemigo->getTempStamina();

    // Agrega inventario al enemigo.
    Auxiliares::agregarInventarioEnemigo(enemigo);

    // Guarda los valores iniciales de jugador antes de combate. (sisEvees)

    // Iniciar el combate.
    while (jugador->getVida() >= 0 || enemigo->getVida() >= 0)
    {
      // Ambos siguen vivos.
      if (jugador->getVida() >= 0 && enemigo->getVida() >= 0)
      {
        cout << "\n"
             << endl;
        turnoJugador(jugador, enemigo);
        cout << "\n"
             << endl;
        turnoEnemigo(vidaInit, stamInit);
      }

      // Alguno de los dos está muerto, no tiene caso volver a atacar.
      else if (jugador->getVida() <= 0 || enemigo->getVida() <= 0)
      {
        break;
      }
      // Mostrar dibujos.
      //  Imprime tu vida y estamina despues de cada golpe.
      mostrar_vida();
      cout << "----------------------" << endl;
    }
    // Sistema de recompensa de evees, restaura valores.
    sisEvees(jugador, enemigo);
  }

  int init_menuCombate(map<int, string> comandos)
  {
    // Prueba esto, tal vez lo quites.
    system("cls");
    int valorSeleccionado;
    valorSeleccionado = 0;
    char tecla;
    cout << "Presiona las teclas de flecha arriba o abajo (Esc para salir):" << endl;

    // Opcion es el valor elegido que es regresado.
    int opcion = 1;
    while (true)
    {
      system("cls");
      mostrar_vida();
      cout << "----------------------" << endl;

      Interfaz::print_Menu(opcion, comandos);
      tecla = _getch(); // Obtener la primera parte del código de la tecla
      if (tecla == 27)
      { // 27 es el código ASCII para Esc
        valorSeleccionado = -1;
        break;
      }
      if (tecla == 13)
      { // 13 es el código ASCII para Enter
        // Activa la accion.
        // Regresa el valor de la llave del mapa con i->first.
        for (auto i = comandos.begin(); i != comandos.end(); ++i)
        {
          if (i->second == comandos.at(opcion))
          {
            valorSeleccionado = i->first;
          }
        }
        break;
      }

      if (tecla == -32) // -32 indica una tecla especial
      {
        tecla = _getch(); // Obtener la segunda parte del código de la tecla
        switch (tecla)
        {
        case 72: // Flecha arriba

          opcion <= 1 ? opcion = comandos.size() : opcion -= 1;

          break;
        case 80: // Flecha abajo

          opcion >= comandos.size() ? opcion = 1 : opcion += 1;

          break;
        default:

          break;
        }
      }
      else
      {
        // NO BORRAR HASTA QUE TERMINE EL DESARROLLO.
        cout << "Otra tecla presionada: " << static_cast<int>(tecla) << endl;
      }
    }
    return valorSeleccionado;
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
    return 1; // Default return llave if no condition is met
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

  // TODO: Quiero agregar mas mensajes en forma de mapa, en vez de metodos, porque creo que hay muchos mensajes dispersos.
  void mensaje_hasMuerto()
  {
    string mensaje_hasMuerto = jugador->getNombre() + " ha Muerto.\nFin del juego.";
    cout << mensaje_hasMuerto << endl;
  }

  // Muestra la vida y la estamina de jugador y enemigo despues de darse de madrasos.
  void mostrar_vida()
  {

    string mensaje_mostrarVida = "vida  -----  ";
    string mensaje_mostrarEstamina = "Estamina ----- ";

    cout << enemigo->getNombre() << endl;
    cout << mensaje_mostrarVida;
    cout << enemigo->getVida() << endl;
    cout << mensaje_mostrarEstamina;
    cout << enemigo->getStamina() << endl;
    cout << "\n"
         << endl;
    cout << jugador->getNombre() << endl;
    cout << mensaje_mostrarVida;
    cout << jugador->getVida() << endl;
    cout << mensaje_mostrarEstamina;
    cout << jugador->getStamina() << endl;
  }

  // Selecciona ataque con un switch, funciona en turnoJugador y turnoEnemigo.
  void selectAtaque(int tipoAtaque, bool turnoJugador)
  {
    string mensaje_Usado = " ha usado ";
    if (turnoJugador)
    {
      // Mensaje de has usado
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
      case 0:
        cout << enemigo->getNombre() << "no tiene estamina para atacar.";
        break;
      default:
        cerr << "no no... en selectAtaque de enemigo (。_。)";
        break;
      }
    }
    else
    {
      // Mensja de enemigo al usar ataque.
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
      case 0:
        cout << enemigo->getNombre() << "no tiene estamina para atacar.";
        break;
      default:
        cerr << "no no... pero en selectAtaque de enemigo (。_。)";
        break;
      }
      // pausa para leer el pinshe mensaje
      sleep_for(chrono::seconds(5));
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
    double factorDeRegeneracion = 0.95;
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
        jugador->setVida(jugador->getTempVida() * factorDeRegeneracion);
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

  // Turno de lanzar ataque de enemigo.
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
    // Calcula la probabilidad de tipo de ataque dependiendo de la vida y stamina.
    if (stamActual >= stamInit * 0.8 && vidaActual >= 0)
    {
      // mayor probabilidad de usar ataque 1.
      tipoAtaque = SisCombateV2::acumuladorAleatorio(prob_AtaqueUno);
    }
    else if (stamActual >= stamInit * 0.6 && vidaActual >= 0)
    {
      tipoAtaque = SisCombateV2::acumuladorAleatorio(prob_AtaqueDos);
    }
    else if (stamActual >= stamInit * 0.5 && vidaActual >= 0)
    {
      tipoAtaque = SisCombateV2::acumuladorAleatorio(prob_AtaqueTres);
    }
    else if (stamActual >= stamInit * 0.4 && vidaActual >= 0)
    {
      tipoAtaque = SisCombateV2::acumuladorAleatorio(prob_AtaqueTres);
    }
    else if (stamActual <= 0 && vidaActual >= 0)
    {
      tipoAtaque = 0;
    }
    else
    {
      tipoAtaque = 4;
    }
    selectAtaque(tipoAtaque, false);
    enemigo->setStamina(enemigo->getStamina() - calcularEstamina(tipoAtaque));
  }
  // Turno de lanzar ataque de Jugador.
  void turnoJugador(unique_ptr<PersonajeV2> &jugador, unique_ptr<PersonajeV2> &enemigo)
  {
    map<int, string> menuOpciones;

    // Jugador sigue vivo?
    if (jugador->getVida() >= 0)
    {
      // Jugador tiene estamina para atacar?
      if (jugador->getStamina() >= 0)
      {
        menuOpciones[1] = "  Atacar";
        menuOpciones[2] = "  Usar inventario";
        // muestra menu de atacar o usar inventario.
        int opciones;
        opciones = init_menuCombate(menuOpciones);
        if (opciones == 1)
        {
          // Crea menu de opciones.
          map<int, string> menuOpciones;
          menuOpciones[1] = "  " + jugador->a_1_ataque();
          menuOpciones[2] = "  " + jugador->a_2_ataque();
          menuOpciones[3] = "  " + jugador->a_3_ataque();
          menuOpciones[4] = "  " + jugador->a_4_ataque();
          int tipoAtaque;
          // Menú para seleccionar el ataque
          string msj_eligeUnAtaque = "Elige un ataque: ";
          tipoAtaque = Interfaz::init_menu(false, msj_eligeUnAtaque, menuOpciones);
          // Calcula la estamina usada por cada ataque
          jugador->getStamina() >= 0 ? jugador->setStamina(jugador->getStamina() - calcularEstamina(tipoAtaque))
                                     : jugador->setStamina(0);
          // Seleccionar ataque
          cout << "\n"
               << endl;
          selectAtaque(tipoAtaque, true);
        }
        else
        {
          usarInventarioEnCombate();
        }
      }
      // Jugador NO tiene estamina,
      else
      {
        int opciones;
        cout << "Estamina insuficiente, No puedes atacar!";
        menuOpciones[1] = "  Regresar";
        menuOpciones[2] = "  Usar inventario";
        opciones = init_menuCombate(menuOpciones);

        if (opciones == 1)
        {
          cout << jugador->getNombre() << " no hace nada" << endl;
        }
        else if (opciones == 2)
        {
          usarInventarioEnCombate();
        }
        else
        {
          cerr << "Opcion INVALIDA. Selecciona 1 para atacar o 2 para usar el inventario." << endl;
        }
      }
    }
    // Jugador NO tiene vida.
    else
    {
      mensaje_hasMuerto();
    }
  };

  // Permite usar el inventario dentro de combate.
  void usarInventarioEnCombate()
  {

    // NOTA: no se guarda en vector<int> porque me arroja una referencia.
    // Se resta 1 porque queremos la posicion del vector<string>
    int posicionLLave = Auxiliares::init_menuInventario(jugador) - 1;

    string llaveActual = jugador->IDsOpcionesMenuInventario.at(posicionLLave);
    int llave = stoi(llaveActual);
    llaveInventarioGlobal = llave;
    Auxiliares::utilizarInventario(jugador, llave, posicionLLave); // 4

    // casos:es garra, equipar, es potenciador,
    /*true true, true false,false false*/

    // si solo hay un objeto y es garra. Equipar garra.
  }
};

#endif // SISCOMBATE_H
