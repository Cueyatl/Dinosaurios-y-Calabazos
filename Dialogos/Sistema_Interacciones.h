#include "Dialogos/Dialogos_Jugador/Dialogo_Jugador_Lorenzo.h"
#include "Dialogos/Dialogos_Jugador/Dialogo_Jugador_Osomaloso.h"
#include "Dialogos/Dialogos_Jugador/Dialogo_Jugador_Pedro.h"
#include "Dialogos/Dialogos_Jugador/Dialogo_Jugador_Peppa.h"
#include "Dialogos/Dialogos_Jugador/Dialogo_Jugador_Roberto.h"
#include "Dialogos/Dialogos_NPC/Dialogo_Lorenzo.h"
#include "Dialogos/Dialogos_NPC/Dialogo_Osomaloso.h"
#include "Dialogos/Dialogos_NPC/Dialogo_Pedro.h"
#include "Dialogos/Dialogos_NPC/Dialogo_Peppa.h"
#include "Dialogos/Dialogos_NPC/Dialogo_Roberto.h"
#include "Sistema_Karma.h"
#include <vector>
class SistemaInteracciones{
    public:
        SistemaKarma* sisKarma = new SistemaKarma();
        void escena_1_PeppaInteraccion(double karma){
            DialogoJugadorPeppaEscenario1* jugador = new DialogoJugadorPeppaEscenario1();
            DialogoPeppaEscenario1* npc = new DialogoPeppaEscenario1();
            int desicion;
            cout<<"Desea Dialogar(1) o Luchar(2)"<<endl;
            cin>>desicion;
            switch (desicion){
                case 1:{
                    if(karma>0){
                        npc->peppaDialogoBueno_A1();
                        jugador->jugadorDialogoBueno_Peppa_A1();
                        npc->peppaDialogoBueno_B1();
                        jugador->jugadorDialogoBueno_Peppa_B1();
                        sisKarma->setKarma(5);
                    }else if(karma<0){
                        npc->peppaDialogoMalo_A1();
                        jugador->jugadorDialogoMalo_Peppa_A1();
                        npc->peppaDialogoMalo_B1();
                        jugador->jugadorDialogoMalo_Peppa_B1();
                        npc->peppaDialogoMalo_C1();
                        sisKarma->setKarma(-5);
                        //Inicia una batalla.
                    }
                    break;
                }
                case 2:{
                    sisKarma->setKarma(-5);
                    //Combate
                    break;
                }
                default:{        
                    break;
                }
            }
        }
        void escena_1_LorenzoInteraccion(double karma){
            DialogoJugadorLorenzoEscenario1* jugador = new DialogoJugadorLorenzoEscenario1();
            DialogoLorenzoEscenario1* npc = new DialogoLorenzoEscenario1();
            int desicion;
            cout<<"Desea Dialogar(1) o Luchar(2)"<<endl;
            cin>>desicion;
            switch (desicion){
                case 1:{
                    if(karma>0){
                        npc->lorenzoDialogoBueno_A1();
                        jugador->jugadorDialogoBueno_Lorenzo_A1();
                        npc->lorenzoDialogoBueno_B1();
                        jugador->jugadorDialogoBueno_Lorenzo_B1();
                        npc->lorenzoDialogoBueno_C1();
                        jugador->jugadorDialogoBueno_Lorenzo_C1();
                        npc->lorenzoDialogoBueno_D1();
                        jugador->jugadorDialogoBueno_Lorenzo_D1();
                        sisKarma->setKarma(5);
                    }else if(karma<0){
                        npc->lorenzoDialogoMalo_A1();
                        jugador->jugadorDialogoMalo_Lorenzo_A1();
                        npc->lorenzoDialogoMalo_B1();
                        jugador->jugadorDialogoMalo_Lorenzo_B1();
                        npc->lorenzoDialogoMalo_C1();
                        jugador->jugadorDialogoMalo_Lorenzo_C1();
                        npc->lorenzoDialogoMalo_D1();
                        jugador->jugadorDialogoMalo_Lorenzo_D1();
                        npc->lorenzoDialogoMalo_E1();
                        sisKarma->setKarma(-5);
                        //Inicia una batalla.
                    }
                    break;
                } 
                case 2:{
                    sisKarma->setKarma(-5);
                    //Combate.
                    break;
                }     
                default:{
                    break;
                }
            }
        }
        void escena_1_OsomalosoInteraccion(double karma){
            DialogoJugadorOsomalosoEscenario1* jugador = new DialogoJugadorOsomalosoEscenario1();
            DialogoOsomalosoEscenario1* npc = new DialogoOsomalosoEscenario1();
            int desicion;
            cout<<"Deseas Dialogar(1) o Luchar(2)"<<endl;
            cin>>desicion;
            switch (desicion){
                case 1:{
                    if(karma>0){
                        jugador->jugadorDialogoBueno_Osomaloso_A1();
                        npc->osomalosoDialogoBueno_A1();
                        jugador->jugadorDialogoBueno_Osomaloso_B1();
                        npc->osomalosoDialogoBueno_B1();
                        jugador->jugadorDialogoBueno_Osomaloso_C1();
                        npc->osomalosoDialogoBueno_C1();
                        jugador->jugadorDialogoBueno_Osomaloso_D1();
                        npc->osomalosoDialogoBueno_D1();
                        sisKarma->setKarma(5);
                    }else if(karma<0){
                        npc->osomalosoDialogoMalo_A1();
                        jugador->jugadorDialogoMalo_Osomaloso_A1();
                        npc->osomalosoDialogoMalo_B1();
                        sisKarma->setKarma(-5);
                        //Inicia una batalla.
                    }
                    break;
                }
                case 2:{
                    sisKarma->setKarma(-5);
                    //Combate.
                    break;
                }
                default:{
                    break;
                }
            }
        }
        void escena_1_RobertoInteraccion(double karma){
            DialogoJugadorRobertoEscenario1* jugador = new DialogoJugadorRobertoEscenario1();
            DialogoRobertoEscenario1* npc = new DialogoRobertoEscenario1();
            int desicion;
            cout<<"Deseas Dialogar(1) o Luchar(2)"<<endl;
            cin>>desicion;
            switch(desicion){
                case 1:{
                    if(karma>0){
                        npc->robertoDialogoBueno_A1();
                        jugador->jugadorDialogoBueno_Roberto_A1();
                        npc->robertoDialogoBueno_B1();
                        jugador->jugadorDialogoBueno_Roberto_B1();
                        npc->robertoDialogoBueno_C1();
                        jugador->jugadorDialogoBueno_Roberto_C1();
                        sisKarma->setKarma(5);
                    }else if(karma<0){
                        jugador->jugadorDialogoMalo_Roberto_A1();
                        npc->robertoDialogoMalo_A1();
                        jugador->jugadorDialogoMalo_Roberto_B1();
                        npc->robertoDialogoMalo_B1();
                        jugador->jugadorDialogoMalo_Roberto_C1();
                        npc->robertoDialogoMalo_C1();
                        sisKarma->setKarma(-5);
                        //Inicia una batalla.
                    }
                    break;
                }
                case 2:{
                    sisKarma->setKarma(-5);
                    //Combate.
                    break;
                }
                default:{
                    break;
                }
            }
        }
        void escena_1_PedroInterracion(double karma){
            DialogoJugadorPedroEscenario1* jugador = new DialogoJugadorPedroEscenario1();
            DialogoPedroEscenario1* npc = new DialogoPedroEscenario1();
            int desicion;
            cout<<"Deseas Dialogar(1) o Luchar(2)"<<endl;
            cin>>desicion;
            switch(desicion){
                case 1:{
                    if(karma>0){
                        npc->pedroDialogoBueno_A1();
                        jugador->jugadorDialogoBueno_Pedro_A1();
                        npc->pedroDialogoBueno_B1();
                        jugador->jugadorDialogoBueno_Pedro_B1();
                        sisKarma->setKarma(5);
                    }else if(karma<0){
                        npc->pedroDialogoMalo_A1();
                        jugador->jugadorDialogoMalo_Pedro_A1();
                        npc->pedrotoDialogoMalo_B1();
                        sisKarma->setKarma(-5);
                    }
                    break;
                }
                case 2:{
                    sisKarma->setKarma(-5);
                    //Combate.
                    break;
                }
                default:{
                    break;
                }
            }
        }
};