[`Introducción al desarrollo de software`](../../README.md) > [`Módulo 3`](../README.md) > `Sesión 6` 

## Sesión 6: Arreglos, cadenas y directivas de preprocesador

<div style="text-align: justify;">

### 1. Objetivos :dart:

 - Conocer la importancia de los arreglos.
 - Saber la diferencia y similitudes entre un arreglo y una cadena.
 - Usar correctamente las directivas de preprocesador 

 ### 2. Requisitos :clipboard:

1. Tener [`Visual Studio Code`](https://code.visualstudio.com/) instalado 
2. Tener acceso a una terminal de linux

### 3. Contenido :blue_book:

 ---

 #### <ins>Arreglos y cadenas</ins>

- *Arreglos*<br>
Es una colección de datos del mismo tipo. Sirve para manejar un número “n” de elementos en común, ya sea de tipos definidos por el Lenguaje,(int, float, char,etc…) así como aquellos definidos por el programador.<br>

Un arreglo unidimensional es un tipo de datos estructurado que está formado de una colección 
finita y ordenada de datos del mismo tipo. Es la estructura natural para modelar listas de 
elementos iguales. El tipo de acceso a los arreglos unidimensionales es el acceso directo, es 
decir, podemos acceder a cualquier elemento del arreglo sin tener que consultar a elementos 
anteriores o posteriores, esto mediante el uso de un índice para cada elemento del arreglo que
nos da su posición. <br>

Ejemplos: <br>

- int edades[10] = {20, 18, 25, 35, 42, 12, 48, 19, 15, 23};
- float calificaciones[5] = {9.5, 6.8, 7.3, 9.0, 8.6};
- char letras[5] = {'H', 'o', 'l', 'a'};

- [**`Ejemplo 1`**](Code/arrays.c)

- *Cadenas*<br>

Las cadenas son arreglos definidos de una forma diferente, aunque realmente se puede decir que toda cadena es un arreglo, no todo arreglo es una cadena. Ahora hay que declarar una cadena y un arreglo de caracteres que expresen lo mismo:<br>

- char palabra[5] = "Hola";
- char palabra[5] = {'H', 'o', 'l', 'a', 0};

En ambos casos se expresan exactamente lo mismo, y pese a que podemos ver un 0 al final de la segunda, esto se debe a que se indica el fin de cadena, mientras que en la primera esto se indica por medio de las comillas, por esta razón debemos agregar un espacio extra al tamaño de la cadena que indiquemos.

NOTA: para hacer un uso y manejo correcto de cadenas tenemos la librería __<stdio.h>__.

- [**`Reto 1`**](Reto-01/README.md)

--- 

#### <ins>Directivas de preprocesador</ins>
Las directivas de preprocesador, como y , se usan normalmente para que los programas de origen sean fáciles de cambiar y fáciles de compilar #define #ifdef en diferentes entornos de ejecución. Las directivas del archivo de código fuente le dicen al preprocesador que tome medidas específicas. Por ejemplo, el preprocesador puede reemplazar tokens en el texto, insertar el contenido de otros archivos en el archivo de código fuente o suprimir la compilación de parte del archivo quitando secciones de texto. Las líneas de preprocesador se reconocen y se ejecutan antes de la expansión de macro. Por lo tanto, si una macro se expande en algo que parece un comando de preprocesador, el preprocesador no lo reconoce.<br>

Las instrucciones de preprocesador usan el mismo juego de caracteres que las instrucciones de archivo de origen, con la excepción de que no se admiten secuencias de escape. El juego de caracteres utilizado en las instrucciones de preprocesador es el mismo que el juego de caracteres de la ejecución. El preprocesador también reconoce valores de caracteres negativos.<br>

El preprocesador reconoce las siguientes directivas:<br>
- [`#define`](https://docs.microsoft.com/es-es/cpp/preprocessor/hash-define-directive-c-cpp?view=msvc-160) El #define crea una macro, que es la asociación de un identificador o identificador con parámetros con una cadena de token. Una vez definida la macro, el compilador puede sustituir la cadena de token para cada aparición del identificador del archivo de código fuente. <br>
- [`#include`](https://docs.microsoft.com/es-es/cpp/preprocessor/hash-include-directive-c-cpp?view=msvc-160Indica al preprocesador que incluya el contenido de un archivo especificado en el punto donde aparece la directiva.
- [`#if`](https://docs.microsoft.com/es-es/cpp/preprocessor/hash-if-hash-elif-hash-else-and-hash-endif-directives-c-cpp?view=msvc-160)La #if, con las directivas #elif ,#else y #endif, controla la compilación de partes de un archivo de código fuente. Si la expresión que escribe (después del #if ) tiene un valor distinto de cero, el grupo de líneas inmediatamente después de la directiva #if se mantiene en la unidad de traducción.

 [`Anterior`](../README.md) | [`Siguiente`](../Sesion-05/README.md)

 </div>