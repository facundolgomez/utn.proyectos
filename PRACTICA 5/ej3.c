
/*3. Declarar un array de tipo entero de 5 componentes, asignarles un valor por consola,
mostrar cuántas veces se repite el número 5*/

#include <stdio.h>

int main() {
   int cont = 0;
   int theArray[5];
   int number;

    for (int j = 0; j < 5; j++) {
        scanf("%d", &theArray[j]);
        if (theArray[j] == 5) {
            cont++;
        }
    }
    printf("La cantidad de veces ingresada el numero 5 es %d\n", cont);
    return 0;

}