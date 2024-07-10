#include "Librerias.h"

class Main
{

public:

    void ejecutarCombate(unique_ptr<PersonajeV2> &jugador, int claseEnemigo, string nombre)
    {
        EnemigosV2 objEnemigo;
        unique_ptr<PersonajeV2> enemigo = objEnemigo.seleccionarTipoClase(claseEnemigo, nombre);

        try
        {
            // Instancia de sistema de combate v2. params: unique_ptr<PersonajeV2> jugador,unique_ptr<PersonajeV2> enemigo.
            SisCombateV2 combate(jugador, enemigo);
            // //Inicia combate.
            combate.init_Combate();
        }
        catch (const exception &e)
        {
            cerr << "Error: " << e.what() << endl;
        }
    };

    void ejecutaJuego()
    {
        // Dialogos
        DialogosEnemigos *dialogo = new DialogosEnemigos();
        // AScII
        Imprimir_ASCII *ascii = new Imprimir_ASCII();
        // Sistemas
        //  SisCombateV2* combate = new SisCombateV2();
        //  SisInventario* inventario = new SisInventario();
        // INICIALIZACION DE JUGADOR.
        JugadorV2 objJugador;

        // Inicializacion de enemigos

        // Jabali* jabali = new Jabali();
        // Lobo* lobo = new Lobo();
        // Oso* oso = new Oso();
        // Dinosaurio* dinosaurio = new Dinosaurio();
        // Esqueleto* esqueleto = new Esqueleto();
        // Zombie* zombie = new Zombie();
        // Fantasma* fantasma = new Fanstasma();
        // Hada* hada = new Hada();
        // Grifo* grifo = new Grifo();

        // Narrativa parte 1
        dialogo->Narrativa_1();
        ascii->transicion(12);
        dialogo->Narrativa_2();
        ascii->transicion(6);

        // Peppa y Dino
        dialogo->Peppa_1_1();
        ascii->transicion(5);
        dialogo->Jugador_1_1();
        ascii->transicion(5);
        dialogo->Peppa_1_2();
        ascii->transicion(5);
        dialogo->Jugador_1_2();
        ascii->transicion(5);

        // Seleccion de clases
        string mensaje_eligeClase = "Selecciona una clase:";

        map<int, string> eligeClases;
        eligeClases[1] = "  Espadachin";
        eligeClases[2] = "  Berserker";
        eligeClases[3] = "  Mago";
        eligeClases[4] = "  Sacerdote";
        eligeClases[5] = "  Ladron";
        eligeClases[6] = "  Arquero";

        // interfaz elige clases
        int opcionTipoClase = Interfaz::init_menu(false, mensaje_eligeClase, eligeClases);

        cout << "Como te llamas?" << endl;
        cout << "Ingresa tu nombre:" << endl;
        string nombre;
        cin >> nombre;
        //instancia de jugador uwu
        unique_ptr<PersonajeV2> jugador = objJugador.seleccionarTipoClase(opcionTipoClase, nombre);
            jugador->agregarItem(2);
            jugador->agregarItem(3);
            jugador->agregarItem(4);
            jugador->agregarItem(5);
            jugador->agregarItem(6);
            jugador->agregarItem(10);
            jugador->agregarItem(11);
            jugador->agregarItem(11);
            jugador->agregarItem(12);
            jugador->agregarItem(12);
            jugador->agregarItem(13);
            jugador->agregarItem(13);
            
        // Guardando los valores iniciales de jugador par equipar armas y pociones.
        jugador->setTempAtaque(jugador->getAtaque());
        jugador->setTempAgilidad(jugador->getAgilidad());
        jugador->setTempDefensa(jugador->getDefensa());
        jugador->setTempMagia(jugador->getMagia());
        jugador->setTempStamina(jugador->getStamina());
        jugador->setTempVida(jugador->getVida());

        // Narrativa parte 2
        dialogo->Narrativa_3();
        ascii->transicion(7);
        dialogo->Narrativa_4();
        ascii->transicion(7);
        dialogo->Narrativa_5();
        ascii->transicion(5);
        // opcion de interfaz
        string mensaje_eligeOpcion = "Selecciona una opcion: ";

        map<int, string> conversarAtacar;
        conversarAtacar[1] = "  Conversar";
        conversarAtacar[2] = "  Atacar";

        // interfaz elige clases
        system("cls");

        int opcionConversarAtacar = Interfaz::init_menu(false, mensaje_eligeOpcion, conversarAtacar);

        if (opcionConversarAtacar == 1)
        {
            // Oso y Dino
            dialogo->Jugador_2_1();
            ascii->transicion(4);
            dialogo->Oso_1_1();
            ascii->transicion(4);
            dialogo->Jugador_2_2();
            ascii->transicion(4);
            dialogo->Oso_1_2();
            ascii->transicion(4);
            dialogo->Jugador_2_3();
            ascii->transicion(5);
            dialogo->Oso_1_3();
            ascii->transicion(5);
            dialogo->Jugador_2_4();
            ascii->transicion(6);
            dialogo->Oso_1_4();
            ascii->transicion(7);
        }
        else if (opcionConversarAtacar == 2)
        {
            ejecutarCombate(jugador, 3, "Oso maloso");
        }

        // Narrativa parte 3
        dialogo->Narrativa_6();
        ascii->transicion(7);
        dialogo->Narrativa_7();
        ascii->transicion(10);
        int encuentro2 = Interfaz::init_menu(false, mensaje_eligeOpcion, conversarAtacar);

        if (encuentro2 == 1)
        {
            // Grifo y Dino
            dialogo->Grifo_1_1();
            ascii->transicion(3);
            dialogo->Jugador_3_1();
            ascii->transicion(3);
            dialogo->Grifo_1_2();
            ascii->transicion(4);
            dialogo->Jugador_3_2();
            ascii->transicion(4);
            dialogo->Grifo_1_3();
            ascii->transicion(7);
            dialogo->Jugador_3_3();
            ascii->transicion(4);
        }
        else if (encuentro2 == 2)
        {
            ejecutarCombate(jugador, 3, "Lorenzo el Grifo");
        }

        // Narrativa parte 4
        dialogo->Narrativa_8();
        ascii->transicion(7);

        int encuentro3 = Interfaz::init_menu(false, mensaje_eligeOpcion, conversarAtacar);

        if (encuentro3 == 1)
        {
            // Dinosaurio y Dino
            dialogo->Jugador_4_1();
            ascii->transicion(3);
            dialogo->Dinosaurio_1_1();
            ascii->transicion(5);
            dialogo->Jugador_4_2();
            ascii->transicion(4);
            dialogo->Dinosaurio_1_2();
            ascii->transicion(9);
            dialogo->Jugador_4_3();
            ascii->transicion(5);
            dialogo->Dinosaurio_1_3();
            ascii->transicion(6);
            dialogo->Jugador_4_4();
            ascii->transicion(4);
            dialogo->Dinosaurio_1_4();
            ascii->transicion(6);
        }
        else if (encuentro3 == 2)
        {
            ejecutarCombate(jugador, 4, "Dino Dani");
        }

        // Narrativa parte 5
        dialogo->Narrativa_9();
        ascii->transicion(4);

        int encuentro4 = Interfaz::init_menu(false, mensaje_eligeOpcion, conversarAtacar);

        if (encuentro4 == 1)
        {
            // Hada y Dino
            dialogo->Hada_1_1();
            ascii->transicion(6);
            dialogo->Jugador_5_1();
            ascii->transicion(4);
            dialogo->Hada_1_2();
            ascii->transicion(8);
            dialogo->Jugador_5_2();
            ascii->transicion(3);
            dialogo->Hada_1_3();
            ascii->transicion(9);
        }
        else if (encuentro4 == 2)
        {
            ejecutarCombate(jugador, 8, "Lucero");
        }

        // Narrativa parte 6
        dialogo->Narrativa_10();
        ascii->transicion(12);
        dialogo->Narrativa_11();
        ascii->transicion(3);
        int encuentro5 = Interfaz::init_menu(false, mensaje_eligeOpcion, conversarAtacar);

        if (encuentro5 == 1)
        {
            // Zombie y Dino
            dialogo->Zombie_1_1();
            ascii->transicion(4);
            dialogo->Jugador_6_1();
            ascii->transicion(3);
            dialogo->Zombie_1_2();
            ascii->transicion(6);
            dialogo->Jugador_6_2();
            ascii->transicion(4);
            dialogo->Zombie_1_3();
            ascii->transicion(6);
            dialogo->Jugador_6_3();
            ascii->transicion(3);
        }
        else if (encuentro5 == 2)
        {
            ejecutarCombate(jugador, 6, "Zombie?");
        }

        // Narrativa parte 7
        dialogo->Narrativa_12();
        ascii->transicion(9);
        dialogo->Narrativa_13();
        ascii->transicion(4);
        int encuentro6 = Interfaz::init_menu(false, mensaje_eligeOpcion, conversarAtacar);

        if (encuentro6 == 1)
        {
            // Lobo y Dino
            dialogo->Lobo_1_1();
            ascii->transicion(4);
            dialogo->Jugador_7_1();
            ascii->transicion(3);
            dialogo->Lobo_1_2();
            ascii->transicion(4);
            dialogo->Jugador_7_2();
            ascii->transicion(4);
        }
        else if (encuentro6 == 1)
        {
            ejecutarCombate(jugador, 2, "Pedro el lobo");
        }

        // Narrativa parte 8
        dialogo->Narrativa_14();
        ascii->transicion(12);
        dialogo->Narrativa_15();
        ascii->transicion(9);

        int encuentro7 = Interfaz::init_menu(false, mensaje_eligeOpcion, conversarAtacar);
        if (encuentro7 == 1)
        {
            // Esqueleto y Dino
            dialogo->Esqueleto_1_1();
            ascii->transicion(8);
            dialogo->Jugador_8_1();
            ascii->transicion(5);
            dialogo->Esqueleto_1_2();
            ascii->transicion(8);
            dialogo->Jugador_8_2();
            ascii->transicion(3);
            dialogo->Esqueleto_1_3();
            ascii->transicion(4);
        }
        else if (encuentro7== 2)
        {
            ejecutarCombate(jugador, 5, "Huesos");
        }

        // Narrativa parte 9
        dialogo->Narrativa_16();
        ascii->transicion(15);
        int encuentro8 = Interfaz::init_menu(false, mensaje_eligeOpcion, conversarAtacar);

        if (encuentro8 == 1)
        {
            // Fantasma y Dino
            dialogo->Fantasma_1_1();
            ascii->transicion(7);
            dialogo->Jugador_9_1();
            ascii->transicion(4);
            dialogo->Fantasma_1_2();
            ascii->transicion(9);
            dialogo->Jugador_9_2();
            ascii->transicion(4);
            dialogo->Fantasma_1_3();
            ascii->transicion(12);
        }
        else if (encuentro8 == 2)
        {
            ejecutarCombate(jugador, 7, "Vincent");
        }

        // Narrativa parte 10
        dialogo->Narrativa_17();
        ascii->transicion(14);
        dialogo->Narrativa_18();
        ascii->transicion(11);

        // Peppa Forma Final y Dino
        dialogo->Jugador_10_1();
        ascii->transicion(4);
        dialogo->Peppa_2_1();
        ascii->transicion(5);

        // Inicia Combate con Peppa
        ejecutarCombate(jugador, 1, "Peppa");

        // Narrativa parte final
        dialogo->Narrativa_19();
        ascii->transicion(6);
        dialogo->Narrativa_20();
        ascii->transicion(10);
        dialogo->Narrativa_21();
        ascii->transicion(9);
        dialogo->Narrativa_22();
        ascii->transicion(9);
        dialogo->Narrativa_23();
        ascii->transicion(12);
    }
};

