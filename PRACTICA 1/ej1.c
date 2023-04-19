
//1- Ingresar dos valores enteros, sumarlos e imprimir esta suma.

#include <stdio.h>

int main() {
    int num1, num2, resultado;
    printf("ingrese dos numeros enteros\n");
    scanf("%d %d", &num1, &num2);
    resultado = num1 + num2;
    printf("el resultado es %d\n", resultado);
    return 0;


}