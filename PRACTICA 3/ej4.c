
//4. Imprimir la suma de los números impares que se encuentran entre los números 1 y 10.

#include <stdio.h>

int main() {
    int suma = 0;
    for(int i = 1; i < 11; i += 2) {
        suma += i;
    }
    printf("%d", suma);
    return 0;
}