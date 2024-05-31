#include "PrototipoPersonaje.h"
#include "ExpJugador.h"

#include <iostream>
#include <vector>
#include <string> 
#include <locale>
// archivo: ExecuteTest.cpp a 5/30/2024: TestSite.cpp
// autor: Daniel Emiliano Lopez Aguilar
//  fecha: 5/27/2024
/* descripción:
Este archivo funciona como zona de pruebas para snippets de codigo
 y dudas sobre la POB en C++ con la intencion de no alterar el
 funcionanmiento de los archivos.
*/


class MiClase {
private:
  // Variable string[] protegida
    const static string mensajes[3] = {
    "Mensaje 1",
    "Mensaje 2",
    "Mensaje 3"
  };

  static const size_t tamanoMensajes = sizeof(mensajes) / sizeof(mensajes[0]);

public:
  static void imprimirStringArray() {
    imprimirStringArray(mensajes, tamanoMensajes);
  }

  static void imprimirStringArray(const string* array, size_t tamano) {
    for (size_t i = 0; i < tamano; ++i) {
      cout << array[i] << endl;
    }
  }
};


class LibTest{
    protected:
        string mensaje[2]={ "united states"," coast guard"};
    public:
      void static imprimirASCII(const string DIBUJO_ASCII[])
  {
    // Imprimir Ascii linea por linea.
    for (size_t i = 1; i < DIBUJO_ASCII->length(); i++)
    {
      cout << DIBUJO_ASCII[i] << endl;
    }
  }
};

class ExpTest{
    private:
    LibTest tests;
    string mensaje[2]={
        "El jugador no tiene experiencia para realizar esta accion",
        "El jugador es un dragon verde azulado sonriente",
    };
    protected:
    public:
    

};
int main()
{
    MiClase::imprimirStringArray();
    
    
    return 0;
    
}
