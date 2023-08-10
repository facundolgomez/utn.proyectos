

//7. Diseñe un algoritmo que sume los 20 primeros números impares.

#include <stdio.h>

int main() {
    int sumaNumeros = 0;
    for(int i = 1; i < 40; i++) {
        if(i % 2 != 0) {
            sumaNumeros += i;
        }

    }
    printf("la suma es %d\n", sumaNumeros);
    return 0;
}