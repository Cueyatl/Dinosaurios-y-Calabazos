# Convenciones sobre el nombramiento de variables
#### De todos los elementos que se pueden nombrar:
Todas las entidades nombradas deben de tener un estilo de ***camelCase*** y estar escritas en **español**.  
```cpp
int alcanceDeAtaque;
string itemDeInventario;
```
Existen exepciones para palabras en inglés como para ***getters*** y ***setters***
```cpp
getNombre();
SetAlcanceDeAtaque();
```
#### Constantes
Los valores constantes estar escritas con mayusculas, si son dos o mas palabras incluir "_" para identificar las palabras.
```cpp
double GRAVEDAD= 9.81;

string NOMBRE=" Lucio Aurelio Septimio Severo Pertinax";

int ALCANCE_BALLESTA=11;
```
#### Clases
Las clases deben de estar escritas con la primera letra en mayucula:
```cpp
Class Jugador{
  //codigo
}
Class Mago{
  //codigo
}
```
### Variables Especiales
Si una variable o grupo de variables incluyen una caracteristica especial o funcionan en una dinamica exclusiva para un sistema se puede utilizar "_" para mostrar dicha caracteristica o atributo.
Ejemplo: ataque_1,ataque_2, movimiento_izquierda, movimiento_derecha.

#### Variables privadas de las clases 
uso del prefijo "m_" para identificar que son una variable miembro de la clase.
```cpp
class Persona{
  private:
    int m_edad;
    int m_ataque;
  public:
    /*Codigo*/
}
```


