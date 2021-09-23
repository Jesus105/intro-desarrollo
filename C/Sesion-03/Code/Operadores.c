#include <stdio.h>

int main(){

    //Operadores

    // Operadores aritméticos
    int num_A, num_B;

    num_A = 10;
    num_B = 8;

    float num_C = 7.0 / 8.0;

    //Suma
    printf("La suma de A + B = %d \n", num_A+num_B);
    //Resta
    printf("La resta de A - B = %d \n", num_A-num_B);
    // Multiplicación
    printf("La multiplicacion de A * B = %d \n", num_A*num_B);
    // División
    printf("La division de A / B = %1.2f \n", num_C);
    // Módulo
    printf("El modulo de A % B = %d \n", num_A%num_B);

    putchar('\n');

    // Operadores lógicos 

    num_A = 1; 
    num_B = 0;
    
    // AND
    printf("La conjunción de A y B resulta: %d \n", num_A & num_B);

    // OR 
    printf("La disyuncion de A o B resulta: %d \n", num_A | num_B);

    // NOT
    printf("La neganción de A es: %d \n", !num_A);

    // XOR 
    printf("La disyuncion exclusiva de A y B resulta: %d \n", num_A ^ num_B);

    // Operadores de corto circuito

    // AND
    printf("La conjunción de A y B resulta: %d \n", num_A && num_B);

    // OR 
    printf("La disyuncion de A o B resulta: %d \n", num_A || num_B);

    putchar('\n');


    // Operadores de comparación

    num_A = 7; 
    num_B = 7;

    printf("A > B: %d \n", num_A > num_B);
    printf("A < B: %d \n", num_A < num_B);

    
    printf("A >= B: %d \n", num_A >= num_B);
    printf("A <= B: %d \n", num_A <= num_B);

    
    printf("A = B: %d \n", num_A == num_B);
    printf("A diferente de B: %d \n", num_A != num_B);

    putchar('\n');

    // Operadores de asignación

    num_A = 8;
    num_B = 5;

    printf("A se iguala con B: %d \n", num_A = num_B);
    printf("A += B: %d \n", num_A += num_B); //--> num_A = num_A + num_B
    printf("A -= B: %d \n", num_A -= num_B); //--> num_A = num_A - num_B
    printf("A *= B: %d \n", num_A *= num_B); //--> num_A = num_A * num_B
    printf("A /= B: %d \n", num_A /= num_B); //--> num_A = num_A / num_B
    printf("A % = B: %d \n", num_A %= num_B); //--> num_A = num_A % num_B
    printf("A++: %d \n", (num_A++)); //--> num_A = num_A + 1
    printf("A--: %d \n", (num_A--)); //--> num_A = num_A - 1

    putchar('\n');

    // Operadores de bit a bit
    short bit_A = 0b0000000010101010; //000010101010000
    short bit_B = 0b0000000011110000;
 
    printf("A AND B: %d\n",bit_A&bit_B);
    printf("A OR B: %d\n",bit_A|bit_B);
    printf("A XOR B: %d\n",bit_A^bit_B);

    //numero corrimiento (>> // <<) numero de bits a mover

    printf("B >> 4: %d\n",bit_B>>4);
    printf("A << 4: %d\n",bit_A<<4);

    // Operador ternario
    //(expresión ? sí se cumple : no se cumple)

    //Punteros
    // & Operador de dirección
    // * Operador de indirección


    return 0;
}