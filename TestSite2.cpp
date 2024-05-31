// archivo:  TestSite2.cpp
// autor: Daniel Emiliano Lopez Aguilar
//  fecha: 5/30/2024
/* descripción:
Este archivo funciona como zona de pruebas para snippets de codigo
 y dudas sobre la POB en C++ con la intencion de no alterar el
 funcionanmiento de los archivos.
*/
#include <iostream>
#include <vector>
#include <string> 

class MiClase {
protected:
  // Variable string[] protegida, initialized in constructor
  static const std::string* mensajes;
  static  size_t tamanoMensajes;

public:
  MiClase() {
    // Initialize mensajes in the constructor
    mensajes = new const std::string[tamanoMensajes]{
      "Mensaje 1",
      "Mensaje 2",
      "Mensaje 3"
    };
  }

  ~MiClase() {
    // Deallocate memory for mensajes in destructor (if dynamically allocated)
    delete[] mensajes;
  }

  static void imprimirStringArray() {
    imprimirStringArray(mensajes, tamanoMensajes);
  }

  static void imprimirStringArray(const std::string* array, size_t tamano) {
    for (size_t i = 0; i < tamano; ++i) {
      std::cout << array[i] << std::endl;
    }
  }

private:
  // Define tamanoMensajes outside the class (not constant)
  static  size_t tamanoMensajes;
};

// Initialize tamanoMensajes outside the class (constant)
const size_t MiClase::tamanoMensajes = sizeof(MiClase::mensajes) / sizeof(MiClase::mensajes[0]);

// Initialize mensajes pointer in a separate source file (if needed)
const std::string* MiClase::mensajes = nullptr;

int main() {
  // Create an instance of MiClase to initialize mensajes
  MiClase miClase;
  miClase.imprimirStringArray();

  return 0;
}
