
//8. Escriba un programa que lea un número n1, y escriba la tabla de multiplicar del número.

#include <stdio.h>

int main() {
    int num;
    printf("Ingrese un numero positivo\n");
    scanf("%d", &num);
    for(int i = 1; i < 11; i++) {
        printf("%d * %d = %d\n", num, i, (num * i));
    }
    return 0;
}