
/*8- Ingresar el tiempo trabajado por un contador y considerando que el valor de la hora es
de 800 pesos, calcular su sueldo e imprimirlo*/


#include <stdio.h>

int main() {
    float tiempo, sueldo = 0;
    int hora = 800;
    printf("ingrese el tiempo trabajado\n");
    scanf("%f", &tiempo);
    sueldo = tiempo * hora;
    printf("su sueldo es de $%.2f\n", sueldo);
    return 0;
}