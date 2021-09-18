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

-- num_1 = 5
-- num_2 = 7
-- resultado = $num_1 + $num_2

-- echo "La suma de $num_1 más $num_2 da como resultado $resultado"

--- 

#### <ins> Entradas </ins>

Las entradas es la forma en que nosotros como usuarios podemos ingresar información útil al programa, las cuales se almacenan dentro de alguna varible, como en el siguiente ejemplo:

-- num_1 = 0
-- num_2 = 0

-- #Entradas con echo y read separados
-- echo -n "Ingrese un número":
-- read
-- num_1 = $REPLY

-- #Entradas con echo y read separados
-- read -p "Ingrese otro número"
-- num_2 = $REPLY

-- resultado = $num_1 + $num_2
-- echo "La suma de $num_1 más $num_2 da como resultado $resultado"

---

#### <ins> Condicionales </ins>

Un condicional en la programación es una sentencia o grupo de sentencias que puede ejecutarse o no en función del valor de una condición, vease el siguiente ejemplo: 

 if [condición]; then
   accción 1
   #exit
 elif [condición]; then
   acción 2
   #exit
 else 
   acción 3
   #exit
 fi"

calificacion=0
edad=0

echo "Ejemplo del uso de condicionales if-else"
read -n1 -p "Indique cuál es su calificación: " calificacion
echo -e "\n"

if (($calificacion>=7)); then
    echo "El alumno ha aprobado"
    #exit

else  
    echo "El alumno ha reprobado"
    #exit
fi

read -p "Indique cuál es su edad: " edad
echo -e "\n"

if [ $edad>17 ]; then
    echo "El alumno es mayor de edad"
    #exit

else  
    echo "El alumno es menor de edad"
    #exit
fi

if [ $edad>12 ] && [ $edad<18 ]; then
    echo "El alumno es adolescente"
    #exit

elif [ $edad>17 ] && [ $edad<30 ]; then
    echo "El alumno es un joven"
    #exit

elif [ $edad>31 ] && [ $edad<65 ]; then  
    echo "El alumno es un adulto"
    #exit

elif [ $edad>65 ]; then
    echo "El alumno es un adulto mayor"

else  
    echo "El alumno es un niño"
    #exit
fi

 [`Anterior`](../README.md) | [`Siguiente`](Reto-01/README.md)

 </div>