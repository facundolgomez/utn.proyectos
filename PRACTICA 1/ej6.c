

/*6 - Ingresar dos valores, calcular su suma, su producto y la resta del 1ro menos el 2do
valor ingresado, imprimir los resultados*/

#include <stdio.h>

int main() {

    float num1, num2, suma = 0, producto = 0, resta = 0;
    printf("ingrese 2 valores\n");
    scanf("%f %f", &num1, &num2);
    suma = num1 + num2;
    producto = num1 * num2;
    resta = num1 - num2;
    printf("la suma es %.2f, el producto es %.2f, la resta es %.2f\n", suma, producto, resta);
    return 0;

}

