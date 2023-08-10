/*1) Pedir al usuario que ingrese dos números. Luego presentar el siguiente
menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada.*/

#include <stdio.h>

float suma (float numero1, float numero2);
float resta (float numero1, float numero2);
float mult (float numero1, float numero2);
float div (float numero1, float numero2);


int main() {
    float num1, num2, resultado1, resultado2, resultado3, resultado4;
    printf("Ingrese dos numeros\n");
    scanf("%f %f", &num1, &num2);
    resultado1 = suma(num1, num2);
    resultado2 = resta(num1, num2);
    resultado3 = mult(num1, num2);
    resultado4 = div(num1, num2);

    printf("%.2f\n", resultado1);
    printf("%.2f\n", resultado2);
    printf("%.2f\n", resultado3);
    printf("%.2f\n", resultado4);


    return 0;
}

float suma (float numero1, float numero2) {
    float sumatoria;
    sumatoria = numero1 + numero2;
    return sumatoria;

}

float resta (float numero1, float numero2) {
    float diferencia;
    diferencia = numero1 - numero2;
    return diferencia;

}

float mult (float numero1, float numero2) {
    float multiplicacion;
    multiplicacion = numero1 * numero2;
    return multiplicacion;

}

float div (float numero1, float numero2) {
    float division;
    division = numero1 / numero2;
    return division;

}