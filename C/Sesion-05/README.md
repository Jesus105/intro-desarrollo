[`Introducción al desarrollo de software`](../../README.md) > [`Módulo 3`](../README.md) > `Sesión 5` 

## Sesión 5: Uso y definición de funciones y estructuras

<div style="text-align: justify;">

### 1. Objetivos :dart:

 - Definir correctamente estructuras
 - Concer la diferencia entre ambos tipos de datos
 - Definir e implementar correctamente funciones 

 ### 2. Requisitos :clipboard:

1. Tener [`Visual Studio Code`](https://code.visualstudio.com/) instalado 
2. Tener acceso a una terminal de linux

### 3. Contenido :blue_book:

 ---

 #### <ins>Estructuras</ins>

- *Estructuras*
Una _estructura_ es un conjunto de una o más variables, de distinto tipo, agrupadas bajo un mismo nombre para que su manejo sea más sencillo.

Su utilización más habitual es para la programación de bases de datos, ya que están especialmente indicadas para el trabajo con registros o fichas.

La sintaxis de su declaración es la siguiente:

__Sintaxis:__ <br>

struct nombre_estructura<br>
{<br>
tipo_variable nombre_variable1;<br>
tipo_variable nombre_variable2;<br>
tipo_variable nombre_variable3;<br>
};<br>

El manejo de las estructuras es muy sencillo, así como el acceso a los campos ( o variables ) de estas estructuras. La forma de acceder a estos campos es la siguiente: <br>

nombre_estructura.campo;<br>

Ahora bien, también podemos utilizar la palabra reservada _typedef_ para definir estructuras de una forma más común, como se puede ver en el siguiente ejemplo:<br>

typedef struct{ <br>
    int edad;
    char nombre[50];
    float estatura;

} persona;

- [**`Ejemplo 1`**](Code/Struct.c)
- [**`Ejemplo 2`**](Code/Typedef.c)
- [**`Reto 1`**](Reto-01/README.md)

--- 

#### <ins>Funciones</ins>
Una función es un bloque de código que realiza alguna operación. Una función puede definir opcionalmente parámetros de entrada que permiten a los llamadores pasar argumentos a la función. Una función también puede devolver un valor como salida. Las funciones son útiles para encapsular las operaciones comunes en un solo bloque reutilizable, idealmente con un nombre que describa claramente lo que hace la función. <br>

La función siguiente acepta dos enteros de un llamador y devuelve su suma; a y b son parámetros de tipo _int_.<br>

int sum(int a, int b)<br>
{<br>
    return a + b;<br>
}<br>

Las funciones nos ayudan a que el código sea más organizado, además de que facilita la lectura y escritura del mismo.


- [**`Ejemplo 3`**](Code/funciones.c)
- [**`Reto 2`**](Reto-02/README.md)

 [`Anterior`](../README.md) | [`Siguiente`](../Sesion-05/README.md)

 </div>