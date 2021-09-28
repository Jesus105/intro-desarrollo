#include <stdio.h>

int calificaciones[10] = {8,5,4,6,7,8,8,9,10,6};

int main(){

    int i;

    for(i = 0; i < 10; i++)
        printf("El numero de lista %d saco %d\n", i, calificaciones[i]);

    return 0;
}