
/*7- Ingresar el valor de una venta y aplicar el 15% de descuento si el valor es >= 100000 y
un 10% si es menor. Validar que la venta sea mayor que 0, caso contrario informar
dicha situación.*/

#include <stdio.h>

int main() {
    float venta, valorTotal = 0;
    printf("ingrese valor de la venta\n");
    scanf("%f", &venta);
    while (venta <= 0) {
        printf("ingrese un valor de venta mayor a 0\n");
        scanf("%f", &venta);
    }
    if (venta >= 100000) {
        valorTotal = (venta * 15 / 100);
    }
    else if (venta < 100000) {
        valorTotal = (venta * 10 / 100);
    }
    printf("el valor total de la venta es %.2f\n", valorTotal);
    return 0;

}