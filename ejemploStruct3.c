#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[30];
    float percentage;
};

void main()
{
    int i;
    struct student students[3];

    // Estudiante 1
    students[0].id=1;
    strcpy(students[0].name, "Sabrina");
    students[0].percentage = 86.5;

    // Estudiante 2        
    students[1].id=2;
    strcpy(students[1].name, "Juan");
    students[1].percentage = 95.5;

    // Estudiante 3
    students[2].id=3;
    strcpy(students[2].name, "Ana");
    students[2].percentage = 81.5;

    for(i = 0; i < 3; i++)
    {
        printf("     Registros de STUDENT : %d \n", i+1);
        printf(" Legajo: %d \n", students[i].id);
        printf(" Nombre: %s \n", students[i].name);
        printf(" Porcentaje: %f\n\n",students[i].percentage);
    }


}