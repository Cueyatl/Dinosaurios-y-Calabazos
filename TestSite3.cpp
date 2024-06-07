#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Libreria
{
public:
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
};

int main()
{
    Libreria lib;
    string numeros = "8";
    vector<string> resultado = lib.imprimirListasdeNumeros(numeros);
    return 0;
}
