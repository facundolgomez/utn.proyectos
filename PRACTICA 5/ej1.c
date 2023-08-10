
/*1. Declarar un array de tipo entero de 5 elementos, asignarles un valor, mostrar de la
forma: Indice: X, Valor: Y en el orden ingresado y de atras hacia adelante.*/

#include <stdio.h>

int main() {
    int myArray[5] = {6,3,2,8,9};

    for (int i = 0; i < 5; i++) {
        printf("Indice : %d, Valor: %d\n", i, myArray[i]);
    }

    printf("------------------\n");

    for (int i = 4; i > -1; i--) {
        printf("Indice : %d, Valor: %d\n", i, myArray[i]);
    }


    
    return 0;
    
    
}