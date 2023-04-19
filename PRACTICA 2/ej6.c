
/*6- Leer una nota de un alumno por consola e informar la condición del mismo. (menor
que 4: Reprobado, menor que 6: Regular, mayor o igual que 6: Promocionado). Validar
que la nota ingresada se encuentre entre el 0 y el 10, de lo contrario informar “Nota
inválida”*/

#include <stdio.h>

int main() {
    float nota;
    printf("ingrese nota del alumno\n");
    scanf("%f", &nota);
    while ((nota < 0) || (nota > 10)) {
        printf("ingrese un numero correcto de nota\n");
        scanf("%f", &nota);
    }
    if (nota >= 6) {
        printf("Promocionado\n");
    }
    else if ((nota < 6) && (nota >= 4)) {
        printf("Regular\n");
    }
    else if (nota < 4 ) {
        printf("Reprobado\n");
    }
    return 0;
}