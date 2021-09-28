[`Introducción al desarrollo de software`](../../README.md) > [`Módulo 3`](../README.md) > `Sesión 4` 

## Sesión 4: Control de flujo

<div style="text-align: justify;">

### 1. Objetivos :dart:

 - Hacer uso de todos los condicionales que nos provee el lenguaje C
 - Conocer los diferentes ciclos que hay y en qué se diferencían
 - Saber en que sitaciones es más conveniente utilizar algún tipo especifico de ciclo o condicional

 ### 2. Requisitos :clipboard:

1. Tener [`Visual Studio Code`](https://code.visualstudio.com/) instalado 
2. Tener acceso a una terminal de linux

### 3. Contenido :blue_book:

 ---

 #### <ins> Condicionales</ins>

*if - else*
Las condicionales de tipo _if else_ nos permiten bifurcar el flujo de nuetros programas, puesto que a través de ellas nosotros tenemos la posibilidad de generar un flujo inteligente dentro de la ejecución del programa, ya que este tomará desiciones por si mismo con base a los datos que contenga el programa.

__Sintaxis:__ <br>

if(condición a cumplir)<br>
    código a ejecutar;<br>
}<br>
<br>
else if(alternativa a cumplir){<br>
    código a ejecutar;<br>
}<br>
<br>
else{<br>
    código a ejecutar; <br>

} <br>
<br>

*Switch - case*

El switch case en esta ocasión representará un modelo de condicionales que se toman bajo ciertos casos ya definiddos. En ocasiones podrá ser mejor que utilizar if-else, sin embargo no siempre será la opción optima que nos permita ejecutar el algoritmo de forma adecuada.

La sintaxis es la siguiente: <br>

switch(expresión){ <br>
case caso_1:<br>
    código a ejecutar;<br>
    brake;<br>

case caso_2:<br>
    código a ejecutar;<br>
    brake;<br>

default:<br>
    código a ejecutar;<br>
    brake;<br>
}


*Operador ternario*

Como su propio nombre lo indica este es un operador el cual tiene una condicional que permite tomar desiciones del programa. Suele tener apliaciones muy específicas ya que solo se ocupa cuando se quiere sustituir pocas lineas de código en una expresión.

Ejemplo: <br>

int user_age = 0; <br>

puts("Ingrese su edad");<br>
scanf("%d", &user_age);<br>

printf("El usuario es %s de edad \n", (user_age>17 ? "mayor" : "menor"));<br>

- [**`Ejemplo 1`**](Code/condicionales.c)
- [**`Reto 1`**](Reto-01/README.md)

--- 

#### <ins> Ciclos </ins>
Los ciclos o bucles es una forma de iterar nuestro código cuantas veces queramos. Esto depende por ejemplo de datos que ingrese el usuario, alguna variable del programa o bien un número especifico de iteraciones que nosotros definamos. Exiten principalmente 3 formas de generar bucles en lenguaje c las cuales conoceremos a continuación:

*while*
El ciclo while nos indica que mientras una condición sea verdadera este se estará ejecutando, es importante saber que este puede ejecutarse un número n de veces las cuales pueden ir desde 0 hasta infinito. La condición que debe ser verdadera se expresa dentro de sus parentesís como veremos a continiación en su sintaxis: <br>

- while(condición){ <br>
    código a ejecutar; <br>
}<br>

- [**`Ejemplo 2`**](Code/while.c)

*do while*
Este ciclo funciona de una forma bastante similar al ciclo while, con la diferencia que este primero ejecuta de forma incodicional una vez el código contenido y después verifica que la condición se cumpla. En otras palabras si el ciclo while se ejecuta n veces que pueden ir de 0 a infinito, el ciclo do while se ejecuta n + 1 veces, puesto que como minimo este cumple su ejecución al menos en una vez. Su sintaxis es la siguiente:

do{<br>
    código a ejecutar:<br>
}while(condición);<br>

- [**`Ejemplo 3`**](Code/dowhile.c)


 [`Anterior`](../README.md) | [`Siguiente`](../Sesion-03/README.md)

 </div>