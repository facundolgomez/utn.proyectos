

/*15. Se desea leer las calificaciones de 5 alumnos, por cada alumno se leen 3 calificaciones.
Mostrar el promedio por alumno y el promedio general.*/

#include <stdio.h>

int main() {
    float nota;
    float sumaNotasGeneral = 0, promedioGeneral = 0, sumaNotasAlumno1 = 0, sumaNotasAlumno2 = 0, sumaNotasAlumno3 = 0, sumaNotasAlumno4 = 0, sumaNotasAlumno5 = 0;
    float promedioAlumno1 = 0, promedioAlumno2 = 0, promedioAlumno3 = 0, promedioAlumno4 = 0, promedioAlumno5 = 0;
    int cantNotasTotal = 0;
    
    for(int i = 1; i < 6; i++) {
        printf("Ingrese 3 notas del Alumno %d\n", i);
        for(int j = 0; j < 3; j++) {
            scanf("%f", &nota);
            sumaNotasGeneral += nota;
            cantNotasTotal ++;
              if ( i == 1) {
            sumaNotasAlumno1 += nota;
            }
            else if (i == 2) {
                sumaNotasAlumno2 += nota;
            }
            else if (i == 3) {
                sumaNotasAlumno3 += nota;
            }
             else if (i == 4) {
                sumaNotasAlumno4 += nota;
            }
             else if (i == 5) {
                sumaNotasAlumno5 += nota;
            }


            
         }
           
 }
    
    
    promedioGeneral = sumaNotasGeneral / cantNotasTotal;
    promedioAlumno1 = sumaNotasAlumno1 / 3;
    promedioAlumno2 = sumaNotasAlumno2 / 3;
    promedioAlumno3 = sumaNotasAlumno3 / 3;
    promedioAlumno4 = sumaNotasAlumno4 / 3;
    promedioAlumno5 = sumaNotasAlumno5 / 3;
  
    printf("El promedio general es %.2f\n\n", promedioGeneral);
    printf("El promedio del alumno 1 es %.2f\n", promedioAlumno1);
    printf("El promedio del alumno 2 es %.2f\n", promedioAlumno2);
    printf("El promedio del alumno 3 es %.2f\n", promedioAlumno3);
    printf("El promedio del alumno 4 es %.2f\n", promedioAlumno4);
    printf("El promedio del alumno 5 es %.2f\n", promedioAlumno5);



    return 0;

}