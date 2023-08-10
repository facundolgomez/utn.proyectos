
/*8. Al finalizar cada día, los vendedores de un comercio rinden al dueño sus ventas para
calcular la comisión que cobrarán. Los vendedores son 5, codificados de la ‘A’ a la ‘E’, y
no se sabe cuántas ventas realizó cada uno. Los datos vienen ordenados y agrupados
por vendedor. Por cada vendedor se ingresan cada uno de los importes de sus ventas.
Para indicar fin de cada uno de ellos, se ingresa un valor de venta igual a 0. Se solicita
mostrar para cada uno de los vendedores: su código, y la comisión que cobrará, que es
el 2,5% de la suma de sus ventas.*/

#include <stdio.h>

int main() {
    
    float importeVenta, sumaVentas, comision = 0;
    for (char i = 65; i <= 69; i++) {
        sumaVentas = 0;
        printf("Vendedor %c , ingrese los importes de sus ventas, si desea dejar de cargar ventas teclee 0\n", i);
        do {
            scanf("%f", &importeVenta);
            sumaVentas +=  importeVenta;
            
        } while ((importeVenta != 0) && (importeVenta >= 1));
        

        comision = (sumaVentas * 2.5) / 100;
        printf("Vendedor: %c\nSu comision es de $%.2f\n", i, comision);
        


    }

    return 0;

}