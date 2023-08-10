
/*4. Dado el vector {10, 20, 5, 15, 30, 20}                
- Informar el vector de la forma: "Indice: X, Valor: Y".   
- Totalizar el vector e informar el total.                 
- Informar el contenido de las posiciones impares.
- Informar las posiciones que contienen números impares.
- Informar el mayor número. 
- Informar cuántas veces aparece el número 20.*/          

#include <stdio.h>

int main() {
    int vector[6] = {10, 20, 5, 15, 30, 20};
    float suma = 0;
    int max = vector[0];
    int contVeinte = 0;
    
    
    for (int u = 0; u < 6; u++) {
        printf("Indice: %d, Valor: %d\n", u, vector[u]);
       
        suma += vector[u];

        if ((u % 2) != 0 ) {
            printf("Contenido %d de posicion impar %d\n", vector[u], u);
        
        }

        if (vector[u] % 2 != 0 ) {
            printf("Posicion %d que contiene numero impar %d\n", u, vector[u]);
        }



         if (vector[u] > max) {
            max = vector[u];
        }

         if (vector[u] == 20) {
            contVeinte++;
        }


       }

    printf("La suma total de los elementos del vector es %.2f\n", suma);
    printf("El mayor numero es %d\n", max);
    printf("La cantidad de veces que aparece el numero 20 es %d\n", contVeinte);
    
    
   

    return 0;

}


