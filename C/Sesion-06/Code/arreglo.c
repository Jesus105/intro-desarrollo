#include <stdio.h>
#define TAM 100


int main(){

    int arreglo[TAM] = {345, 70, 433, 37, 131, 221, 109, 491, 262, 495, 229, 161, 281, 342, 425, 203, 454, 357, 244, 353, 250, 338, 452, 211, 42, 313, 90, 252, 65, 462, 203, 174, 478, 160, 176, 327, 198, 401, 118, 38, 111, 335, 409, 308, 213, 479, 76, 130, 362, 400, 19, 214, 100, 380, 214, 85, 462, 265, 213, 435, 10, 327, 88, 109, 216, 220, 360, 2, 247, 1, 105, 498, 60, 463, 324, 156, 8, 380, 222, 431, 188, 89, 285, 396, 284, 229, 352, 310, 120, 242, 262, 401, 294, 226, 286, 443, 42, 239, 265, 493};

    int i,j, buffer;

    for(i = 1; i<TAM; i++)
        for(j = 0; j < TAM - 1; j++){
            if(arreglo[j]>arreglo[j+1]){
                buffer = arreglo[j];
                arreglo[j] = arreglo[j+1];
                arreglo[j+1] = buffer;
            }
        }


    return 0;
}