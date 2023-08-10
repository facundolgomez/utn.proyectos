
/*2. Declarar un array de tipo entero de 5 componentes, asignarles un valor, mostrar la
suma de sus componentes y el promedio.*/

#include <stdio.h>

int main() {
    int array[5] = {8,9,10,4,5};
    float suma = 0;
    float promedio = 0;

    for (int i = 0; i < 5; i++) {
        suma += array[i];
    }
    promedio = suma / 5;

    printf("La suma de los elementos del arreglo es %.2f\n", suma);
    printf("El promedio de los elementos del arreglo es %.2f\n", promedio);
    
    return 0;
}

