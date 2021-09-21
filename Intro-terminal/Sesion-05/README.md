[`Introducción al desarrollo de software`](../../README.md) > [`Módulo 2`](../README.md) > `Sesión 5` 

## Sesión 5: Programación en Bash

<div style="text-align: justify;">

### 1. Objetivos :dart:

 - Comprender los comandos básicos del lenguaje
 - Aprender a usar el compilador
 - Generar programas que automaticen tareas 

### 2. Contenido :blue_book:

 #### <ins> Hola Mundo </ins>

Para esto es necesario conocer el comando *echo* a traves del cual con el siguente ejemplo podremos generar nuetro programa de hola mundo

*echo "Hola Mundo!"*

Esto debemos de incluirlo en un archivo de nombre hola_mundo.sh y cambiar los permisos para poder ejecutarlo


 #### <ins> Variavles </ins>

Las variables son un espacio donde nosotros podemos almacenar información. De esta forma los programas guardan ciertos datos que les son utiles para posteriormente ser utilizados dentro de alguna funcionalidad. 

Por ejemplo en dado caso que querramos realizar una suma debemos de seguir el siguiente ejemplo

-- num_1 = 5 <br>
-- num_2 = 7 <br>
-- resultado = $num_1 + $num_2<br>

-- echo "La suma de $num_1 más $num_2 da como resultado $resultado"<br>

--- 

#### <ins> Entradas </ins>

Las entradas es la forma en que nosotros como usuarios podemos ingresar información útil al programa, las cuales se almacenan dentro de alguna varible, como en el siguiente ejemplo:

-- num_1 = 0<br>
-- num_2 = 0<br>

-- #Entradas con echo y read separados<br>
-- echo -n "Ingrese un número: "<br>
-- read<br>
-- num_1 = $REPLY<br>

-- #Entradas con echo y read separados<br>
-- read -p "Ingrese otro número"<br>
-- num_2 = $REPLY<br>

-- resultado = $num_1 + $num_2<br>
-- echo "La suma de $num_1 más $num_2 da como resultado $resultado"<br>

---

#### <ins> Condicionales </ins>

Un condicional en la programación es una sentencia o grupo de sentencias que puede ejecutarse o no en función del valor de una condición, vease el siguiente ejemplo: 

 if [condición]; then<br>
   accción 1<br>
   #exit<br>
 elif [condición]; then<br>
   acción 2<br>
   #exit<br>
 else <br>
   acción 3<br>
   #exit<br>
 fi"<br>

calificacion=0<br>
edad=0<br>

echo "Ejemplo del uso de condicionales if-else"<br>
read -n1 -p "Indique cuál es su calificación: " calificacion<br>
echo -e "\n"<br>

if (($calificacion>=7)); then<br>
    echo "El alumno ha aprobado"<br>
    #exit<br>

else  <br>
    echo "El alumno ha reprobado"<br>
    #exit<br>
fi<br>

read -p "Indique cuál es su edad: " edad<br>
echo -e "\n"<br>

if [ $edad>17 ]; then<br>
    echo "El alumno es mayor de edad"<br>
    #exit<br>

else  <br>
    echo "El alumno es menor de edad"<br>
    #exit<br>
fi<br>

if [ $edad>12 ] && [ $edad<18 ]; then<br>
    echo "El alumno es adolescente"<br>
    #exitv

elif [ $edad>17 ] && [ $edad<30 ]; then<br>
    echo "El alumno es un joven"<br>
    #exit<br>

elif [ $edad>31 ] && [ $edad<65 ]; then  <br>
    echo "El alumno es un adulto"<br>
    #exit<br>

elif [ $edad>65 ]; then<br>
    echo "El alumno es un adulto mayor"<br>

else  <br>
    echo "El alumno es un niño"<br>
    #exit<br>
fi<br>

[`Anterior`](../Sesion-04/README.md) | [`Anterior`](../../C/README.md) 

 </div>