#ifndef EXPJUGADOR_H
#define EXPJUGADOR_H
#include <iostream>
#include <string>
using namespace std;

class ExpJugador
{
private:
//Metodo PROVISIONAL, imprime los mensajes en ASCII
  static void imprimirASCII(const string* array, size_t tamano) {
    for (size_t i = 0; i < tamano; ++i) {
      cout << array[i] << endl;
    }
  }

  string mensajeNuevoNivel[6] = {
  " _   _                               _           _         _                              _       ",
  "| \ | |                             (_)         | |       | |                            | |      ",
  "|  \| |_   _  _____   _____    _ __  ___   _____| |   __ _| | ___ __ _ _ __  ______ _  __| | ___  ",
  "| . ` | | | |/ _ \ \ / / _ \  | '_ \| \ \ / / _ \ |  / _` | |/ __/ _` | '_ \|_  / _` |/ _` |/ _ \ ",
  "| |\  | |_| |  __/\ V / (_) | | | | | |\ V /  __/ | | (_| | | (_| (_| | | | |/ / (_| | (_| | (_) |",
  "\_| \_/\__,_|\___| \_/ \___/  |_| |_|_| \_/ \___|_|  \__,_|_|\___\__,_|_| |_/___\__,_|\__,_|\___/"
};
  static int tamanoArreglo(long int arreglo[]){return  sizeof(arreglo)/sizeof(arreglo[0]);}
  static int tamanoArreglo(string arreglo[]){return  sizeof(arreglo)/sizeof(arreglo[0]);}

  

  // Experiencia requerida para subir al siguiente nivel. (del 2 al 20.)
  long int nivelesExperiencia[20] = {
      8, 16, 39, 105, 231, 441, 759, 1209, 1815, 2601, 3591,
      4809, 6279, 8025, 10071, 12441, 15159, 18249, 21735, 25641};

  //longitud de array nivelesExperiencia.
  int expLongitud = sizeof(nivelesExperiencia) / sizeof(nivelesExperiencia[0]);

  // Experiencia actual.
  long int m_exp = 0;

  // nivel del jugador.
  long int m_nivel = 1;

  void subirDeNivel()
  {
    if (m_nivel < tamanoArreglo(nivelesExperiencia))
    {
      cout << "Exp: " << getExp() << endl;
      cout << "Nivel: " << getNivel() << endl;
      if (m_exp >= nivelesExperiencia[m_nivel - 1])
      {
        m_nivel++;
        imprimirASCII(mensajeNuevoNivel, tamanoArreglo(mensajeNuevoNivel));
        cout << "Nuevo Nivel Alcanzado: " << "Eres nivel " << getNivel() << endl;
      }
    }
  }

public:
  
  
  int getExp( ){return m_exp; }

  int getNivel() const{return m_nivel;}

  long int calcularExperiencia(int expGanada)
  {
    cout<<"Exp ganada: "<<expGanada<<endl;
    m_exp += expGanada;

    subirDeNivel();
    // Revisa si se llegó al nivel máximo.
    m_exp >= nivelesExperiencia[tamanoArreglo(nivelesExperiencia) - 1]?
     m_exp = nivelesExperiencia[tamanoArreglo(nivelesExperiencia) - 1]: m_exp;
    return m_exp;
  }
  // Metodo aplicado si se sube de nivel.
  
};

#endif // EXPJUGADOR_H