
/*1- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla.*/

#include <stdio.h>

int main() {
    float num1, num2;
    printf("ingrese dos numeros\n");
    scanf("%f %f", &num1, &num2);
    if (num1 > num2) {
        printf("el mayor es %.1f\n", num2);
    }
    else {
        printf("el mayor es %.1f\n", num2);
    }
    return 0;
}
