// #include "SisInventario.h"

#include "JugadorV2.h"
#include "EnemigosV2.h"
#include "Auxiliares.h"
#include <string>
#include <cstdlib>
#include <random>
#include <ctime>
#include <memory>

#include <ctime>
#include <stdexcept>
#include <conio.h>
#include <chrono>
#include <thread>
using namespace std;
using namespace this_thread;


int main()
{
  vector <string> comandos = {"  Charlar", "  Atacar", "  ver inventario", "  Pruebas"};
  system("cls");
  ejecutarOpciones(comandos);
  return 0;
}
