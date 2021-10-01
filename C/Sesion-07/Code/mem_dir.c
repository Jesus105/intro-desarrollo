#include <stdio.h>


int main(){

    int a = 5;

    printf("La direccion de memoria de la variable a es: %p \n", &a);
    // %p nos sirve para imprimir direcciones de memoria

    /*
    
    La salida del programa debería ser algo similar  a:
    --> La dirección de memoria de la variable a es: 0x45654BFC89D

    */


    return 0;
}