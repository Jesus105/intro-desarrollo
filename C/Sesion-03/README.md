[`Introducción al desarrollo de software`](../../README.md) > [`Módulo 3`](../README.md) > `Sesión 1` 

## Sesión 3: Tipos de datos primitivos y operadores

<div style="text-align: justify;">

### 1. Objetivos :dart:

 - Conocer todos los tipos de datos primitivos dentro de lenguaje C.
 - Comprender las caravteristicas y capacidades de cada dato primitivo.
 - Hacer uso de cada uno de los operadores que nos provee el lenguaje.

 ### 2. Requisitos :clipboard:

1. Tener [`Visual Studio Code`](https://code.visualstudio.com/) instalado 
2. Tener acceso a una terminal de linux
3. Haber configurado correctamente el entorno de desarrollo

### 3. Contenido :blue_book:

 ---

 #### <ins>Tipos de datos primitivos</ins>

En programación los tipos de datos primitivos o elementales son los que nos proporciona el propio lenguaje y con los cuales podemos realizar operaciones como:<br>

- Declaración de variables o constantes.<br>

- Operaciones matemáticas básicas, como la suma, resta, multiplicación o división.<br>

- A partir de estos datos podemos crear datos mas complejos, como lo son las estructuras de datos (aunque si no entienden este punto, no se preocupen).<br>

Habiendo mencionado la definición de los tipos de datos primitivos, hay que establecer cuales son los que tenemos a disposición en C y el respectivo tamaño que ocupa cada uno en la memoria :<br>


*Datos de tipo entero*  *Tamaño en memoria*     *Identificador en stdio*<br>
<br>

- _short_               15 bits + 1 de signo    %d    <br>
- _unsigned short_      16 bits                 %u<br>
- _int_                 31 bits + 1 de signo    %d<br>
- _unsigned int_        32 bits                 %u<br>
- _long int_            63 bits + 1 de signo    %ld<br>
- _unsigned long int_   64 bits                 %lu<br>
- _long long int_       63 bits + 1 de signo    %lld<br>
- _unsigned long int_   63 bits + 1 de signo    %llu<br>

*Datos de tipo flotante*  *Tamaño en memoria*   *Identificador en stdio*<br>
<br>

- _float_                  16 bits              %f   <br> 
- _double_                 64 bits              %lf<br>
- _long double_            128 bits             %llf<br>

*Datos de tipo caracter* *Tamaño en memoria*    *Identificador en stdio*<br>
<br>

- _char_                8 bits                  %c<br>
- _string_ char name[]  n*8 bits                %s<br>



- [**`Ejemplo 1`**](Code/Datos_p.c)

--- 

#### <ins> Operadores </ins>

Un operador es un elemento de programa que se aplica a uno o varios operandos en una expresión
o instrucción. Los operadores que requieren un operando, como el operador de incremento se
conocen como operadores unarios. Los operadores que requieren dos operandos, como los
operadores aritméticos (+,-,*,/) se conocen como operadores binarios. Un operador, el operador
condicional (?:), utiliza tres operandos y es el único operador ternario de C

*Operadores aritméticos*<br>
- _+_ Representa una suma aritmética <br>
- _-_ Representa una resta aritmética<br>
- _/_ Representa una división aritmética<br>
- _*_ Representa una multiplicación aritmética<br>
- _%_ Representa la operación módulo<br>

*Operadores lógicos*<br>
- _|_ Representa una disyunción lógica<br>
- _&_ Representa una conjunción lógica<br>
- _!_ Representa una negación lógica<br>
- _^_ Representa una disyunción lógica<br>
- _||_ Representa una disyunción lógica en corto circuito<br>
- _&&_ Representa una conjunción lógica en corto circuito<br>

*Operadores de comparación*<br>
- _>_ Mayor que<br>
- _<_ Menor que<br>
- _>=_ Mayor o igual<br>
- _<=_ Menor o igual<br>
- _!=_ Diferente<br>
- _==_ Igual<br>

*Operadores de asignación*<br>

- _=_ Igual<br>
- _++_ Igual más una unidad //--> num_A = num_A + 1<br>
- _--_ Igual menos una unidad //--> num_A = num_A -1<br>
- _+=_ Igual más //--> num_A = num_A + num_B<br>
- _-=_ Igual menos //--> num_A = num_A - num_B<br>
- _*=_ Igual por //--> num_A = num_A * num_B<br>
- _/=_ Igual entre //--> num_A = num_A / num_B<br>
- _%=_ Igual modulo //--> num_A = num_A % num_B<br>

*Operadores bit a bit*<br>
 
- _&_ AND<br>
- _|_ OR<br>
- _^_ XOR<br>

- _>>_ Desplazamiento de bits a la derecha<br>
- _<<_ Desplazamiento de bits a la izquierda<br>

<br>

- [**`Ejemplo 2`**](Code/Operadores.c)

- [**`Reto 1`**](Code/Datos_p.c)

 [`Anterior`](../README.md) | [`Siguiente`](../Sesion-04/README.md)

 </div>