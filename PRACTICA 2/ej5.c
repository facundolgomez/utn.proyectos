
/*5- Escriba un programa que pida ingresar un número y a continuación escriba en la
consola si el mismo es par o impar.*/

#include <stdio.h>

int main() {
    int number;
    printf("ingrese un numero\n");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("el numero es par\n");
    }
    else {
        printf("el numero es impar\n");
    }
    return 0;
}