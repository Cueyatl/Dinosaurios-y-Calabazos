// archivo:Imprimir_ASCII
// autor: Daniel Emiliano Lopez Aguilar
//  fecha: 5/27/2024
/* descripcion:
 * Libreria que contiene funciones y string[] para el manejo de dibujos ASCII.
 */
#ifndef Imprimir_ASCII_H
#define Imprimir_ASCII_H


#include <iostream>
#include <vector>
#include <string>
#include <locale>
#include <map>
#include <cmath>
using namespace std;

class Libreria
{
private:
protected:
public:
  Libreria()
  {
    // sin esta linea, no se ven los dinosaurios. (●__●)
    setlocale(LC_ALL, "en_US.UTF-8");
  };

/*Charmap, variable global  leer archivo binario*/

  string mensajeNuevoNivel[6] = {
  " _   _                               _           _         _                              _       ",
  "| \\ | |                             (_)         | |       | |                            | |      ",
  "|  \\| |_   _  _____   _____    _ __  ___   _____| |   __ _| | ___ __ _ _ __  ______ _  __| | ___  ",
  "| . ` | | | |/ _ \\ \\ / / _ \\  | '_ \\| \\ \\ / / _ \\ |  / _` | |/ __/ _` | '_ \\|_  / _` |/ _` |/ _ \\ ",
  "| |\\  | |_| |  __/\\ V / (_) | | | | | |\\ V /  __/ | | (_| | | (_| (_| | | | |/ / (_| | (_| | (_) |",
  "\\_| \\_/\\__,_|\\___| \\_/ \\___/  |_| |_|_| \\_/ \\___|_|  \\__,_|_|\\___\\__,_|_| |_/___\\__,_|\\__,_|\\___/"
};

const string dinamita[5] = {
    "           ______________________________   ",
    "         /                            / \\     \\ \\ / /               ",
    "         |       Chris Young          |{========= >- -<                ",
    "         \\____________________________\\_/    / / \\ \\               ",
    "                                               . /  | \\ .              "
};

const string glock22[11] = {
    ",--^----------,--------,-----,-------^--,",
    " | |||||||||   `--------'     |          O",
    " `+---------------------------^----------|",
    "   `\\_,-------, _________________________|",
    "     / XXXXXX /`|     /",
    "    / XXXXXX /  `\\   /",
    "   / XXXXXX /\\______(",
    "  / XXXXXX /",
    " / XXXXXX /",
    "(________(",
    " `------'"
};



   const string numero0[6] = {
        "   ___  ",
        "  / _ \\ ",
        " | | | |",
        " | | | |",
        " | |_| |",
        "  \\___/ ",
    };

    const string numero1[6] = {
        "  __ ",
        " /_ |",
        "  | |",
        "  | |",
        "  | |",
        "  |_|",
    };

    const string numero2[6] = {
        "  ___  ",
        " |__ \\ ",
        "    ) |",
        "   / / ",
        "  / /_ ",
        " |____|",
    };

    const string numero3[6] = {
        "  ____  ",
        " |___ \\ ",
        "   __) |",
        "  |__ < ",
        "  ___) |",
        " |____/ ",
    };

    const string numero4[6] = {
        "  _  _   ",
        " | || |  ",
        " | || |_ ",
        " |__   _|",
        "    | |  ",
        "    |_|  ",
    };

    const string numero5[6] = {
        "  _____ ",
        " | ____|",
        " | |__  ",
        " |___ \\ ",
        "  ___) |",
        " |____/ ",
    };

    const string numero6[6] = {
        "    __  ",
        "   / /  ",
        "  / /_  ",
        " | '_ \\ ",
        " | (_) |",
        "  \\___/ ",
    };

    const string numero7[6] = {
        "  ______ ",
        " |____  |",
        "     / / ",
        "    / /  ",
        "   / /   ",
        "  /_/    ",
    };
  
    const string numero8[6] = {
        "  ___  ",
        " / _ \\ ",
        "| (_) |",
        " > _ < ",
        "| (_) |",
        " \\___/",
    };

    const string numero9[6] = {
        "   ___  ",
        "  / _ \\ ",
        " | (_) |",
        "  \\__, |",
        "    / / ",
        "   /_/  ",
    };
    vector<string> imprimirListasdeNumeros(const string &numeros)
    {
        vector<string> resultado(6, "");

        for (char digito : numeros)
        {
            const string *numArr;
            switch (digito)
            {
            case '0':
                numArr = numero0;
                break;
            case '1':
                numArr = numero1;
                break;
            case '2':
                numArr = numero2;
                break;
            case '3':
                numArr = numero3;
                break;
            case '4':
                numArr = numero4;
                break;
            case '5':
                numArr = numero5;
                break;
            case '6':
                numArr = numero6;
                break;
            case '7':
                numArr = numero7;
                break;
            case '8':
                numArr = numero8;
                break;
            case '9':
                numArr = numero9;
                break;
            default:

                return {};
            }

            for (int i = 0; i < 6; ++i)
            {
                resultado[i] += numArr[i] + " ";
            }
        }
        for (const auto &linea : resultado)
        {
            cout << linea << endl;
        }
        return resultado;
    }



  static vector<string> enVector(const string array[], int longitudArreglo)
  {
    vector<string> vectorResultante;
    for (size_t i = 0; i < longitudArreglo; i++)
    {
      vectorResultante.push_back(array[i]);
    }
    return vectorResultante;
  }

  void static imprimirASCII(const string DIBUJO_ASCII[], int longArreglo)
  {
    const vector<string> DIBUJO=  Libreria::enVector(DIBUJO_ASCII, longArreglo);
    // Imprimir Ascii linea por linea.
    for (const auto& LINEA : DIBUJO) {
        cout << LINEA << endl;
    }
  }
};
// int main(int argc, char const *argv[])
// {
//   // sin esta linea, no se ven los dinosaurios. (●__●)
//   //  setlocale(LC_ALL, "en_US.UTF-8");
//   Libreria lib;
//   //solo se puede imprimir en vector, ni modo...
//   string numeros = "81234";
//   vector<string> resultado = lib.imprimirListasdeNumeros(numeros);

  
// }

#endif //Imprimir_ASCII_H

