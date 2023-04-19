

/*7- Ingresar el valor de la hora y el tiempo trabajado por un comerciante, calcular su
sueldo e imprimirlo*/

#include <stdio.h>

int main() {
    float pago, tiempo, sueldo;
    printf("ingrese el valor de la hora y el tiempo trabajado\n");
    scanf("%f %f", &pago, &tiempo);
    sueldo = pago * tiempo;
    printf("su sueldo es de %.2f\n", sueldo);
    return 0;
}