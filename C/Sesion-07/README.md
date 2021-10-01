[`Introducción al desarrollo de software`](../../README.md) > [`Módulo 3`](../README.md) > `Sesión 7` 

## Sesión 7: Punteros

<div style="text-align: justify;">

### 1. Objetivos :dart:

 - Concer la definción de un puntero
 - 
 - Usar correctamente las directivas de preprocesador 

 ### 2. Requisitos :clipboard:

1. Tener [`Visual Studio Code`](https://code.visualstudio.com/) instalado 
2. Tener acceso a una terminal de linux

### 3. Contenido :blue_book:

 #### <ins>Punteros</ins>
Los punteros son uno de los aspectos más potentes de la programación en C, pero también uno de los más complejos de dominar. Los punteros permiten manipular la memoria del ordenador de forma eficiente. Dos conceptos son fundamentales para comprender el funcionamiento de los punteros:<br>

1. El tamaño de todas variables y su posición en memoria.
2. Todo dato está almacenado a partir de una dirección de memoria. Esta dirección puede ser obtenida y manipulada también como un dato más.

 #### <ins>Dirección de memoria</ins>
 En computación, la dirección de memoria es un identificador para una ubicación única de la memoria primaria, con las cuales una CPU u otros dispositivos puede almacenar, modificar o recuperar datos de la misma.<br>

Las direcciones de memoria son un número fijo de dígitos, siendo un número entero sin signo. Por lo general, las direcciones de memoria se expresan en base hexadecimal para facilitar su lectura. Por ejemplo, una dirección de memoria en un procesador 32 bits podría en binario 1011 0111 1011 1010 1100 0011 1100 0111, lo que en hexadecimal sería B7BAC3C7.<br>

 #### <ins>Manejo de punteros</ins>

Para que nosotros podamos acceder a la dirección de memoria de un variable cualquiera, necesitamos utilizar el operador <b>&</b> (que pese a que es el mismo símbolo que el operador AND, significa algo completaente diferente), llamado <b>operador de dirección</b> como podemos ver en el siguiente ejemplo: <br>

- [**`Ejemplo 1`**](Code/mem_dir.c)

<br>

A su vez nosotros podemos almacenar estas direcciones de memoria con el tipo de dato puntero, el cual se declara de la siguiente forma:<br>

int a = 5;<br>
int * puntero_a = &a;<br>

Donde nosotros estamos almacenando dentro de la variable puntero_a de tipo puntero, la dirección de memoria de nuestra variable a.

Pero nosotros por medio del <b>operador de indirección *</b> podemos acceder al contenido de la memoria.

Como podemos notar en el siguiente programa: 
- [**`Ejemplo 2`**](Code/punteros.c)

 #### <ins>Aritmética de punteros</ins>
 Siguiendo con el tema de los punteros en C, debemos mencionar que se pueden realizar ciertas operaciones aritméticas con los punteros, por ejemplo. Se pueden sumar o restar, debido a esto, se está permitido utilizar los incrementos ++ o decrementos --. Esto nos ayuda puntualmente cuando estamos manejando arreglos ya que ellos contienen direcciones de memoria contiguas, entonces por medio de estos decrementos es que yo puedo acceder a los valores de dichos arreglos por medio de operaciones como podemos ver en el siguiente ejemplo: 

- [**`Ejemplo 3f`**](Code/aritmetica.c)

 [`Anterior`](../README.md) | [`Siguiente`](../Sesion-05/README.md)

 </div>