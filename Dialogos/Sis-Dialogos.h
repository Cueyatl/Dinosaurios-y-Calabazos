#include "Dialogo_Jugador_Jabali.h"
#include "Dialogo_Jabali.h"
#include <vector>
class SistemaDialogos{
    public:
        void escena_1_Jabalidialogo(double karma){
            DialogoJugadorJabaliEscenario1* test1 = new DialogoJugadorJabaliEscenario1();
            DialogosJabaliEscenario1* prueba1 = new DialogosJabaliEscenario1();
            int respuesta;
            if(karma<50){
                test1->jugadorDialogoBueno_J_A1();
                test1->jugadorDialogoBueno_J_A2();
                test1->jugadorDialogoBueno_J_A3();
                test1->jugadorDialogoBueno_J_A4();
                cin>>respuesta;
                switch (respuesta){
                    case 1:{
                        system("cls");
                        prueba1->jabaliDialogoBueno_A1();
                        system("pause");
                        system("cls");
                        test1->jugadorDialogoBueno_J_B1();
                        system("pause");
                        system("cls");
                        prueba1->jabaliDialogoBueno_B1();
                        break;
                    }
                    case 2:{
                        system("cls");
                        prueba1->jabaliDialogoBueno_A2();
                        system("pause");
                        system("cls");
                        test1->jugadorDialogoBueno_J_B2();
                        system("pause");
                        system("cls");
                        prueba1->jabaliDialogoBueno_B2();
                        break;
                    }
                    case 3:{
                        system("cls");
                        prueba1->jabaliDialogoBueno_A3();
                        system("pause");
                        system("cls");
                        test1->jugadorDialogoBueno_J_B3();
                        system("pause");
                        system("cls");
                        prueba1->jabaliDialogoBueno_B3();
                        break;
                    }
                    case 4:{
                        system("cls");
                        prueba1->jabaliDialogoBueno_A4();
                        system("pause");
                        system("cls");
                        test1->jugadorDialogoBueno_J_B4();
                        system("pause");
                        system("cls");
                        prueba1->jabaliDialogoBueno_B4();
                        break;
                    }
                    default:{
                        break;
                    }
                }
            }else if(karma>50){
                test1->jugadorDialogoMalo_J_A1();
                test1->jugadorDialogoMalo_J_A2();
                test1->jugadorDialogoMalo_J_A3();
                test1->jugadorDialogoMalo_J_A4();
                cin>>respuesta;
                switch (respuesta){
                    case 1:{
                        system("cls");
                        prueba1->jabaliDialogoMalo_A1();
                        system("pause");
                        system("cls");
                        test1->jugadorDialogoMalo_J_B1();
                        system("pause");
                        system("cls");
                        prueba1->jabaliDialogoMalo_B1();
                        break;
                    }
                    case 2:{
                        system("cls");
                        prueba1->jabaliDialogoMalo_A2();
                        system("pause");
                        system("cls");
                        test1->jugadorDialogoMalo_J_B2();
                        system("pause");
                        system("cls");
                        prueba1->jabaliDialogoMalo_B2();
                        break;
                    }
                    case 3:{
                        system("cls");
                        prueba1->jabaliDialogoMalo_A3();
                        system("pause");
                        system("cls");
                        test1->jugadorDialogoMalo_J_B3();
                        system("pause");
                        system("cls");
                        prueba1->jabaliDialogoMalo_B3();
                        break;
                    }
                    case 4:{
                        system("cls");
                        prueba1->jabaliDialogoMalo_A4();
                        system("pause");
                        system("cls");
                        test1->jugadorDialogoMalo_J_B4();
                        system("pause");
                        system("cls");
                        prueba1->jabaliDialogoMalo_B4();
                        break;
                    }
                    default:{
                        break;
                    }
                }
            }
        }
};