
/*7. Declarar un array de tipo decimal, que el usuario ingrese la cantidad de notas a cargar,
leer las notas por consola, mostrar la suma de sus componentes y el promedio.*/

#include <stdio.h>

int main() {
    int notas;
    printf("Ingrese la cantidad de notas a cargar\n");
    scanf("%d", &notas);
    float arregloNotas[notas], suma = 0, promedio = 0;
    printf("Ingrese cada una de las notas\n");
    for (int i = 0; i < notas; i++) {
        scanf("%f", &arregloNotas[i]);
        suma += arregloNotas[i];
    }
    promedio = suma / notas;

    printf("La suma total de las notas es %.2f\nEl promedio de las notas es %.2f\n", suma, promedio);
}