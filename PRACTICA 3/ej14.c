
#include <stdio.h>

int main() {
    int num;
    printf("Ingrese un valor no negativo\n");
    scanf("%d", &num);
    while (num < 0) {
        printf("Por favor ingrese un numero no negativo\n");
        scanf("%d", &num);
    }
    for (int i = num; i >= 1; i--) {
     for(int j = 1; j <= i; j++) {
            printf("%d\t", j);
            
        }
        printf("\n");
       
        
        
    }
    return 0;

}
