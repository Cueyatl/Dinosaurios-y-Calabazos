# Dinosaurios y Calabazos
(El nombre sigue en discución)

Proyecto de tercer parcial, segundo semestre de clase de programación orientada a objetos.

## **Índice**   
1.- [Convenciones de nombramiento](#Convenciones-de-nombramiento)  
2.- [Comandos de Git](#Comandos-de-Git)  
3.- [¿Qué es un RPG?](#Qué-es-un-RPG)  
4.- [Recursos para dibujos ASCII](#Recursos-para-dibujos-ASCII)  
5.- [Utilizar Cpp en VsCode](#Utilizar-Cpp-en-VsCode)  


## Convenciones de nombramiento
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



## Comandos-de-Git
| Comando      | Descripción                                                                 |
|--------------|------------------------------------------------------------------------------|
| `git init`   | Crea un nuevo repositorio local en tu computadora para tu proyecto.         |
| `git clone`  | Clona un repositorio existente desde GitHub a tu computadora.               |
| `git add`    | Agrega archivos modificados al área de preparación para su posterior envío. |
| `git commit` | Guarda los cambios preparados con un mensaje descriptivo.                   |
| `git branch` | Te permite crear, cambiar y eliminar ramas dentro de tu proyecto.           |
| `git checkout` | Cambia entre diferentes ramas de tu proyecto.                            |
| `git merge`  | Combina cambios de una rama en otra.                                        |
| `git pull`   | Combina los cambios de GitHub (pulling) con tus cambios locales y actualiza tu proyecto. |
| `git push`   | Envía tus cambios locales a GitHub (pushing).                               |
| `git status`   | Nos muestra información sobre la rama actual.                               |

---------------
**Para más información sobre el uso de los comandos de Git visita:**  
https://www.freecodecamp.org/espanol/news/10-comandos-de-git-que-todo-desarrollador-deberia-saber/

## ¿Qué es un RPG?

Un juego RPG es un tipo de videojuego en el que los jugadores asumen los roles de personajes en un mundo ficticio. Los jugadores actúan y toman decisiones que afectan la historia y el desarrollo de sus personajes. Estos juegos a menudo se centran en la narrativa y el desarrollo del personaje, con una gran cantidad de opciones y libertades para el jugador.


### **La jugabilidad de un RPG generalmente incluye**
* **Creación de Personajes:** Los jugadores a menudo crean y personalizan sus personajes, eligiendo aspectos como su apariencia, habilidades, y atributos.

* **Desarrollo de Personajes:** A medida que avanzan en el juego, los personajes ganan experiencia, suben de nivel y mejoran sus habilidades y estadísticas.

* **Exploración:** Los jugadores exploran mundos extensos y detallados, que pueden ser mundos abiertos o más lineales, llenos de misiones, secretos y lugares por descubrir.

* **Historia y Toma de Decisiones:** Los RPGs suelen tener historias profundas con múltiples ramificaciones. Las decisiones del jugador pueden afectar el curso de la historia, los personajes que encuentran y el final del juego.

* **Combate:** El combate puede variar desde turnos tradicionales hasta combates en tiempo real. Los jugadores utilizan una variedad de tácticas, habilidades y equipos para derrotar enemigos.

* **Misión y Objetivos:** Los jugadores completan misiones y objetivos dados por NPCs (Personajes No Jugadores), que ayudan a avanzar en la trama y proporcionar recompensas.

### **Elementos Distintivos de los RPG**
* **Narrativa Profunda:** Los RPGs suelen tener historias complejas y bien desarrolladas.

* **Personajes Detallados:** Los personajes suelen tener historias, motivaciones y desarrollos significativos.

* **Mundo Rico y Detallado:** Los mundos en los RPGs son inmersivos, con una rica historia y contexto que los jugadores pueden explorar.

* **Sistema de Progresión:** Los personajes evolucionan a lo largo del juego, volviéndose más fuertes y adquiriendo nuevas habilidades.

* **Interacción y Elección:** La interacción con otros personajes y las decisiones del jugador son fundamentales, afectando el desarrollo del juego.

### **¿Por qué son exitosos los RPG?**
**Inmersión:** La capacidad de perderse en un mundo detallado y vivir una historia hace que los RPGs sean extremadamente atractivos.

**Rejugabilidad:** Las diferentes elecciones y caminos en la historia aumentan el valor de rejugabilidad.

**Desarrollo de Personajes:** La satisfacción de ver cómo los personajes crecen y se desarrollan es muy gratificante.

**Narrativa Enganchadora:** Las historias bien escritas capturan y mantienen el interés de los jugadores.

**Comunidad y Cultura:** Muchos RPGs tienen comunidades fuertes que crean contenido adicional, mods, y fanfics, extendiendo la vida útil del juego.


### **Niveles y Experiencia (XP)**

#### Cómo Funciona
 Los personajes ganan puntos de experiencia (XP) al completar misiones, derrotar enemigos y realizar otras acciones. Al acumular suficientes  puntos de experiencia, el personaje sube de nivel. 

 **Ejemplo:**

En juegos como Final Fantasy y The Elder Scrolls, los personajes suben de nivel y mejoran sus estadísticas básicas como salud, magia, fuerza y agilidad.


#### Equipamiento y Objetos

Los personajes mejoran su poder al adquirir y equipar mejores armas, armaduras y otros objetos. Estos ítems pueden tener estadísticas y habilidades especiales.
Ejemplo: En Diablo, los personajes obtienen botines de enemigos y cofres, y el equipo puede tener distintas rarezas y atributos.

#### Perfeccionamiento de Habilidades

En algunos juegos, los personajes mejoran sus habilidades individuales mediante el uso continuo. Cuanto más usas una habilidad, mejor te vuelves en ella.  

**Ejemplo:**

En The Elder Scrolls V: Skyrim, si usas mucho la magia de destrucción, tu habilidad en esa escuela de magia mejora con el tiempo.

#### Reputación y Relaciones

El progreso también puede venir a través de la mejora de la reputación del personaje con diferentes facciones o mediante el desarrollo de relaciones con otros personajes.  

**Ejemplo:**

En Dragon Age, tus acciones y decisiones afectan cómo los diferentes personajes y facciones te ven, lo cual puede desbloquear nuevas misiones y oportunidades.
#
*Cómo la Toma de Decisiones Afecta la Historia del Juego
Uno de los aspectos más fascinantes de los RPGs es **cómo las decisiones del jugador pueden influir en la narrativa del juego.*** Aquí te explico algunas maneras en que esto ocurre:

### **Ramas Narrativas**

#### Las decisiones clave pueden llevar la historia en direcciones completamente diferentes.
 Estas decisiones a menudo ocurren en momentos críticos y pueden cambiar el curso de la historia.

**Ejemplo:** En Mass Effect, tus decisiones a lo largo de la trilogía afectan quién vive, quién muere, y el destino de la galaxia.

#### Relaciones y Lealtades

Las interacciones con otros personajes pueden cambiar dependiendo de tus decisiones, afectando tus relaciones y las alianzas que puedes formar.

**Ejemplo:** En The Witcher 3: Wild Hunt, tus elecciones afectan tus relaciones con personajes como Triss y Yennefer, y pueden llevar a diferentes desenlaces románticos y alianzas.

#### Consecuencias Morales

Las decisiones pueden tener consecuencias morales que afectan cómo los personajes y el mundo reaccionan ante ti.

**Ejemplo:** En Fable, si decides ser un héroe o un villano, el mundo cambiará para reflejar tus acciones, afectando la apariencia del personaje y cómo reaccionan los NPCs.

#### Desbloqueo de Contenido

Algunas decisiones pueden desbloquear o bloquear contenido, como misiones, áreas, y finales específicos.

**Ejemplo:** En Undertale, la manera en que tratas a los monstruos (luchando o perdonándolos) determina qué finales puedes ver.

#### Impacto en el Mundo del Juego

Tus decisiones pueden tener un impacto visible en el mundo del juego, alterando el entorno, la política, y la vida cotidiana de los NPCs.

**Ejemplo:** En Fallout: New Vegas, tus decisiones afectan el control de diferentes facciones sobre el desierto de Mojave, cambiando el estado político del área y el comportamiento de los habitantes.

## Recursos para dibujos ASCII
#### Texto ASCII
* **Texto a texto ASCII:** https://patorjk.com/software/taag/#p=display&h=2&f=Ogre&t=Type%20Something%20

#### Dibujos ASCII
* **Text art:** https://textart.sh/
* **Asci art archive:**  https://www.asciiart.eu/
* **Libreria de arte ASCII:** https://ascii.co.uk/art
#### Otros recursos
* **Convertidor de imagenes simples a ASCII:** https://www.asciiart.eu/image-to-ascii

                                          
  
  


## Utilizar Cpp en VsCode
Para configurar Visual Studio Code (VS Code) para programar en C++ desde cero, sigue estos pasos:

### 1. Instalar Visual Studio Code

1. Ve a la [página de descargas de VS Code](https://code.visualstudio.com/Download).
2. Descarga la versión adecuada para tu sistema operativo (Windows, macOS, Linux).
3. Instala VS Code siguiendo las instrucciones del instalador.

### 2. Instalar un compilador de C++

#### En Windows
1. Descarga e instala [MinGW](http://www.mingw.org/) o [MSYS2](https://www.msys2.org/).
2. Si usas MinGW, durante la instalación, asegúrate de seleccionar `mingw32-gcc-g++` en el instalador.
3. Añade el directorio `bin` de MinGW a la variable de entorno `PATH` (ej. `C:\MinGW\bin`).

### 3. Configurar VS Code para C++

1. Abre VS Code.
2. Ve a la pestaña de extensiones (`Ctrl+Shift+X`).

#### Instalar las extensiones necesarias

1. **C/C++ Extension Pack**
    - Busca e instala la extensión `C/C++` de Microsoft.
    - Busca e instala `C/C++ Intellisense`.
    - Busca e instala `C++ Snippets`.
    - Busca e instala `Code Runner`.

2. **CMake Tools** (opcional, si planeas usar CMake):
    - Busca e instala la extensión `CMake Tools`.

### 4. Configurar el entorno de desarrollo

#### Crear un archivo de configuración `tasks.json`

1. Ve a la barra de menús y selecciona `Terminal` > `Configure Default Build Task...`.
2. Selecciona `Create tasks.json file from template` y luego `Others`.
3. Modifica `tasks.json` para que luzca similar a esto (ajusta el comando y las rutas según tu sistema):

```json
{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "build",
            "type": "shell",
            "command": "g++",
            "args": [
                "-g",
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}.exe"
            ],
            "group": {
                "kind": "build",
                "isDefault": true
            },
            "problemMatcher": ["$gcc"],
            "detail": "Compilando el programa con g++"
        }
    ]
}
```

#### Crear un archivo de configuración `launch.json`

1. Ve a la barra de menús y selecciona `Run` > `Add Configuration...`.
2. Selecciona `C++ (GDB/LLDB)`.
3. Modifica `launch.json` para que luzca similar a esto:

```json
{
    "version": "0.2.0",
    "configurations": [
        {
            "name": "(gdb) Launch",
            "type": "cppdbg",
            "request": "launch",
            "program": "${fileDirname}/${fileBasenameNoExtension}.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": false,
            "MIMode": "gdb",
            "setupCommands": [
                {
                    "description": "Habilitar el redireccionamiento para la salida del programa",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "preLaunchTask": "build",
            "miDebuggerPath": "/usr/bin/gdb",
            "setupCommands": [
                {
                    "description": "Enable pretty-printing for gdb",
                    "text": "-enable-pretty-printing",
                    "ignoreFailures": true
                }
            ],
            "miDebuggerPath": "gdb",
            "stopAtEntry": false,
            "logging": {
                "engineLogging": true,
                "trace": true,
                "traceResponse": true
            }
        }
    ]
}
```

### 5. Escribir y compilar tu primer programa

1. Crea un nuevo archivo C++ (`Archivo` > `Nuevo archivo`).
2. Guarda el archivo con la extensión `.cpp` (ej. `main.cpp`).
3. Escribe tu código C++.

```cpp
#include <iostream>

int main() {
    std::cout << "Hola, mundo!" << std::endl;
    return 0;
}
```

4. Guarda el archivo (`Ctrl+S`).
5. Compila y ejecuta tu programa:
    - Compilar: `Terminal` > `Run Build Task...` (`Ctrl+Shift+B`).
    - Ejecutar: `Run` > `Start Debugging` (`F5`).

### 6. Verificar la salida

1. Si la compilación es exitosa, verás el ejecutable en la carpeta del proyecto.
2. La salida del programa se mostrará en el panel de depuración.

Con estos pasos, deberías tener tu entorno de desarrollo en VS Code configurado y listo para programar en C++.           
                                        
Recursos adicionales:
https://code.visualstudio.com/docs/languages/cpp
#

## Bibliografía
freeCodeCamp.org. (2023). 10 comandos de git que todo desarrollador debería saber. freeCodeCamp.org. Retrieved from https://www.yubitec.cl/blog/los-7-comandos-esenciales-en-git-que-todo-desarrollador-debe-conocer/
