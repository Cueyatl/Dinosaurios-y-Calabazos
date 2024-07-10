#include "Librerias.h"

int main()
{
    string mensajito_cutre  = "                   **Disclaimer:** Pedimos disculpas por cualquier falta de ortografia debido \n";
    string mensajito_cutre2 = "                   a la ausencia de acentos en los textos presentados. Y si, sabemos que a veces \n";
    string mensajito_cutre3 = "                   una palabra sin acento puede tener otro significado, pero aqui estamos en el negocio\n";
    string mensajito_cutre4 = "                   de hacer juegos, no de jugar con palabras. Apreciamos su comprension. \n";
    string mensajito_cutre5= "                               Atte. El equipo de Dinosaurios y calabozos  \n";
    string espadas="                                   @xxxx[{::::::::::::::::::::::::::::::::::::::::::::::::>\n";
    cout<<mensajito_cutre;
    
    this_thread::sleep_for(chrono::seconds(1));
    cout<<mensajito_cutre2;
    this_thread::sleep_for(chrono::seconds(1));
    cout<<mensajito_cutre3;
    this_thread::sleep_for(chrono::seconds(1));
    cout<<mensajito_cutre4<<endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout<<espadas;
    cout<<mensajito_cutre5;
    cout<<espadas;
    this_thread::sleep_for(chrono::seconds(10));

  return 0;
}