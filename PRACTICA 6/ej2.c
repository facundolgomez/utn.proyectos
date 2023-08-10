
//2. Ingresar 2 nombres e indicar cuál de los dos precede alfabéticamente al otro o si son iguales.

#include <stdio.h>
#include <string.h>

int main() {
    char nombre1[20], nombre2[20];
    printf("Ingrese dos nombres\n");
    scanf("%s %s", nombre1, nombre2);
    int letra1 = strcmp(nombre1, nombre2);
    if (letra1 == 0 ) {
    
       printf("Es el mismo nombre\n");
    }
    
    else if (letra1 < 0) {
        printf("%s precede alfabeticamente a %s\n", nombre1, nombre2);
    }
    
    else   {
    
        printf("%s precede alfabeticamente a %s\n", nombre2, nombre1);

    }

    return 0;
}

    
    



    
