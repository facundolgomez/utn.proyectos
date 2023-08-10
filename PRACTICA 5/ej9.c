
/*9. Escriba un programa que lea 5 números por teclado, los copie a otro array
multiplicados por 2 y muestre el segundo array*/

#include <stdio.h>

int main() {
    int arreglo1[5], arreglo2[5];
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arreglo1[i]);
        arreglo2[i] = (arreglo1[i] * 2);
       
    }

    for (int j = 0; j < 5; j++) {
        printf("%d\t", arreglo1[j]);
    }
    printf("\n");
    

   

    for (int e = 0; e < 5; e++) {
        printf("%d\t", arreglo2[e]);
    }
    return 0;
}
