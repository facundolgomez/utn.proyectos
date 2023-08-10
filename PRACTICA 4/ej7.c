

/*7. Ingresar un conjunto de números reales distintos de cero. Para finalizar la entrada de
datos, ingresar un cero. Determinar e informar la cantidad de números que lo forman.*/

#include <stdio.h>

int main () {
    float number;
    int cont = 0;
    printf("Ingrese numeros Reales, para finalizar teclee 0\n");
    do {
        scanf("%f", &number);
        cont++;

    } while (number != 0);

    printf("La cantidad de numeros ingresados es: %d\n", cont - 1);
    return 0;
    

}