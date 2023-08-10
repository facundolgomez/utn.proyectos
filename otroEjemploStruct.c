#include <stdio.h>
/*
En este programa, se solicita al usuario que ingrese el número de estudiantes que desea ingresar. 
Luego, se crea un arreglo estudiantes de tamaño numEstudiantes para almacenar los datos de cada estudiante.


*/
// Definición de la estructura
struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

int main() {
    int numEstudiantes;
    
    printf("Ingrese el número de estudiantes: ");
    scanf("%d", &numEstudiantes);
    
    // Declaración de un arreglo de estructuras Estudiante
    struct Estudiante estudiantes[numEstudiantes];
    
    // Lectura de datos para cada estudiante
    for (int i = 0; i < numEstudiantes; i++) {
        printf("\nEstudiante %d:\n", i + 1);
        
        printf("Ingrese el nombre del estudiante: ");
        scanf("%s", estudiantes[i].nombre);
        
        printf("Ingrese la edad del estudiante: ");
        scanf("%d", &estudiantes[i].edad);
        
        printf("Ingrese el promedio del estudiante: ");
        scanf("%f", &estudiantes[i].promedio);
    }
    
    // Mostrar los datos de cada estudiante
    printf("\nDatos de los estudiantes:\n");
    for (int i = 0; i < numEstudiantes; i++) {
        printf("Estudiante %d:\n", i + 1);
        printf("Nombre: %s\n", estudiantes[i].nombre);
        printf("Edad: %d\n", estudiantes[i].edad);
        printf("Promedio: %.2f\n", estudiantes[i].promedio);
    }
    
    return 0;
}