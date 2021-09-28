#include <stdio.h>

int main(){

    int variable_control=1;
    int numero, valor_auxiliar;

    numero = valor_auxiliar = 784;

    while(numero != (valor_auxiliar * valor_auxiliar)){
        valor_auxiliar = (((valor_auxiliar * valor_auxiliar)+numero)/(2*valor_auxiliar));
    }

    printf("%d \n", valor_auxiliar);

    return 0;
}