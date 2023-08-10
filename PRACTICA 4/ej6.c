

//6. Leer por consola notas hasta que el usuario lo indique e informar su suma y promedio

#include <stdio.h>
#include <stdbool.h>

int main() {
    float nota, suma = 0, cantNotas = 0, promedio = 0;
    bool seguirONo;
    
    do {
        printf("Ingrese su nota\n");
        scanf("%f", &nota);
        suma += nota;
        cantNotas++;
        printf("Si desea dejar de cargar notas teclee 0, de lo contrario teclee 1\n");
        scanf("%d", &seguirONo);

        
    } while (seguirONo == 1);
    
    promedio = suma / cantNotas;
    printf("La suma de las notas es %.2f\nEl promedio es %.2f\n", suma, promedio);

    return 0;



}