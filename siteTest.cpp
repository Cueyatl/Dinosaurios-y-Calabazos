#include <iostream>
  #include <locale>
using namespace std;


  class Libreria
{
  protected:
  
private:
  const string dino[1];
public:
 
void imprimirASCII(const string DIBUJO_ASCII[]) {
  // Function to print ASCII art
  for (size_t i = 1; i <  DIBUJO_ASCII->length(); i++) {
    cout << DIBUJO_ASCII[i] << endl;
  }
}
  };

