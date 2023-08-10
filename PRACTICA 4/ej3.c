

/*3. Pedir al usuario que ingrese 10 números reales, validar que los mismos sean valores
positivos, si el usuario ingresa un número negativo o nulo, pedir reingresar el número
(repetir el ingreso de dicho número mientras el número no sea correcto). Informar al
usuario la suma de los 10 números ingresados.*/

#include <stdio.h>

int main() {
    float number, suma = 0;
    printf("Ingrese 10 numeros reales\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &number);
        while (number <= 0 ) {
            printf("Ha ingresado un numero negativo o nulo, ingrese uno positivo\n");
            scanf("%f", &number);
        }
        suma += number;

    }
    printf("La suma de los 10 numeros ingresados es %.2f\n", suma);
    return 0;
}
