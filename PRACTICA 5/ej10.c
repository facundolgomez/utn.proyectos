
/*10. Escriba un programa que lea una matriz cuadrada la presente en pantalla, y presente
la suma de todos los números que no están en la diagonal principal.*/

#include <stdio.h>

int main() {
    int suma = 0, tamMatriz;
    printf("Ingrese el tama%co de la matriz cuadrada\n", 164);
    scanf("%d", &tamMatriz);
    while (tamMatriz < 1 ) {
        printf("Ingrese un numero mayor a 0\n");
        scanf("%d", &tamMatriz);
    }
    int matCuadrada[tamMatriz][tamMatriz];
   
   printf("Ingrese los valores de la matriz\n");
   for (int i = 0; i < tamMatriz; i++) {
        for (int j = 0; j < tamMatriz; j++) {
         scanf("%d", &matCuadrada[i][j]);
        if (i != j ) {
            suma += matCuadrada[i][j];
    }
}
   }


for (int u = 0; u < tamMatriz; u++) {
    for (int e = 0; e < tamMatriz; e++) {
        printf("%d", matCuadrada[u][e]);
    }
    printf("\n");
}
    printf("La suma de los elementos que no estan en la diagonal principal es %d\n", suma);

    return 0;
}






