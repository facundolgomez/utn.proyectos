/*2) Escriba un programa que pida ingresar un número y a continuación
escriba en la consola si el mismo es par o impar.*/

#include <stdio.h>

int verificarPar(int num1);


int main() {
    int num, resultado;
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    resultado = verificarPar(num);
    if (resultado == 1) {
        printf("el numero es par\n");
    }
    else {
        printf("es impar\n");
    }

    return 0;
}

int verificarPar(int num1) {
    int bandera = 0;
    if (num1 % 2 == 0) {
        bandera = 1;
    }
    else {
        bandera = 0;
    }

    return bandera;
}
