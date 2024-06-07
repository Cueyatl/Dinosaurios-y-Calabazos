#ifndef EXPJUGADOR_H
#define EXPJUGADOR_H
#include <iostream>
#include <string>
#include <array>
#include "LibreriaAscii.h"
using namespace std;

class ExpJugador
{
private:

  
  string mensajeNuevoNivel[1]={"nuevo nivel"};

  // Experiencia requerida para subir al siguiente nivel. (del 2 al 20.)
  array<long int, 20> nivelesExperiencia={
      8, 16, 39, 105, 231, 441, 759, 1209, 1815, 2601, 3591,
      4809, 6279, 8025, 10071, 12441, 15159, 18249, 21735, 25641};

  // Experiencia actual.
  long int m_exp = 0;

  // nivel del jugador.
  long int m_nivel = 1;

  void subirDeNivel()
  {
    Libreria libreriaAscii;
    if (m_nivel < nivelesExperiencia.size())
    {
      cout << "Exp: " << getExp() << endl;
      cout << "Nivel: " << getNivel() << endl;
      if (m_exp >= nivelesExperiencia[m_nivel - 1])
      {
        m_nivel++;
        libreriaAscii.imprimirASCII(libreriaAscii.mensajeNuevoNivel, 6);
        cout << "Nuevo Nivel Alcanzado: " << "Eres nivel " << endl;
        libreriaAscii.imprimirListasdeNumeros(to_string(getNivel()));
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
    m_exp >= nivelesExperiencia[nivelesExperiencia.size() - 1]?
     m_exp = nivelesExperiencia[nivelesExperiencia.size() - 1]: m_exp;
    return m_exp;
  }
  // Metodo aplicado si se sube de nivel.
  
};

#endif // EXPJUGADOR_H