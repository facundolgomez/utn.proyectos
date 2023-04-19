

/*12- Realizar un programa que permita registrar los datos para una venta de $4600. Para
ello, se le pedirá al usuario que ingrese su DNI, validar que dicho número no sea menor
que 1000000 ni mayor que 99999999. Luego, requerir al usuario que seleccione el
medio de pago: 1-Efectivo, 2-Tarjeta de crédito, si selecciona tarjeta, pedir que ingrese
una opción de las siguientes: 1-Visa, 2-American Express, 3-Mercado Pago, 4-Cabal.
Además, requerir la cantidad de cuotas en las que abonará (1, 3, 6 o 12). El interés por
pagar en cuotas será de: 0 interés para efectivo o 1 cuota, 4% para 3 cuotas y 8% para
6 y 12 cuotas. Validar que todos los datos ingresados por el usuario sean correctos, en
caso contrario informar la situación y finalizar programa. Por último, presentar un
resumen de la operación, por ejemplo:
DNI: 38.456.123
Medio de pago: Tarjeta de crédito
Tarjeta: Cabal
Cuotas: 3
Total: $4784*/


#include <stdio.h>

int main() {
    long DNI;
    int medioPago, tipoTarjeta, cantCuotas, Venta = 4600, total = 0;

    printf("Ingrese su DNI\n");
    scanf("%ld", &DNI);
    while ((DNI < 1000000) || (DNI > 99999999)) {
        printf("ingrese un numero de DNI correcto\n");
        scanf("%ld", &DNI);
    }
    printf("Seleccione el medio de pago\n1-Efectivo\n2-Tarjeta de credito\n");
    scanf("%d", &medioPago);
    if (medioPago == 1) {
        total = total + Venta;
        printf("total a pagar %d\n", total);

    }
    else if (medioPago == 2) {
        printf("Seleccione el tipo de tarjeta a usar\n1-Visa\n2-American Express\n3-Mercado Pago\n4-Cabal.\n");
    
        scanf("%d", &tipoTarjeta);
        switch (tipoTarjeta) {
            case 1 :
            printf("Eligio Tarjeta Visa\n");
            printf("ingrese la cantidad de cuotas en las que abonara\n(1, 3, 6 o 12)\n");
            scanf("%d", &cantCuotas);
            switch (cantCuotas) {
                case 1 : 
                total = Venta;
                printf("su total a pagar es de %d\n", total);
                break;
                case 3 : 
                total = Venta + (Venta * 4 / 100);
                printf("su total a pagar es de %d\n", total);
                break;
                case 6 : 
                total = Venta + (Venta * 8 / 100);
                printf("su total a pagar es de %d\n", total);
                break;
                case 12 : 
                total = Venta + (Venta * 8 / 100);
                printf("su total a pagar es de %d\n", total);
                break;
                default :
                printf("ingrese un numero correcto de cuotas\n");
            }
            
            break;
           
           
            case 2 :
            printf("Eligio Tarjeta American Express\n");
            printf("ingrese la cantidad de cuotas en las que abonara\n(1, 3, 6 o 12)\n");
            scanf("%d", &cantCuotas);
            switch (cantCuotas) {
                case 1 : 
                total = Venta;
                printf("su total a pagar es de %d\n", total);
                break;
                case 3 : 
                total = Venta + (Venta * 4 / 100);
                printf("su total a pagar es de %d\n", total);
                break;
                case 6 : 
                total = Venta + (Venta * 8 / 100);
                printf("su total a pagar es de %d\n", total);
                break;
                case 12 : 
                total = Venta + (Venta * 8 / 100);
                printf("su total a pagar es de %d\n", total);
                break;
                default :
                printf("ingrese un numero correcto de cuotas\n");
            
            }
            break;
           
           
           
            case 3 :
            printf("Eligio Mercado Pago\n");
            printf("ingrese la cantidad de cuotas en las que abonara\n(1, 3, 6 o 12)\n");
            scanf("%d", &cantCuotas);
            switch (cantCuotas) {
                case 1 : 
                total = Venta;
                printf("su total a pagar es de %d\n", total);
                break;
                case 3 : 
                total = Venta + (Venta * 4 / 100);
                printf("su total a pagar es de %d\n", total);
                break;
                case 6 : 
                total = Venta + (Venta * 8 / 100);
                printf("su total a pagar es de %d\n", total);
                break;
                case 12 : 
                total = Venta + (Venta * 8 / 100);
                printf("su total a pagar es de %d\n", total);
                break;
                default :
                printf("ingrese un numero correcto de cuotas\n");
            }
            break;
           
           
           
            case 4 :
            printf("Eligio Cabal\n");
            printf("ingrese la cantidad de cuotas en las que abonara\n(1, 3, 6 o 12)\n");
            scanf("%d", &cantCuotas);
            switch (cantCuotas) {
                case 1 : 
                total = Venta;
                printf("su total a pagar es de %d\n", total);
                break;
                case 3 : 
                total = Venta + (Venta * 4 / 100);
                printf("su total a pagar es de %d\n", total);
                break;
                case 6 : 
                total = Venta + (Venta * 8 / 100);
                printf("su total a pagar es de %d\n", total);
                break;
                case 12 : 
                total = Venta + (Venta * 8 / 100);
                printf("su total a pagar es de %d\n", total);
                break;
                default :
                printf("ingrese un numero correcto de cuotas\n");
                
        }
        break;
        default :
        printf("ingrese un numero correcto para la tarjeta\n");
        
        
        
            
            

    }
      
    

    }

    return 0;




}
        
