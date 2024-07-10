#ifndef IMPRESORA_H
#define IMPRESORA_H
#include "ascii/Imprimir_ASCII.h"
#include "dialogos/DialogosEnemigos.h"
#include <functional>

class Impresora
{
private:
  /* data */
public:
    //metodo para llamar los string por medio de claves.
    //strings  

    DialogosEnemigos* dialogo = new DialogosEnemigos();
    //AScII
    Imprimir_ASCII* ascii = new Imprimir_ASCII();
  
  void print(const function<void()>& func,const function<void()>& transicion) {
        func();
        transicion();
    }


};
#endif //IMPRESORA_H
