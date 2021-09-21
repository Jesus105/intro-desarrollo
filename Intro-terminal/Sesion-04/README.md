[`Introducción al desarrollo de software`](../../README.md) > [`Módulo 2`](../README.md) > `Sesión 4` 

## Sesión 1: Herramientas de compresión y búsqueda de archivos

<div style="text-align: justify;">

### 1. Objetivos :dart:

 - Conocer las funcionalidades de *gzip*
 - Hacer agrupaciones con *tar*
 - Conocer las herramientas de busqueda de archivos

### 2. Contenido :blue_book:

[`Retos`](Retos/README.md)

 ---

 #### <ins> Compresión de archivos </ins>

 <img src="https://image.flaticon.com/icons/png/512/28/28912.png" align="right" width="100"> 


*Gzip*, la herramienta de compresión de datos, fue creada por los programadores Jean-Loup Gailly y Mark Adler, que llevaron a cabo la misión de desarrollar una alternativa de alto rendimiento para el programa compress de Unix. Tanto sus funciones como su procedimiento están definidas en el estándar de POSIX, que se encarga de la compresión de archivos mediante el algoritmo adaptativo Lempel-Ziv. Tanto el algoritmo como su ampliación, llevada a cabo por el científico Terry Welch, estuvieron protegidas durante años (hasta 2003) por patentes estadounidenses, lo que se convirtió en un motivo más que decisivo para trabajar en una alternativa adecuada para este. En ello, el foco de atención se centró en hacer que la compresión con gzip fuera más eficiente de lo que era con la herramienta de Unix, algo que se logró con éxito.

- *-1 ... -9* Define el grado de compresión (1–9): el valor 1 se aplica a la compresión más débil y más rápida y el valor 9 a la mejor compresión, pero también más lenta; 5 es el valor predeterminado
- *-r* Hace un recorrido de manera recursiva por el directorio (incluyendo los subdirectorios) y comprime o descomprime todos los archivos que contiene
- *-f* Fuerza la compresión con gzip y sobreescribe, en caso necesario, los archivos existentes con los mismos nombres de archivo
- *-d* Descomprime el archivo seleccionado en el directorio actual
- *-k* Impide la eliminación del archivo original
- *-l* Muestra datos como, p. ej., la tasa de compresión de un archivo comprimido
- *-c* Hace que el archivo comprimido vuelva a su versión estándar; por lo general, la pantalla asociada a la línea de comandos
- *-q* Desactiva todas las notificaciones de gzip
- *-t* Comprueba la integrad del archivo comprimido
- *-h* Ofrece una lista de todas las opciones disponibles

*Ejemplos:* <br>

- gzip ejemplo.js
- gzip -d ejemplo.js.gz

--- 

#### <ins> Agrupación de archivos </ins>

 <img src="https://i.pinimg.com/736x/8a/a5/c1/8aa5c1e1bade77aa399fcfd4d385fca1.jpg" align="right" width="100"> 

*Tar* significa “Tape Archive” en inglés, lo que en español sería archivo de cinta de grabación, y se utiliza para comprimir una colección de archivos y carpetas.

En la mayoría de los casos, una vez que se realiza la compresión utilizando Tar, se obtiene un archivo .tar. Si se realiza una compresión adicional usando gzip, se tendrá como resultado un archivo .tar.gz.

Con el comando Tar, puedes comprimir y descomprimir archivos. Este comando viene con múltiples opciones, aunque hay algunas que quizás necesites recordar.

Las ventajas del comando Tar de Linux:
- Tar, cuando se trata de compresión, tiene una relación de compresión del 50%, lo que significa que comprime eficientemente.

- Reduce drásticamente el tamaño de las carpetas y archivos comprimidos.

- Tar en Linux no altera las características de los archivos y directorios. Los permisos y otras particularidades permanecen intactos mientras se comprime.

- El comando Tar está disponible en las versiones más comunes de Linux. También se encuentra disponible en el firmware de Android, así como en versiones compatibles de Linux más antiguas.

- *-c* Crear un nuevo archivo .tar
- *-v* Muestra una descripción detallada del progreso de la compresión
- *-f* Nombre del archivo  
- *-z* Compresión gzip
- *-C* Extraer archivos en un directorio diferente
- *-x* Extraer el archivo
- *-r* Actualizar o agregar un archivo o directorio en un archivo .tar existente

__Ejemplos__
- tar cf back.tar backup/*
- tar tf prueba.tar
- tar -x prueba.tar

--- 

#### <ins> Comandos de busqueda de archivos </ins>

*find*

El comando más común utilizado para encontrar y filtrar archivos en Linux es a través del comando find. El diseño básico de este comando es el siguiente:

- find <directorio de inicio> <flags> <directorio final>

__Directorio de inicio__:  es el punto de origen de donde deseas iniciar la búsqueda. Puede ser reemplazado con varios argumento, incluyendo:
- / (slash) – busca en todo el sistema.
- . (punto) – busca en la carpeta en la que estás trabajando actualmente (directorio actual).
- ~ (tilde) – para buscar desde tu directorio home.

__Opciones__ Se usa para encontrar el archivo. Este podría ser el nombre, tipo, fecha de creación del archivo, etc.

- *-name* Busca el archivo por nombre fuertemente tipado
- *-not* Excluye alguna palabra de la busqueda de archivos
- *-delate* Elimina el archivo después de encontrarlo

- **
__Directorio final__ Es donde se especificará el término de búsqueda relevante.



*Ejemplos*
- find . -name archivo.txt
- find . -name ".txt"
- find . -name virus.sh -delate



[`Anterior`](../Sesion-03/README.md) | [`Anterior`](../Sesion-05/README.md) 

 </div>