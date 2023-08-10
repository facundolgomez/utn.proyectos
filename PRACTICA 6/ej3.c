
/*3. Ingresar por consola 10 nombres de alumnos en un array y sus apellidos en otro, concatenar de la forma
"nombre apellido" para cada uno, y mostrar por consola.*/

#include <stdio.h>
#include <string.h>

int main() {
    char nombre[15][15], apellido[15][15];
    for (int i = 0; i < 10; i++) {
            printf("Ingrese nombre\n");
            scanf("%s", nombre[i]);
            printf("Ingrese apellido\n");
            scanf("%s", apellido[i]);
            strcat(nombre[i], " ");
            strcat(nombre[i], apellido[i]);
            
    }
    printf("-------------------------------\n");
    
    for (int k = 0; k < 10; k++) {
        printf("%s\n", nombre[k], apellido[k]);
    }
    
    return 0;
   
}
