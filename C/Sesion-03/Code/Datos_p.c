#include <stdio.h>

int main(){

    int numero_entero = -54; // Enteros  
    printf("Esta es una variable entera que vale: %d \n", numero_entero);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(int));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(int)*8);

    short variable_short = -54; // Enteros  
    printf("Esta es una variable entera que vale: %d \n", variable_short);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(short));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(short)*8);


    long int variable_long = -54; // Enteros  
    printf("Esta es una variable entera que vale: %d \n", variable_long);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(long int));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(long int)*8);


    long long int variable_long_long = -54; // Enteros  
    printf("Esta es una variable entera que vale: %d \n", variable_long_long);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(long long int));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(long long int)*8);
    
    float variable_float= 3.141592; 
    printf("Esta es una variable entera que vale: %f \n", variable_float);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(float));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(float)*8);

    double variable_double= 3.141592; 
    printf("Esta es una variable entera que vale: %lf \n", variable_double);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(double));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(double)*8);
    
    long double variable_long_double= 3.141592; 
    printf("Esta es una variable entera que vale: %llf \n", variable_long_double);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(long double));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(long double)*8);
    
    char variable_char = 'a'; 
    printf("Esta es una variable entera que vale: %c \n", variable_char);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(char));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(char)*8);

    unsigned int variable_unsigned_int = 54; // Enteros  
    printf("Esta es una variable entera que vale: %u \n", variable_unsigned_int);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(unsigned int));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(unsigned int)*8);

    unsigned variable_unsigned = 54; // Enteros  
    printf("Esta es una variable entera que vale: %u \n", variable_unsigned);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(unsigned));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(unsigned)*8);

    unsigned short variable_unsigned_short = 54; // Enteros  
    printf("Esta es una variable entera que vale: %u \n", variable_unsigned_short);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(unsigned short));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(unsigned short)*8);

    unsigned long int variable_unsigned_long_int = 54; // Enteros  
    printf("Esta es una variable entera que vale: %lu \n", variable_unsigned_long_int);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(unsigned long int));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(unsigned long int)*8);

    unsigned long long int  variable_unsigned_long_long_int = 54; // Enteros  
    printf("Esta es una variable entera que vale: %llu \n", variable_unsigned_long_long_int);
    printf("Las variables de tipo entero tienen %lu bytes\n", sizeof(unsigned long long int));
    printf("Las variables de tipo entero tienen %ld bits\n", sizeof(unsigned long long int)*8);

    return 0;
}