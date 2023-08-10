
//2. Imprimir los números del 1 al 10 uno abajo del otro saltando de a dos.

#include <stdio.h>

int main() {
    for(int i = 1; i < 11; i+= 2) {
        printf("%d\n", i);
    }
    return 0;
}
