#ifndef INVENTARIOGENERAL.H
#define INVENTARIOGENERAL.H
#include  "sisInventario.h"
#include "LibreriaAscii.h"
class InventarioTotal
{
public:
  void main(){
    sistemaInventario Inventario;
    Inventario.agregarItem(0, "Espada Romana", "Espadas: Acero afilado, símbolo de poder y valor.",10, 10);
    Inventario.agregarItem(1, "Espada flameante Encantada", "Espadas: Acero afilado, símbolo de poder y valor.",10, 10);
    Inventario.agregarItem(2, "Arco y Flecha", "Perfectos para ataques a distancia.",10, 10);
    Inventario.agregarItem(3, "Hacha Vikinga", "Ideal para cortar madera o enfrentarte a enemigos.",10, 10);
    Inventario.agregarItem(4, "Baston Magico", "Pueden lanzar hechizos o potenciar tus habilidades..",10, 10);
    Inventario.agregarItem(4, "Dinamita", "Sustancia explosiva a base de nitroglicerina.",10, 10);
    Inventario.agregarItem(5, "Pocion de Fuerza", "Artefacto de una epoca menos civilizada..",10, 10);
    Inventario.agregarItem(6, "Pocion de Vida", "Artefacto de una epoca menos civilizada..",10, 10);
    Inventario.agregarItem(7, "Pocion de Resistencia", "Artefacto de una epoca menos civilizada..",10, 10);
    Inventario.agregarItem(8, "Glock 22", "Artefacto de una epoca menos civilizada..",10, 10);
    Libreria libreria;
        
    libreria.enemigoDinosaurio;


    
  }

  
  
  ~InventarioTotal();
};
#endif

