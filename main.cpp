#include "Librerias.h"
#include <vector>
int main(){
    //Dialogos
    DialogosEnemigos* dialogo = new DialogosEnemigos();
    //AScII
    LibreriaASCII* ascii = new LibreriaASCII();
    //Sistemas
    SisCombateV2* combate = new SisCombateV2();
    SisInventario* inventario = new SisInventario();
    //Inicializacion de enemigos
    Jabali* jabali = new Jabali();
    Lobo* lobo = new Lobo();
    Oso* oso = new Oso();
    Dinosaurio* dinosaurio = new Dinosaurio();
    Esqueleto* esqueleto = new Esqueleto();
    Zombie* zombie = new Zombie();
    Fantasma* fantasma = new Fanstasma();
    Hada* hada = new Hada();
    Grifo* grifo = new Grifo();
    
    //Vista al menu del juego
    ascii->imprimir_menu_juego_1();
    ascii->imprimir_menu_juego_2();
    ascii->imprimir_menu_juego_3();
    
    //Narrativa parte 1
    dialogo->Narrativa_1();
    ascii->transicion(12);
    dialogo->Narrativa_2();
    ascii->transicion(6);

    //Peppa y Dino
    dialogo->Peppa_1_1();
    ascii->transicion(5);
    dialogo->Jugador_1_1();
    ascii->transicion(5);
    dialogo->Peppa_1_2();
    ascii->transicion(5);
    dialogo->Jugador_1_2();
    ascii->transicion(5);

    //Seleccion de clases
    switch(dialogo->Escoger_clase()){
        case 1:{
            Espadachin* espadachin = new Espadachin();            
            break;
        }
        case 2:{
            Berserker* berserker = new Berserker();
            break;
        }
        case 3:{
            Mago* mago = new Mago();
            break;
        }
        case 4:{
            Sacerdote* sacerdote = new Sacerdote();
            break;
        }
        case 5:{
            Ladron* ladron = new Ladron(); 
            break;
        }
        case 6:{
            Arquero* arquero = new Arquero();
            break;
        }
    }


    //Narrativa parte 2
    dialogo->Narrativa_3();
    ascii->transicion(7);
    dialogo->Narrativa_4();
    ascii->transicion(7);
    dialogo->Narrativa_5();
    ascii->transicion(5);

    if(int a){
        //Oso y Dino
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
    }else if(int b){
        combate->init_Combate();

        switch(int tipo_arma){
            case 1:{
                //Arco
                ascii->imprimir_oso_arco();
                break;
            }
            case 2:{
                //Baston
                ascii->imprimir_oso_baston();
                break;
            }
            case 3:{
                //Hacha
                ascii->imprimir_oso_hacha();
                break;
            }
            case 4:{
                //Espada_1
                ascii->imprimir_oso_espada_1();
                break;
            }
            case: 5{
                //Espada_2
                ascii->imprimir_oso_espada_2();
                break;
            }
        }
    }

    //Narrativa parte 3
    dialogo->Narrativa_6();
    ascii->transicion(7);
    dialogo->Narrativa_7();
    ascii->transicion(10);

    if(int a){
        //Grifo y Dino
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
    }else if(int b){
        combate->init_Combate();

        switch(int tipo_arma){
            case 1:{
                //Arco
                ascii->imprimir_grifo_arco();
                break;
            }
            case 2:{
                //Baston
                ascii->imprimir_grifo_baston();
                break;
            }
            case 3:{
                //Hacha
                ascii->imprimir_grifo_hacha();
                break;
            }
            case 4:{
                //Espada_1
                ascii->imprimir_grifo_espada_1();
                break;
            }
            case: 5{
                //Espada_2
                ascii->imprimir_grifo_espada_2();
                break;
            }
        }
    }
    
    //Narrativa parte 4
    dialogo->Narrativa_8();
    ascii->transicion(7);

    if(int a){
        //Dinosaurio y Dino
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
    }else if(int b){
        combate->init_Combate();

        switch(int tipo_arma){
            case 1:{
                //Arco
                ascii->imprimir_dinosaurio_arco();
                break;
            }
            case 2:{
                //Baston
                ascii->imprimir_dinosaurio_baston();
                break;
            }
            case 3:{
                //Hacha
                ascii->imprimir_dinosaurio_hacha();
                break;
            }
            case 4:{
                //Espada_1
                ascii->imprimir_dinosaurio_espada_1();
                break;
            }
            case: 5{
                //Espada_2
                ascii->imprimir_dinosaurio_espada_2();
                break;
            }
        }
    }
    
    //Narrativa parte 5
    dialogo->Narrativa_9();
    ascii->transicion(4);

    if(int a){
        //Hada y Dino
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
    }else if(int b){
        combate->init_Combate();

        switch(int tipo_arma){
            case 1:{
                //Arco
                ascii->imprimir_hada_arco();
                break;
            }
            case 2:{
                //Baston
                ascii->imprimir_hada_baston();
                break;
            }
            case 3:{
                //Hacha
                ascii->imprimir_hada_hacha();
                break;
            }
            case 4:{
                //Espada_1
                ascii->imprimir_hada_espada_1();
                break;
            }
            case: 5{
                //Espada_2
                ascii->imprimir_hada_espada_2();
                break;
            }
        }
    }
    
    //Narrativa parte 6
    dialogo->Narrativa_10();
    ascii->transicion(12);
    dialogo->Narrativa_11();
    ascii->transicion(3);

    if(int a){
        //Zombie y Dino
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
    }else if(int b){
        combate->init_Combate();

        switch(int tipo_arma){
            case 1:{
                //Arco
                ascii->imprimir_zombie_arco();
                break;
            }
            case 2:{
                //Baston
                ascii->imprimir_zombie_baston();
                break;
            }
            case 3:{
                //Hacha
                ascii->imprimir_zombie_hacha();
                break;
            }
            case 4:{
                //Espada_1
                ascii->imprimir_zombie_espada_1();
                break;
            }
            case: 5{
                //Espada_2
                ascii->imprimir_zombie_espada_2();
                break;
            }
        }
    }
    
    //Narrativa parte 7
    dialogo->Narrativa_12();
    ascii->transicion(9);
    dialogo->Narrativa_13();
    ascii->transicion(4);

    if(int a){
        //Lobo y Dino
        dialogo->Lobo_1_1();
        ascii->transicion(4);
        dialogo->Jugador_7_1();
        ascii->transicion(3);
        dialogo->Lobo_1_2();
        ascii->transicion(4);
        dialogo->Jugador_7_2();
        ascii->transicion(4);
    }else if(int b){
        combate->init_Combate();

        switch(int tipo_arma){
            case 1:{
                //Arco
                ascii->imprimir_lobo_arco();
                break;
            }
            case 2:{
                //Baston
                ascii->imprimir_lobo_baston();
                break;
            }
            case 3:{
                //Hacha
                ascii->imprimir_lobo_hacha();
                break;
            }
            case 4:{
                //Espada_1
                ascii->imprimir_lobo_espada_1();
                break;
            }
            case: 5{
                //Espada_2
                ascii->imprimir_lobo_espada_2();
                break;
            }
        }
    }
    
    //Narrativa parte 8
    dialogo->Narrativa_14();
    ascii->transicion(12);
    dialogo->Narrativa_15();
    ascii->transicion(9);
    
    if(int a){
        //Esqueleto y Dino
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
    }else if(int b){
        combate->init_Combate();

        switch(int tipo_arma){
            case 1:{
                //Arco
                ascii->imprimir_esqueleto_arco();
                break;
            }
            case 2:{
                //Baston
                ascii->imprimir_esqueleto_baston();
                break;
            }
            case 3:{
                //Hacha
                ascii->imprimir_esqueleto_hacha();
                break;
            }
            case 4:{
                //Espada_1
                ascii->imprimir_esqueleto_espada_1();
                break;
            }
            case: 5{
                //Espada_2
                ascii->imprimir_esqueleto_espada_2();
                break;
            }
        }
    }
    
    //Narrativa parte 9
    dialogo->Narrativa_16();
    ascii->transicion(15);
    
    if(int a){
        //Fantasma y Dino
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
    }else if(int b){
        combate->init_Combate();

        switch(int tipo_arma){
            case 1:{
                //Arco
                ascii->imprimir_fantasma_arco();
                break;
            }
            case 2:{
                //Baston
                ascii->imprimir_fantasma_baston();
                break;
            }
            case 3:{
                //Hacha
                ascii->imprimir_fantasma_hacha();
                break;
            }
            case 4:{
                //Espada_1
                ascii->imprimir_fantasma_espada_1();
                break;
            }
            case: 5{
                //Espada_2
                ascii->imprimir_fantasma_espada_2();
                break;
            }
        }
    }
    
    //Narrativa parte 10
    dialogo->Narrativa_17();
    ascii->transicion(14);
    dialogo->Narrativa_18();
    ascii->transicion(11);

    //Peppa Forma Final y Dino
    dialogo->Jugador_10_1();
    ascii->transicion(4);
    dialogo->Peppa_2_1();
    ascii->transicion(5);

    //Inicia Combate con Peppa
    combate->init_Combate();

    switch(int tipo_arma){
        case 1:{
            //Arco
            ascii->imprimir_grifo_arco();
            break;
        }
        case 2:{
            //Baston
            ascii->imprimir_grifo_baston();
            break;
        }
        case 3:{
            //Hacha
            ascii->imprimir_grifo_hacha();
            break;
        }
        case 4:{
            //Espada_1
            ascii->imprimir_grifo_espada_1();
            break;
        }
        case: 5{
            //Espada_2
            ascii->imprimir_grifo_espada_2();
            break;
        }
    }

    //Narrativa parte final
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

    return 0;
}