int main()
{

    // menu principal del juego
    map<int, string> comandosMenuInit;
    string mensajito_cutre = "                   **Disclaimer:** Pedimos disculpas por cualquier falta de ortografia debido \n";
    string mensajito_cutre2 = "                   a la ausencia de acentos en los textos presentados. Y si, sabemos que a veces \n";
    string mensajito_cutre3 = "                   una palabra sin acento puede tener otro significado, pero aqui estamos en el negocio\n";
    string mensajito_cutre4 = "                   de hacer juegos, no de jugar con palabras. Apreciamos su comprension. \n";
    string mensajito_cutre5 = "                               Atte. El equipo de Dinosaurios y calabozos  \n";
    string espadas = "                                   @xxxx[{::::::::::::::::::::::::::::::::::::::::::::::::>\n";
    cout << mensajito_cutre;

    // this_thread::sleep_for(chrono::seconds(1));
    cout << mensajito_cutre2;
    // this_thread::sleep_for(chrono::seconds(1));
    cout << mensajito_cutre3;
    // this_thread::sleep_for(chrono::seconds(1));
    cout << mensajito_cutre4 << endl;
    // this_thread::sleep_for(chrono::seconds(1));
    cout << espadas;
    cout << mensajito_cutre5;
    cout << espadas;
    // this_thread::sleep_for(chrono::seconds(10));

    system("cls");
    cout<<"Creado por Josseline Abundiz, Alberto Gonzalez y Emiliano Lopez."<<endl;
    string mensaje = "Usa las flechas para navegar, y enter para seleccionar";

    
    Imprimir_ASCII ascii;
    ascii.imprimirArchivo("ascii/alertas/menu_juego_1.txt");

    int initPrograma;
    comandosMenuInit[1] = "i";
    comandosMenuInit[2] = "c";
    comandosMenuInit[3] = "s";
    cout << initPrograma;
    // while loop para el menu principal

    while (initPrograma != 3)
    {
        initPrograma = Interfaz::init_menu(true, mensaje, comandosMenuInit);
        if (initPrograma == 1)
        {   Main main;
            main.ejecutaJuego();
            cout << "inicio el juego" << endl;
            initPrograma = 3;
        }
        else if (initPrograma == 2)
        {

            map<int, string> comandosCreditos;
            string mensaje = "";
            int opcionesCreditos;
            comandosCreditos[1] = "r";
            // Limpia y muestra los creditos papa.
            system("cls");
            Imprimir_ASCII ascii;
            ascii.imprimirArchivo("ascii/alertas/creditos.txt");
            initPrograma = Interfaz::init_menu(true, mensaje, comandosCreditos);
            ascii.imprimirArchivo("ascii/alertas/menu_juego_1.txt");
        }
        else
        {
            // esto es un seguro por si la interfaz no funciona como deberia.
            cout << "saliste del juego mi mai.";
            initPrograma == 3;
        }
    }
}