
//2- Ingresar tres valores, sumarlos e imprimir esa suma.

#include <stdio.h>

int main() {
    float a, b, c, suma;
    printf("ingrese 3 valores\n");
    scanf("%f %f %f", &a, &b, &c);
    suma = a + b + c;
    printf("la suma es %f\n", suma);
    return 0;

}