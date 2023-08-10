

/*5. Se tiene el dni de un alumno y una nota correspondiente a su parcial. Requerir al
usuario ingresar el dni del alumno. Evaluar si el dni ingresado es igual al que se tiene
almacenado. Permitir ingresar un dni incorrecto hasta 3 veces como máximo. Si el
usuario ingresa el dni de manera correcta, mostrar en la consola la nota del alumno.
Trabajar con las siguientes variables:*/

#include <stdio.h>

int main() {
    int dniAlumno = 38632584;
    float nota = 7;
    int dniIngresado;
    int intentos = 0;
    int ingresaCorrectamente = 0;
    
    
    printf("Ingrese el DNI del alumno\n");

    do {
        printf("Intento : %d\n", intentos);
        scanf("%d", &dniIngresado);
        intentos++;
        if (dniIngresado != dniAlumno) {
            printf("DNI mal ingresado\n");
        }
        else {
            ingresaCorrectamente++;
        }
        
       

    } while ((intentos < 3) && (ingresaCorrectamente == 0));
    
    if (dniIngresado == dniAlumno) {
    printf("La nota del alumno es %.2f\n", nota);
    }
    else {
        printf("Alcanzo el maximo de intentos permitidos para ingresar el DNI\n");

    }
    
    return 0;

}






