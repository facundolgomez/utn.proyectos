#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
char primeraLetra (char* cadena); 
int main() 
/*este ejemplo devuelve la primera letra de la cadena ingresada*/
{ char palabra[10]; 
printf("Escriba una palabra\n"); 
scanf("%s", palabra); 
printf("La primera letra es %c.\n", primeraLetra(palabra)); 
system("pause"); 
return 0; } 
char primeraLetra(char* cadena) 
{ return cadena[0]; }