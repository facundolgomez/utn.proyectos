/*Deseamos realizar un programa que gestione las notas de una clase de 10 alumnos de los
cuales sabemos el DNI y la nota. El programa debe mostrar un menú con las siguientes
opciones a resolver:
1. Cargar Alumnos
2. Buscar un alumno
3. Modificar la nota de un alumno
4. Mostrar un listado de los 10 alumnos
5. Salir
Donde, la opción 1 permite cargar los 10 alumnos ingresando para cada uno: DNI y nota.
Validar que el DNI no sea menor que 1000000 ni mayor que 99999999. Validar que la nota sea
mayor a 0 y menor o igual que 10.
La opción 2 debe pedir el DNI de un alumno y mostrar en consola DNI y nota. Si el DNI
ingresado no existe, informar la situación con un mensaje “DNI inexistente”.
La opción 3 debe pedir el DNI del alumno al cual se desea cambiar la nota y la nueva nota. Si el
DNI ingresado no existe, informar la situación con un mensaje “DNI inexistente”, si el DNI si se
encuentra modificar la nota del alumno por la ingresada.
La opción 4 debe mostrar en la consola el listado de alumnos.
SÓLO se saldrá de la aplicación si se selecciona la opción 5.*/

#include <stdio.h>

int main() {
    int opc, dniAlumnos[10], dniIngresado, dniEncontrado = 0;
    float notasAlumnos[10];
    do {
    printf("Seleccione una opcion\n");
    printf("1-Cargar Alumnos\n2-Buscar un Alumno\n3-Modificar la nota de un Alumno\n4-Mostrar un listado de los 10 Alumnos\n5-Salir\n");
    scanf("%d", &opc);
    switch(opc) {
        case 1:
            for (int i = 0; i < 3; i++) {
                printf("Ingrese los datos del alumno %d\n", i + 1);
                printf("Ingrese DNI\n");
                scanf("%d", &dniAlumnos[i]);
                while((dniAlumnos[i] < 1000000) || (dniAlumnos[i] > 99999999)) {
                    printf("Ingrese un DNI valido\n");
                    scanf("%d", &dniAlumnos[i]);
                }    
                printf("Ingrese una nota\n");
                scanf("%f", &notasAlumnos[i]);
                while(notasAlumnos[i] <= 0 || notasAlumnos[i] > 10) {
                    printf("Ingrese una nota valida\n");
                    scanf("%f", &notasAlumnos[i]);
                
                }
            }
        break;

        case 2:
            dniEncontrado = 0;
            printf("Ingrese DNI del alumno que quiere buscar\n");
            scanf("%d", &dniIngresado);
            for (int i = 0; i < 3; i++) {
                if (dniIngresado == dniAlumnos[i]) {
                        printf("El DNI es %d y la nota es %.2f\n", dniAlumnos[i], notasAlumnos[i]);
                        dniEncontrado = 1;
                    }
                }
                if (dniEncontrado != 1) {
                    printf("DNI inexistente\n");
                }
        break;

        case 3:
        dniEncontrado = 0;
        printf("Ingrese el DNI del alumno al cual desea cambiar la nota\n");
        scanf("%d", &dniIngresado);
        for (int i = 0; i < 3; i++) {
            if (dniIngresado == dniAlumnos[i]) {
                dniEncontrado = 1;
            printf("Ingrese la nueva nota\n");
            scanf("%f", &notasAlumnos[i]);
            while (notasAlumnos[i] <= 0 || notasAlumnos[i] > 10) {
                printf("Ingrese una nota valida\n");
                scanf("%f", &notasAlumnos[i]);
            }
            }
        }
        if (dniEncontrado != 1) {
            printf("DNI inexisente\n");
        }
                
        break;
    
        case 4:
        printf("Lista de alumnos (DNI)\n");
        for (int i = 0; i < 3; i++) {
            
            printf("%d", dniAlumnos[i]);
            printf(" y la nota es %.2f\n", notasAlumnos[i]);
            
        }
        break;

        case 5:
            printf("Ha salido de la aplicacion\n");
        break;
        
        default:
        printf("Opcion invalida\n");
        
    }
    } while(opc != 5);

    return 0;
}



     
