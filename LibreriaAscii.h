//archivo:LibreriaAscii
//autor: Daniel Emiliano Lopez Aguilar
// fecha: 5/27/2024
/* descripción: 
* Libreria que contiene funciones y string[] para el manejo de dibujos ASCII.
*/
#ifndef LIBRERIAASCII_H
#define LIBRERIAASCII_H



#include <iostream>
#include <vector>
#include <string> 
#include <locale>
using namespace std;

class Libreria
{
protected:
  
public:
Libreria(){
  //sin esta linea, no se ven los dinosaurios. (●__●)
  setlocale(LC_ALL, "en_US.UTF-8");
};
  void static imprimirASCII(const string DIBUJO_ASCII[])
  {
    // Imprimir Ascii linea por linea.
    for (size_t i = 1; i < DIBUJO_ASCII->length(); i++)
    {
      cout << DIBUJO_ASCII[i] << endl;
    }
  }

  void static metodoParaCrearArrayDeStringsPorqueJossMeLosEnviaComoVariablesEnLineaPorLinea(){
    for (size_t i = 1; i < 20; i++)
    {
      cout << "cout<<\"\\\"\"<<" <<"line"<<i<< "<<\"\\\",\"<<endl;" <<endl;
    }
    
  }

};
int main(int argc, char const *argv[])
{
  //sin esta linea, no se ven los dinosaurios. (●__●)
  setlocale(LC_ALL, "en_US.UTF-8");
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

const string dinosaurio2[]={
  "██████████████",
"████░░████████████",
"██████████████████",
"██████████████████",
"██████████████████",
"████████      ",
"██████████████░░  ",
"██████       ",
" ██       ██████████       ",
" ██▒▒    ▒▒▒▒██████████▒▒▒▒     ",
" ████▓▓   ██████████████ ▒▒     ",
" ██████▒▒▒▒████████████████       ",
" ██████████████████████████       ",
"  ██████████████████████        ",
"    ██████████████████        ",
"    ▒▒██████████████         ",
"     ▒▒██████▒▒██▓▓         ",
"      ████   ▓▓         ",
"      ██▒▒   ▓▓         ",};

  return 0;
}

#endif //LIBRERIAASCII_H

