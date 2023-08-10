#include <stdio.h>
#include <stdlib.h> 
//ejercicio 1 practica 6
//recuerden probar este codigo teniendo creado el archivo ejemplo1.txt con algún contenido
//El siguiente código abre un archivo llamado "ejemplo1.txt" en modo lectura y //lee dentro de él
void main()
{
    FILE *fp;
    char texto[100];
    fp = fopen("ejemplo1.txt", "r"); // abrimos el archivo, en modo lectura
    fgets(texto, 100, fp);         // 
    printf("%s", texto); // imprimimos en consola lo almacenado en el array texto 
    fclose (fp); //cerramos el archivo 
    system("pause"); }
    