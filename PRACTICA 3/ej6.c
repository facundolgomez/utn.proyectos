
//6. Suma de los 10 primeros números múltiplos de tres

#include <stdio.h>

int main() {
    int suma = 0;
    for(int i = 0; i < 28; i += 3) {
        suma += i;
    }
    printf("La suma es %d\n", suma);
    return 0;
}

