

//11. Imprimir por consola 10 renglones, de manera que se visualice la siguiente salida:

#include <stdio.h>

int main() {
    for(int i = 0; i < 10; i++) {
        
        if (i % 2 == 1) {
            printf("@");

        }
        printf("@\n");
        
    }
    return 0;
}