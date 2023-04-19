
/*4- Ingresar por teclado tres números, determinar cuál es el mayor y visualizarlo en
pantalla.*/

#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("ingrese 3 numeros\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    if ((num1 > num2) && (num1 > num3)) {
        printf("el mayor es %d\n", num1);
    }
    else if ((num2 > num1) && (num2 > num3)) {
        printf("el mayor es %d\n", num2);
    }
    else {
        printf("el mayor es %d\n", num3);
    }
    return 0;
}