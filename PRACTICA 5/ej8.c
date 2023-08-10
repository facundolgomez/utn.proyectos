
/*8. Leer 10 números por teclado, 5 para un array y 5 para otro array distinto. Mostrar los
10 números en pantalla mediante un solo array.*/

#include <stdio.h>

int main() {
    int arreglo1[5], arreglo2[5], arreglo3[10];
    
    for (int i = 0; i < 5; i++) {
         scanf("%d", &arreglo1[i]);
         arreglo3[i] = arreglo1[i];
         
    }

    for (int i = 5; i < 10; i++) {
         scanf("%d", &arreglo2[i]);
         arreglo3[i] = arreglo2[i];
         

    }


    for (int j = 0; j < 10; j++) {
        printf("%d\t", arreglo3[j]);
    }
  

   return 0;
}

