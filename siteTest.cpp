#include "Personaje.h"
int main(int argc, char const *argv[])
{
  vector<ItemInventario> personajeInventario; 
  Personaje personaje("Mariela", 0,10,10,personajeInventario);
  personaje.getNombre();  
  
  return 0;
}

