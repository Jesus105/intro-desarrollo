#include <stdio.h>


int main(){

    int i;

    /*Manejar arreglos de la forma normal*/

    int arreglo[5] = {1,2,3,4,5};

    for(i = 0; i<5; i++)
        printf("El valor del arreglo en el indice %d es: %d\n", i, arreglo[i]);


    /*Manejar arreglos con aritmética de punteros*/

    int arreglo_2[5] = {1,2,3,4,5};
    int * puntero = arreglo;

    for(i = 0; i<5; i++)
        printf("El valor del arreglo en el indice %d es: %d\n", i, * (arreglo + i));



    return 0;
}