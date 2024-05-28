//archivo:LibreriaAscii
//autor: Daniel Emiliano Lopez Aguilar
// fecha: 5/27/2024
/* descripción: 
* Libreria que contiene funciones y string[] para el manejo de dibujos ASCII.
*/
// ejercicio #

#include <iostream>
#include <vector>
#include <string> 
#include <locale>
using namespace std;

class Libreria
{
protected:
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



int main(int argc, char const *argv[])
{
  //Codificacion en la terminal para que sean visibles los caracteres.
  // setlocale(LC_ALL, "en_US.UTF-8"); 
    //dino1.
const string dinosaurio1[]={ 
  " dino1",
  "██████████████████",
"████▒▒▒▒▒▒▒▒▒▒▒▒▒░░██",
"██▓▓▓▓▒▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░▓▓",
"██░░░░▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░████",
"██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██",
"██░░▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██",
"██░░████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██",
"██░░▒▒██▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░██",
"██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██",
"  ██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░██",
"  ██░░░░░░░░░░░░░░░░░░░░░░░░░░░░████████",
"  ██░░░░░░░░░░░░░░░░░░░░░░▓▓▓▓▒▒░░██",
"  ██░░░░░░░░░░████░░░░░░████▒▒░░▒▒██",
"  ██░░██░░░░░░██░░██████▒▒ ▒▒▒▒▒▒██",
"  ██░░██░░░░░░██░░░░▓▓░░▒▒▒▒▒▒▒▒▒▒██",
"  ██░░░░░░████░░██░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▓▓",
"  ██░░░░░░░░██░░██░░▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ ██",
"  ██░░░░░░░░░░██░░██▒▒ ▒▒▒▒▒▒▒▒▒▒▒▒▒▒██",
" ██░░░░░░░░░░░░░░██░░██▓▓▒▒░░▒▒▒▒▒▒▒▒▒▒░░██",
" ██░░░░░░░░░░░░░░░░██░░░░████▒▒░░▒▒ ▒▒████",
" ██░░░░░░░░░░░░░░░░░░████░░░░██████████░░██     ██   ",
"██░░░░░░░░░░░░░░░░░░░░▒▒▒▒████░░░░░░░░░░░░██         ████  ",
"██░░░░░░░░░░░░░░░░░░░░░░▒▒██ ████████████          ██░░██",
"██░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒██                ██░░██",
"  ██▓▓██▓▓░░░░░░░░░░██████░░░░▒▒▒▒▒▒▓▓               ██░░██",
" ██░░░░░░░░░░░░░░░░██░░░░░░░░░░░░▒▒▒▒▒▒██             ██░░░░██",
" ██░░██████░░░░░░██░░░░████░░░░░░░░▒▒▒▒▒▒████           ██░░██  ",
" ████ ██░░░░░░░░██░░██░░░░░░░░░░░░▒▒▒▒▒▒▒▒▓▓▓▓         ▓▓░░░░██  ",};

//dino2.
 // Define character arrays for each line of the ASCII art
  const char* line1 = "██████████████";
  const char* line2 = "████░░████████████";
  const char* line3 = "██████████████████";
  const char* line4 = "██████████████████";
  const char* line5 = "██████████████████";
  const char* line6 = "████████      ";
  const char* line7 = "██████████████░░  ";
  const char* line8 = "██████       ";
  const char* line9 = " ██       ██████████       ";
  const char* line10 = " ██▒▒    ▒▒▒▒██████████▒▒▒▒     ";
  const char* line11 = " ████▓▓   ██████████████ ▒▒     ";
  const char* line12 = " ██████▒▒▒▒████████████████       ";
  const char* line13 = " ██████████████████████████       ";
  const char* line14 = "  ██████████████████████        ";
  const char* line15 = "    ██████████████████        ";
  const char* line16 = "    ▒▒██████████████         ";
  const char* line17 = "     ▒▒██████▒▒██▓▓         ";
  const char* line18 = "      ████   ▓▓         ";
  const char* line19 = "      ██▒▒   ▓▓         ";
  const char* line20 = "      ██    ██         ";

  
  
  return 0;
}
