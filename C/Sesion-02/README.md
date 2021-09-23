[`Introducción al desarrollo de software`](../../README.md) > [`Módulo 3`](../README.md) > `Sesión 1` 

## Sesión 2: Estructura de un programa, variables y entrada y salida estándar

<div style="text-align: justify;">

### 1. Objetivos :dart:

 - Comprender la estructura básica de cualquier programa en C
 - Conocer la útilidad y la función de las variables
 - Utilizar la entrada y la salida estándar en nuestros programas

 ### 2. Requisitos :clipboard:

1. Tener [`Visual Studio Code`](https://code.visualstudio.com/) instalado 
2. Tener acceso a una terminal de linux

### 3. Contenido :blue_book:

 ---

 #### <ins> Estructura básica de un programa en C</ins>

 <img src="https://www.floornature.es/media/photos/65/13880/0-copertina_full.jpg" align="right" width="100"> 

*Directivas de pre-procesador*

Las directivas de preprocesador son aquellas indicaciones las cuales nos facilitaran la lectura y escritura del código, las cuales le dan instrucciones al compilador de cómo es que se debe de compilar el programa. Regularmente se suelen encontrar librerías y definiciones. <br>

Ejemplos: <br>
- #include <stdio.h>
- #define NOMBRE Jesus

*Cuerpo principal*

Nuestros programas siempre deberán de incluir la función o el cuerpo principal, ya que para que el compilador pueda procesar nuestro código, el cuerpo principal le indica el inicio de toda la lógica de nuestro programa, es de suma importancia siempre incluirla, la cual se ve así:

int main(){<br>
<br>
}<br>

En ocasiones así: <br>

int main(int arcg, const char ** argc){<br>
<br>
}<br>

O así (aunque no sea la mejor idea): <br>
void main(){<br>
<br>
}<br>

*return 0*

El _return 0_ dentro de nuestros programas le indica a la computadora que la ejecución del mismo ha terminado de forma exitosa. En caso de no incluirlo podemos tener errores como no marcarle el final de la ejecución a la computadora. En clases posteriores aprenderemos por qué no debemos de incluirlo dentro de las funciones _void main_.

- [**`Reto 1`**](Reto-01/README.md)

--- 

#### <ins> Variables </ins>
 <img src="https://images.vexels.com/media/users/3/128809/isolated/preview/c67aef3d02b7b2eb9cfb953fe776d224-pila-de-cajas-de-carton-by-vexels.png" align="right" width="100"> 

 Las variables son los datos de ayuda que utilizará nuestro programa para ejecutarse de forma correcta, ya bien sea que el usuario, el desarrollador o incluso alguna parte de nuestro código, estas siempre estarán ahí disponibles para ser utilizadas. Veamoslas como cajas donde podemos guardar lo que queramos para después ser utilizadas. <br>

 Toda variable que vayamos a ocupar deberá de ser declarada de la siguiente forma: <br>

 int nombre_de_la_variable = su_valor_de_inicio; <br>
 Donde...<br>

 - *int* hace referencia al tipo de dato (lo revisaremos en la sesión 3) de la variable
 - *nombre_de_la_variable* es el identificador de nuestra variable, debemos de escogerlo con mucha inteligencia, porque como Martin Robert menciona en su libro __código limpio__ escoger el nombre de una variable debe de ser casi tan importante como escoger el nombre de un hijo.
 - *=* Es el operador de asignación (lo revisaremos en la sesión 3) el cual nos ayuda a asignar valores
 - *su_valor_de_inicio* es el primer valor que le asignaremos a esta variable. Cuando realizamos esta acción (porque es opcional hacerlo) decimos que inicalizamos la variable.

 #### ¡Importante!
 Siembre debes de gestionar muy bien tus variables, ya que la eficniencia del programa está directamente relacionada con el número de variables que utilicemos, por lo que nunca debemos de declarar variables que no vamos a ocupar.
 
#### <ins> Entrada y salida estándar </ins>

La entrada y salida estándar es similar al flujo estándar de procesos que vimos en el módulo 2. A lo que nos referimos cuando hablamos de esto es al flujo que sigue la información durante la ejecución de nuestros programas. Por lo regular el flujo siempre suele ser del teclado (la entrada) hacia la CPU de nuestra computadora (proceso) para proyectar información en nuestra pantalla (salida). Para poder generar este flujo utilizamos la librería _stdio.h_ que viene de la abreviación standard input and output (o entrada y salida estándar) la cual cuenta con dos funciones que nos ayudarán a generar el flujo de información.

*Salida*

La función *printf()* genera la salida estándar en nuestros programas, con ella podemos imprimir cualquier tipo de dato primitivo. Su sintaxis es la siguiente: <br>

- printf("Texto a imprimir <indicaciones de variables> \0", indicaciones de variables);

También contamos con otras funciones como lo son *puts()* la cual solo sirve para imprimir texto, o *putchar()*, donde solo podremos imprimir un cáracter.

*Entrada*
Para la entrada estándar de datos se utiliza por excelencia la función *scanf()* donde con ella podemos leer entrada de cualquier tipo de datos primitivos y almacenarlos dentro de una variable.Su sintaxis es la siguiente: 

- scanf("<indicaciones de variable>", &variable);

Es importante notar el simbolo *&* que se llama ampersand, el cual revisaremos a fondo en la sesión 7, pero es muy importante incluirlo siempre.

Podemos ver todo lo visto en el siguiente [`ejemplo`](Code/entrada-salida.c)

- [**`Reto 2`**](Reto-02/README.md)


 [`Anterior`](../README.md) | [`Siguiente`](../Sesion-03/README.md)

 </div>