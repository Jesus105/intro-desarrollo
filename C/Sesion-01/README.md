[`Introducción al desarrollo de software`](../../README.md) > [`Módulo 3`](../README.md) > `Sesión 1` 

## Sesión 1: Configuración del entorno de desarrollo y mi primer programa en C

<div style="text-align: justify;">

### 1. Objetivos :dart:

 - Preparar el entorno de desarrollo para comenzar a programar
 - Conocer herramientas como lo son el IDE o el compilador
 - Escribir un Hola Mundo en C

 ### 2. Requisitos :clipboard:

1. Tener [`Visual Studio Code`](https://code.visualstudio.com/) instalado 
2. Tener acceso a una terminal de linux

### 3. Contenido :blue_book:

 ---

 #### <ins> Instalación de herrramientas </ins>

 <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/9/9a/Visual_Studio_Code_1.35_icon.svg/1200px-Visual_Studio_Code_1.35_icon.svg.png" align="right" width="100"> 

*Instalando Visual Studio Code*


  Descargas: [`Visual Studio Code`](https://code.visualstudio.com/)<br>

  Lo primero que debemos de hacer es ir hacia el link que aparece arriba, seleccionar el sistema operativo que tenemos e instalar el IDE Visual Studio Code. En caso de que estes en WSL es recomendable que instales la extensión de WSL dentro del propio IDE.



*Instalando el compilador*


Para instalar el comipador únicamente debemos de teclear el comando __sudo apt install gcc__ dentro de alguna terminal de Linux. <br>

Para comprobar que instalaste correctamente el compilador es necesar el comando __gcc__ y luego ver el mensaje de error: <br>

__gcc: fatal error: no input files__ <br>
__compilation terminated.__


*Herramientas extra*

De igual forma para agregar un poco de funcionalidad a nuetro IDE podemos descargar la extensión __Code Runner__ para poder correr nuestros programas de forma más comóda. Aunque es realmente sencillo __no se recomienda para programas que involucren la salida estándar__.

--- 

#### <ins> Creando nuestro primer Hola Mundo </ins>

 <img src=" <img src="https://1.bp.blogspot.com/-yy_Hx9gfrx0/WlvFi-u9iFI/AAAAAAAAElk/0bipfBVLpYgnMhsvouztH3kqL0HpzdFDgCLcBGAs/s1600/arc.jpg" align="right" width="100"> 

- Desarrollo:

1. Para escribir nuestro primer programa en C es necesario que mantengamos un orden correcto en nuestro equipo, por lo que el primer paso será crear una carpeta llamada Desarrollo, Development o simplemente Dev (haciendo referecnia a Development).

2. Una vez dentro de esta carpeta debemos de crear una nueva de nombre Intro-C (o algo que haga alusión al curso).

3. Dentro de la carpeta crearemos una más llamada hola_mundo o hello_world *SIN ESPACIOS EN EL NOMBRE*, y dentro haremos un nuevo archivo llamado hola_mundo.c o hello_world.c

Ahora deberemos de abrir el documento creado con algún editor de código (preferentemente Visual Studio Code).

Dentro del [`siguiente ejemplo`](Code/hola_mundo.c) podemos ver el código de ejemplo de un Hola Mundo, copialo cómo lo encuentras y ejecutalo, ya sea utilizando __Code Runner__ o bien por medio del siguiente comando: <br>

 - __gcc hola_mundo.c -o hola_mundo__

- [**`Reto 1`**](Reto-01/README.md)


 [`Anterior`](../README.md) | [`Siguiente`](../Sesion-02/README.md)

 </div>