
//1. Escribe un programa que pida tres cadenas al usuario y muestre sus longitudes (número de letras).

#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[50], cadena2[50], cadena3[50];
    printf("Ingrese tres cadenas\n");
    scanf("%s %s %s", &cadena1, &cadena2, &cadena3);
    
    int longCadena1 = strlen(cadena1), longCadena2 = strlen(cadena2), longCadena3 = strlen(cadena3);
    printf("La primera cadena tiene longitud %d\nLa segunda longitud %d\nLa tercera longitud %d\n", longCadena1, longCadena2, longCadena3);
    return 0;

}
    