#include <iostream>
#include <string>
using namespace std;
int main() {
  //Experiencia requerida para subir al siguiente nivel. (del 2 al 20.)
  int nivelExperiencia[20] = {
    8,16, 39, 105, 231, 441, 759, 1209,1815, 2601, 3591,
  4809, 6279, 8025, 10071, 12441, 15159, 18249, 21735,25641};

  //Experiencia actual.
  int m_exp = 0;
  //nivel del jugador.
  int m_nivel = 1;

  //Loop hasta que jugador no sea nivel 20.
  //ALTERNATIVO:
  if (m_nivel<20)
  {
    int expGanada;
    m_exp += expGanada;

  }
  
  if (m_exp<=nivelExperiencia[20])
  {
    m_exp=nivelExperiencia[20];
    
  }
  
  // m_exp >= nivelExperiencia[m_nivel - 1]
  while (m_nivel < 20) {
    //define la exp ganada y sumala al jugador.
    int expGanada;
    //Return resultado de combate si fue victoria.

    

    // Update player experience
    m_exp += expGanada;

    // Check if level up is required
    while (m_exp >= nivelExperiencia[m_nivel - 1]) {
      m_nivel++;
      std::cout << "Congratulations! You are now level " << m_nivel << std::endl;

      // Optionally, reset experience for the new level
      // m_exp -= nivelExperiencia[m_nivel - 1];
    }
  }



  return 0;
}
