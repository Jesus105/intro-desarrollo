[`Introducción al desarrollo de software`](../../README.md) > [`Módulo 2`](../README.md) > `Sesión 2` 

## Sesión 2: Primeros pasos por la terminal

<div style="text-align: justify;">

### 1. Objetivos :dart:

 - Conocer nuevas funcionalidades de la terminal
 - Aprender a gestionar y administrar los procesos de esta misma
 - Monitoreo de los recursos del sistema

### 2. Contenido :blue_book:

 ---

 #### <ins> Flujo estándar </ins>

 <img src="https://thumbs.dreamstime.com/z/salida-del-proceso-de-entrada-de-informaci%C3%B3n-26790097.jpg" align="right" width="100"> 

*Procesamiento de datos*

![imagen](img/proceso.png)

Este es el esquema más básico de cualquier procesamiento de datos. Uno donde ingresamos datos y a través de un proceso recibimos información.

Los canales por donde ingresa la información son conocidos como flujos, de los cuales cualquier consola al menos conoce de 3:
- Entrada estándar 
- Salida estándar
- Error estándar

De forma regular casi siempre el flujo de la información corre desde los periféricos de entrada (el teclado), este le lleva información a la cpu, la cual la procesa y genera una salida por medio de la pantalla, sin embargo la información que le ingresamos no siempre puede venir del teclado, si no también de un archivo de texto al que la computadora tenga acceso.

A su vez se puede hacer el proceso inverso. En vez de que a la salida obtengamos información en la pantalla es posible que esta sea almacenada en algún archivo.

Esto lo podemos hacer con el siguiente comando:

__ls <ruta del archivo-directorio>__

En este caso ejecutará el comando ls, solo que en vez de mostrarnos los datos por pantalla los almacenará en el archivo al que le hemos indicado.

Una variante de esto es adicionar una > en el comando, y lo que hará es agregar al final del archivo indicado lo que debería arrojar en pantalla el comando que hemos especificado, como se verá en el siguiente ejemplo:

-- cat archivo.txt
-- Contenido del arcivo

-- ls -a
-- archivo.txt

-- ls -a >> archivo.txt 
-- cat archivo.txt

-- Contenido del archivo
-- archivo.txt

Y en caso de que la salida de un proceso es la entrada de otro, y así muchas veces, podríamos hacerlo de forma manual, sin embargo esto es bastante tardado e ineficiente, por otra parte podemos hacerlo de forma automática, lo cual facilita la ejecución de varios procesos, para esto nosotros ocupamos pipes o tuberías.( __| ← Este es el símbolo de pipe__), como lo veremos en el siguiente ejemplo:

__Sin pipe__

-- touch fecha.txt
-- date > fecha.txt
-- cat fecha.txt
-- Wed Oct 28 05:40:36 CST 2020

__Con pipe__
-- nano fecha.txt | date > fecha.txt | cat fecha.txt
-- Wed Oct 28 05:40:36 CST 2020



- [**`Reto 1`**](Reto-01/README.md)

--- 

#### <ins> Procesos </ins>

 <img src="https://1.bp.blogspot.com/-yy_Hx9gfrx0/WlvFi-u9iFI/AAAAAAAAElk/0bipfBVLpYgnMhsvouztH3kqL0HpzdFDgCLcBGAs/s1600/arc.jpg" align="right" width="100"> 

Dentro de este espacio nosotros conoceremos los comandos básicos del sistema de archivos de Linux: 

- *pwd* Nos da la ruta del directorio donde nos encontramos
- *ls* Lista los archivos dentro de un directorio
- *cd <directorio>*  Cambia el directorio
- *mkdir <directorio>* Crea un nuevo directorio
- *cp* Copia un archivo
- *rm* Remueve un directorio

- [**`Reto 2`**](Reto-02/README.md)

--- 

#### <ins> Manipulando archivos de texto </ins>

 <img src="https://1.bp.blogspot.com/-yy_Hx9gfrx0/WlvFi-u9iFI/AAAAAAAAElk/0bipfBVLpYgnMhsvouztH3kqL0HpzdFDgCLcBGAs/s1600/arc.jpg" align="right" width="100"> 

Dentro de este espacio nosotros conoceremos los comandos para manipular archivos de texto en la terminal: 

- *nano* Nos permite ejecutar un editor de texto dentro de nuestra terminal
- *cat* Nos muestra todo el contenido de un archivo
- *head* Solo nos muestra las primeras líneas del archivo
- *tail* Nos muestra las últimas lineas de texto del archivo

- [**`Reto 3`**](Reto-03/README.md)

 [`Anterior`](../Ejemplo-02/README.md) | [`Siguiente`](Ejemplo-01/README.md)

 </div>