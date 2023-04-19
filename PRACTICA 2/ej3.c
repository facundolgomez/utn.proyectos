

// 3- Dado un número introducido por el usuario, indicar si este es positivo, negativo o nulo.

#include <stdio.h>

int main() {
    int num;
    printf("ingrese un numero\n");
    scanf("%d", &num);
    if (num > 0) {
        printf("mi numero es positivo\n");
    }
    else if (num == 0) {
        printf("mi numero es neutro\n");
    }
    else
    {
        printf("mi numero es negativo\n");
    }
    return 0;
    
}