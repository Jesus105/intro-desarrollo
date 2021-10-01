#include <stdio.h>


int main(){

    int a = 5;

    int * puntero_a = &a;

    printf("La direccion de memoria de la variable a es: %p \n", &a);
    printf("La direccion de memoria de la variable a es: %p \n", puntero_a);

    printf("El valor de a es: %d", a);
    printf("El valor de a accedido desde la dirección de memoria es: %d", * puntero_a);


    // %p nos sirve para imprimir direcciones de memoria

    /*
    
    La salida del programa debería ser algo similar  a:
    --> La dirección de memoria de la variable a es: 0x45654BFC89D
    --> La dirección de memoria de la variable a es: 0x45654BFC89D

    --> El valor de a es: 5
    --> El valor de a accedido desde la dirección de memoria es: 5
    */


    return 0;
}