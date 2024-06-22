#ifndef INVENTARIOGENERAL.H
#define INVENTARIOGENERAL.H
#include <string>
#include <iostream>
#include "SisInventario.h"
#include "LibreriaAscii.h"
#include <map>
#include <memory>
using namespace std;
class InventarioGeneral
{
public:
  void main(){
    SisInventario Inventario;
    datosItem objetosInventario[]={
      { "Espada Romana","Espadas: Acero afilado, símbolo de poder y valor.",10, 10},
      {"Espada flameante Encantada", "Espadas: Acero afilado, símbolo de poder y valor.",10, 10},
      { "Arco y Flecha", "Perfectos para ataques a distancia.",10, 10},
      { "Hacha Vikinga", "Ideal para cortar madera o enfrentarte a enemigos.",10, 10},
      { "Baston Magico", "Pueden lanzar hechizos o potenciar tus habilidades..",10, 10},
      {"Dinamita", "Sustancia explosiva a base de nitroglicerina.",10, 10},
      { "Glock 22", "Artefacto de una epoca menos civilizada..",10, 10},
      {"Pocion de Fuerza", "Artefacto de una epoca menos civilizada..",10, 10},
      {"Pocion de Vida", "Artefacto de una epoca menos civilizada..",10, 10},
      { "Pocion de Resistencia", "Artefacto de una epoca menos civilizada..",10, 10},
      {"Amuleto Ojo Turco de Agua", "Proporciona puntos de agilidad y magia", 10, 10},
      {"Amuleto Ojo Turco de Fuego", "Proporciona puntos de vida y ataque", 10, 10},
    };
    
    // //agregarItem(id, "nombre", "descripcion", "peso","dano" ) incluir: stats modificadoras.
    // Inventario.agregarItem(0, "Espada Romana", "Espadas: Acero afilado, símbolo de poder y valor.",10, 10);
    // Inventario.agregarItem(1, "Espada flameante Encantada", "Espadas: Acero afilado, símbolo de poder y valor.",10, 10);
    // Inventario.agregarItem(2, "Arco y Flecha", "Perfectos para ataques a distancia.",10, 10);
    // Inventario.agregarItem(3, "Hacha Vikinga", "Ideal para cortar madera o enfrentarte a enemigos.",10, 10);
    // Inventario.agregarItem(4, "Baston Magico", "Pueden lanzar hechizos o potenciar tus habilidades..",10, 10);
    // Inventario.agregarItem(5, "Dinamita", "Sustancia explosiva a base de nitroglicerina.",10, 10);
    // Inventario.agregarItem(6, "Glock 22", "Artefacto de una epoca menos civilizada..",10, 10);

    // //Modificadores.
    // Inventario.agregarItem(7, "Pocion de Fuerza", "Artefacto de una epoca menos civilizada..",10, 10);
    // Inventario.agregarItem(8, "Pocion de Vida", "Artefacto de una epoca menos civilizada..",10, 10);
    // Inventario.agregarItem(9, "Pocion de Resistencia", "Artefacto de una epoca menos civilizada..",10, 10);
    // Inventario.agregarItem(10,"Amuleto Ojo Turco de Agua", "Proporciona puntos de agilidad y magia", 10, 10);
    // Inventario.agregarItem(10,"Amuleto Ojo Turco de Fuego", "Proporciona puntos de vida y ataque", 10, 10);
    Libreria libreria;

    libreria.enemigoDinosaurio; 
  }
  ~InventarioTotal();
};
#endif

