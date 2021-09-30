#include <stdio.h>

int main(){

    int calificaciones[10] = {8,6,7,9,10,7,9,8,5,10};
    int i;

    for(i = 0; i<10; i++){
        printf("La calificacion numero %d es %d \n", i, calificaciones[i]);
    }

    int numeros_cuadrados[15];

    for(i = 0; i < 10; i++)
        numeros_cuadrados[i] = (i+1)*(i+1);

    for(i = 0; i < 10; i++)
        printf("El cuadrado de %d es %d", i+1, numeros_cuadrados[i]);
        
}