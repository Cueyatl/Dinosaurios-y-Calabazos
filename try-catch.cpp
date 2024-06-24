#include <iostream>
#include <stdexcept> // librería útil para devc
#include <thread>
#include <stdexcept>// librería útil para devc
#include <fstream>
#include <string>
using namespace std;
class App
{
private:
public:

  int testTiempo()
  {
    try
    {
      int n;
      cout << "Escribe cuantos segundos debe esperar: ";
      cin >> n;
      if (cin.fail())
      {
        throw runtime_error("Error: el valor ingresado no es un entero");
      }
      cout << "\nEsperando " << n << " segundos" << endl;
      cout<<"cargando";
      for (size_t i = 0; i < 4; i++)
      {cout<<".";
      this_thread::sleep_for(chrono::seconds(n));
      }
      
      cout << "Tiempo agotado";
      return 0;
    }
    catch (const exception &e)
    {
      cerr << e.what();
      return 1;
    }
  }
  void catchTwo(){
    
    try {
    
		std::ifstream archivo("archivo.txt");
		
		if (!archivo.is_open()){
			throw std::runtime_error("Al abrir el archivo");
      
		} else {
			std::cout << "archivo encontrado!!!!";
		}
		// Manejar el archivo
		
	}catch (const std::runtime_error& e){
		std::cerr << "ERROR: " << e.what();
	}
  }

};

int main(int argc, char const *argv[])
{
  // App app;
  // app.catchTwo();
  // app.testTiempo();
  try
  {

    int resultado, a, b;
    cout << "Escribe dos números para dividirlos:\n";
    cin >> a;
    cin >> b;
    if (b == 0)
    {
      throw logic_error("División por cero");
    }
    resultado = a / b;
    cout << "Resultado: " << resultado;
  }
  catch (const exception &e)
  {

    cerr << "Error fatal: " << e.what();
  }

  return 0;
}