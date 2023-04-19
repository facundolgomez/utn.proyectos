
/*2- Ingresar por teclado dos números, determinar cuál es el mayor y visualizarlo en
pantalla. Informar también si los números son iguales.*/

#include <stdio.h>

int main() {
    int num1, num2;
    printf("ingrese dos numeros enteros\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2) {
        printf("el mayor es %d\n", num1);
    }
    else if (num1 == num2) {
        printf("los numeros son iguales\n");
    }
    else {
        printf("el mayor es %d\n", num2);
    }
    return 0;
        
        
}