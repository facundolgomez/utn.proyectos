
/*4- Solicitar ingresar dos lados de un triángulo rectángulo y calcular, la hipotenusa, el
perímetro, la superficie. Imprima los resultados de las operaciones solicitadas*/

#include <stdio.h>
#include <math.h>

int main() {
    float altura, base, hipotenusa = 0, perimetro = 0, superficie;
    printf("ingrese los valores de dos lados de un triangulo\n");
    scanf("%f %f", &altura, &base);
    hipotenusa = pow(altura, 2) + pow(base, 2);
    hipotenusa = sqrt(hipotenusa);
    perimetro = altura + base + hipotenusa;
    superficie = ((base * altura) / 2);
    printf("la hipotenusa es %.2f, el perimetro es %.2f, la superficie es %.2f\n", hipotenusa, perimetro, superficie);
    return 0;
}


