#include <stdio.h>
#include <string.h>

    /*struct SAMPLE{
        int entero;         // 4 Bytes
        float flotante;     // 4 Bytes
        char caracter;      // 1 Byte
        char cadena[10];    // 10 Bytes   
        int vector[10];     // 40 Bytes
    }; // 59 Bytes*/

    struct EMPLEADO{
        char nombre[20];
        char apellido[20];
        int sueldo;
        char * posicion;
        int edad;
        int anios_servicio;
    };

int main(){
/*
    struct SAMPLE sample;

    sample.entero = 15;
    sample.flotante = 3.1416;
    strcpy(sample.cadena, "Hola");

    printf("%ld \n", sizeof(sample.vector));
    printf("La cadena es: %s\n", sample.cadena);*/

    struct EMPLEADO empleado1;

    strcpy(empleado1.nombre, "Juan");
    strcpy(empleado1.apellido, "Martinez");
    empleado1.sueldo = 50000;

    struct EMPLEADO empleado2;

    strcpy(empleado2.nombre, "Pablo");
    strcpy(empleado2.apellido, "Martinez");
    empleado2.sueldo = 20000;

    printf("El empleado 1 se llama %s, y gana $ %d pesos al mes\n", empleado1.nombre, empleado1.sueldo);

    return 0;
}