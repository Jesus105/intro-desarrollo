#include <stdio.h>

int main(){

    // Salidas
    printf("Hola me llamo Jes%cs. \n",163);
    printf("%c \n", 162);
    printf("%d\n", 789); //Entero
    printf("%f\n", 3.1416); //Flotante

    putchar('\n');

    puts("Hola me llamo Jesus");
    puts("Tengo 18 anios");
    
    putchar('\n');

    putchar('H');
    putchar('o');
    putchar('l');
    putchar('a');
    putchar('\n');

    //Entradas

    puts("Ingrese un valor entero: ");
    int entrada;

    scanf("%d", &entrada);

    printf("El valor que se ingreso fue: %d \n", entrada);

    putchar('\n');

    puts("Ingrese un valor decimal: ");
    float entrada_float;

    scanf("%f", &entrada_float);

    printf("El valor que se ingreso fue: %1.3f \n", entrada_float);

    // STRINGS //
    char cadena[15];

    puts("Ingrese su nombre:");

    scanf("%s", &cadena);

    printf("El nombre del usuario es: %s \n", cadena);

    return 0;

}