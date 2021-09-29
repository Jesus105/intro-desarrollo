#include <stdio.h>
#include <string.h>

typedef struct 
{

    char nombre[50];
    int edad;
    float estatura;

} PERSONA;

PERSONA llenar_persona(char *, int, float);

int main(){

    return 0;
}

PERSONA llenar_persona(char * nombre , int edad, float estatura){

    PERSONA persona;

    persona.edad = edad;
    persona.estatura = estatura;
    strcpy(persona.nombre, nombre);

    return persona;

}


