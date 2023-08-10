

/*4. Realizar un programa que calcule el promedio de las notas de los parciales de un curso.
Comenzar pidiendo al usuario la cantidad de alumnos del curso y la cantidad de
parciales que se tomaron durante el cuatrimestre. Calcular el promedio de notas de los
alumnos del curso. A medida que se ingresan las notas, validar que las mismas sean
mayores que 0 (cero) y menores que 10, en caso contrario requerir el ingreso de dicha
nota hasta que sea correcta. Mostrar el promedio de cada alumno a medida que se va
calculando y por último, el promedio general del curso.*/

#include <stdio.h>

int main() {
    float nota, sumaNotas, promedioPorAlumno = 0, sumaNotasTotales = 0, promedioTotal = 0;
    int cantAlumnos;
    int cantParciales;
    printf("Ingrese la cantidad de alumnos del curso\n");
    scanf("%d", &cantAlumnos);
    printf("Ingrese la cantidad de parciales que se tomaron en el cuatrimestre\n");
    scanf("%d", &cantParciales);
    for (int i = 0; i < cantAlumnos; i++) {
        sumaNotas = 0;
        printf("Ingrese nota de cada parcial, %d notas en total\n", cantParciales);
        for (int j = 0; j < cantParciales; j++) {
            scanf("%f", &nota);
            while (nota <= 0 || nota > 10) {
                printf("Ingrese una nota valida\n");
                scanf("%f", &nota);
            }
          
            sumaNotas += nota;
            promedioPorAlumno = sumaNotas / cantParciales;

            sumaNotasTotales += nota;

        }
        
        printf("El promedio del alumno %d es %.2f\n", i, promedioPorAlumno);

    }
    promedioTotal = sumaNotasTotales / cantAlumnos;
    printf("El promedio de todas las notas del curso es %.2f\n", promedioTotal);
    return 0;
}
