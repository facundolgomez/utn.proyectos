
/*8- Actualizar el saldo de una cuenta bancaria, a partir de un retiro. Verificar que el saldo
sea mayor o igual que el importe a retirar.*/

#include <stdio.h>

int main() {
    float saldo, retiro, saldoTotal = 0;
    printf("Ingrese su saldo de su cuenta y el monto que quiere retirar\n");
    scanf("%f %f", &saldo, &retiro);
    while (saldo < retiro) {
        printf("su importe a retirar tiene que ser menor o igual a el saldo de su cuenta\n");
        scanf("%f %f", &saldo, &retiro);
    }
    saldoTotal = saldo - retiro;
    printf("su saldoTotal es de %.2f\n", saldoTotal);
    return 0;
}