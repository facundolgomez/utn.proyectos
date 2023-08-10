/*Ejercicio Integrador 2
Un empleado de un comercio debe registrar las ventas del día. Para ello, realizar un programa
que permita ingresar los datos de las ventas realizadas. Primero, requerir al empleado la
cantidad de ventas que necesita registrar. Luego, para cada venta deberá ingresar el DNI del
cliente (validar que dicho número no sea menor que 1000000 ni mayor que 99999999).
Ingresar el monto de la venta y el medio de pago: 1 - Efectivo, 2 - Tarjeta de crédito, si la venta
fue con tarjeta, pedir que ingrese una opción de las siguientes: 1 - Visa, 2 - American Express, 3
- Mercado Pago, 4 - Cabal. Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o
12). El interés por pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas
y 8% para 6 y 12 cuotas, por lo se deberá calcular el importe a abonar dependiendo si la venta
es en efectivo o en cuotas. Validar que todos los datos ingresados por el empleado para una
venta sean correctos, en caso contrario informar la situación y finalizar la carga de la venta
actual. Para cada venta, presentar un resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784
Al finalizar el registro, mostrar la suma total de las ventas ingresadas.*/



#include <stdio.h>

int main() {
    int cantVentas, medioDePago, tipoTarjeta, cantCuotas;
    long DNI;
    float montoVenta, sumaTotalVentas = 0, importeConInteres = 0;
    printf("Registre la cantidad de ventas realizas\n");
    scanf("%d", &cantVentas);
    for (int i = 0; i < cantVentas; i++) {
        printf("Ingrese el DNI del cliente %d\n", i);
        scanf("%ld", &DNI);
        while ((DNI < 1000000) || (DNI > 99999999)) {
            printf("Ingrese un valor correcto de DNI\n");
            scanf("%ld", &DNI);
        }
        printf("Ingrese el monto de la venta\n");
        scanf("%f", &montoVenta);
        while(montoVenta < 0) {
            printf("El monto de la venta no puede ser un numero negativo\n");
            scanf("%f", &montoVenta);
        }
        printf("Ingrese el medio de pago.. Teclee 1 para Efectivo, 2 para Tarjeta de Credito\n");
        scanf("%d", &medioDePago);
        if (medioDePago == 1) {
             sumaTotalVentas += montoVenta;
            printf("DNI : %ld\nMedio de pago: Efectivo\nTotal : $%.2f\n", DNI, montoVenta);

        }
        else if (medioDePago == 2) {
            printf("Ingrese el tipo de Tarjeta : 1 - Tarjeta Visa, 2 - American Express, 3 - Mercado Pago, 4 - Cabal\n");
            scanf("%d", &tipoTarjeta);
            switch (tipoTarjeta) {
                case 1:
                printf("Eligio Tarjeta Visa\n");
                printf("Ingrese la cantidad de cuotas en las que abonara.. 1, 3, 6 o 12\n");
                scanf("%d", &cantCuotas);
                switch (cantCuotas) {
                    case 1:
                    sumaTotalVentas += montoVenta;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Visa\nCuotas : 1\nTotal : $%.2f\n\n", DNI, montoVenta);
                    break;

                    case 3:
                    importeConInteres = montoVenta - (montoVenta * 4 / 100);
                    sumaTotalVentas += importeConInteres;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Visa\nCuotas : 3\nTotal : $%.2f\n\n", DNI, importeConInteres);
                    break;

                    case 6:
                    importeConInteres = montoVenta - (montoVenta * 8 / 100);
                    sumaTotalVentas += importeConInteres;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Visa\nCuotas : 6\nTotal : $%.2f\n\n", DNI, importeConInteres);
                    break;

                    case 12:
                    importeConInteres = montoVenta - (montoVenta * 8 / 100);
                    sumaTotalVentas += importeConInteres;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Visa\nCuotas : 12\nTotal : $%.2f\n\n", DNI, importeConInteres);
                    break;
                }
                break;

                case 2:
                printf("Eligio Tarjeta American Express\n");
                printf("Ingrese la cantidad de cuotas en las que abonara.. 1, 3, 6 o 12\n");
                scanf("%d", &cantCuotas);
                switch (cantCuotas) {
                    case 1:
                    
                    sumaTotalVentas += montoVenta;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Visa\nCuotas : 1\nTotal : $%.2f\n", DNI, montoVenta);
                    break;

                    case 3:
                    importeConInteres = montoVenta - (montoVenta * 4 / 100);
                    sumaTotalVentas += importeConInteres;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: American Express\nCuotas : 3\nTotal : $%.2f\n", DNI, importeConInteres);
                    break;

                    case 6:
                    importeConInteres = montoVenta - (montoVenta * 8 / 100);
                    sumaTotalVentas += importeConInteres;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: American Express\nCuotas : 6\nTotal : $%.2f\n", DNI, importeConInteres);
                    break;

                    case 12:
                    importeConInteres = montoVenta - (montoVenta * 8 / 100);
                    sumaTotalVentas += importeConInteres;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: American Express\nCuotas : 12\nTotal : $%.2f\n", DNI, importeConInteres);
                    break;
                }
                break;

                case 3:
                printf("Ingreso Tarjeta Mercado Pago\n");
                printf("Ingrese la cantidad de cuotas en las que abonara.. 1, 3, 6 o 12\n");
                scanf("%d", &cantCuotas);
                switch (cantCuotas) {
                    case 1:
                    
                    sumaTotalVentas += montoVenta;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Visa\nCuotas : 1\nTotal : $%.2f\n", DNI, montoVenta);
                    break;

                    case 3:
                    importeConInteres = montoVenta - (montoVenta * 4 / 100);
                    sumaTotalVentas += importeConInteres;
                   printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Mercado Pago\nCuotas : 3\nTotal : $%.2f\n", DNI, importeConInteres);
                    break;

                    case 6:
                    importeConInteres = montoVenta - (montoVenta * 8 / 100);
                    sumaTotalVentas += importeConInteres;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Mercado Pago\nCuotas : 6\nTotal : $%.2f\n", DNI, importeConInteres);
                    break;

                    case 12:
                    importeConInteres = montoVenta - (montoVenta * 8 / 100);
                    sumaTotalVentas += importeConInteres;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Mercado Pago\nCuotas : 12\nTotal : $%.2f\n", DNI, importeConInteres);
                    break;
                }
                break;

                case 4:
                printf("Ingreso Tarjeta Cabal\n");
                printf("Ingrese la cantidad de cuotas en las que abonara.. 1, 3, 6 o 12\n");
                scanf("%d", &cantCuotas);
                switch (cantCuotas) {
                    case 1:
                    
                    sumaTotalVentas += montoVenta;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Visa\nCuotas : 1\nTotal : $%.2f\n", DNI, montoVenta);
                    break;

                    case 3:
                    importeConInteres = montoVenta - (montoVenta * 4 / 100);
                    sumaTotalVentas += importeConInteres;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Cabal\nCuotas : 3\nTotal : $%.2f\n", DNI, importeConInteres);
                    break;

                    case 6:
                    importeConInteres = montoVenta - (montoVenta * 8 / 100);
                    sumaTotalVentas += importeConInteres;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Cabal\nCuotas : 6\nTotal : $%.2f\n", DNI, importeConInteres);
                    break;

                    case 12:
                    importeConInteres = montoVenta - (montoVenta * 8 / 100);
                    sumaTotalVentas += importeConInteres;
                    printf("DNI : %ld\nMedio de pago: Tarjeta de Credito\nTarjeta: Cabal\nCuotas : 12\nTotal : $%.2f\n", DNI, importeConInteres);
                    break;
                }

                break;

                default:
                printf("Ingreso un numero incorrecto de Tarjeta\n");
                
            }
        }



    }
    printf("La suma total de las ventas realizas es de $%.2f\n",sumaTotalVentas);

    return 0;
}
