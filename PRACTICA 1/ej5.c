
/*5- El usuario debe poder ingresar los lados de un rectángulo y el programa calcula con
esos datos la diagonal principal del rectángulo, superficie y perímetro. Mostrar al
usuario los resultado*/

#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2, diagonal, superficie, perimetro;
    printf("ingrese los lados de un rectangulo\n");
    scanf("%f %f", &lado1, &lado2);
    diagonal = pow(lado1, 2) + pow(lado2, 2);
    diagonal = sqrt(diagonal);
    superficie = (lado1 * lado2);
    perimetro = ((lado1 * 2) + (lado2 * 2));
    printf("la diagonal es %.1f, la superficie es %.1f, el perimetro es %.1f\n", diagonal, superficie, perimetro);
    return 0;



}