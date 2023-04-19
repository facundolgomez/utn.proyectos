
//3- Ingresar los lados de un triángulo calcular su perímetro e imprimirlo
#include <stdio.h>

int main() {
    float lado1, lado2, lado3, perimetro;
    printf("ingrese los lados de un triangulo\n");
    scanf("%f %f %f", &lado1, &lado2, &lado3);
    perimetro = lado1 + lado2 + lado3;
    printf("su perimetro es %f\n", perimetro);
    return 0;


}