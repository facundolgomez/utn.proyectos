
/*6. Ingrese por teclado la facturación de los últimos 6 meses. Informar:
- La facturación total
- El promedio de facturación
- La máxima facturación
- La mínima facturación*/

#include <stdio.h>

int main() {
    float facturacion[6];
    float factTotal = 0, promFact = 0, maxFact = 0,  minFact = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%f", &facturacion[i]);
        if (i == 0) {
        maxFact = facturacion[i];
        minFact = facturacion[i];
        }
        factTotal += facturacion[i];
        if (facturacion[i] > maxFact) {
            maxFact = facturacion[i];
        }
        else if (facturacion[i] < minFact) {
            minFact = facturacion[i];
        }
    }
    promFact = factTotal / 6;

    printf("La facturacion total es %.2f\nEl promedio de facturacion es %.2f\nLa maxima facturacion es %.2f\nLa minima facturacion es %.2f\n", factTotal, promFact, maxFact, minFact);
    return 0;

}

