//este codigo abre un archivo en modo escritura, escribe en el, luego lo cierra, luego lo vuelve a abrir pero esta vez en modo de agregar datos
//escribe una oracion mas y vuelve a cerrar el archivo
#include <stdio.h>

int main() {
    FILE *vptr;
    vptr = fopen("ejemplo1.txt", "w");
    fprintf(vptr, "un bucle infinito");
    fclose(vptr);
    vptr = fopen("ejemplo1.txt", "a");
    fprintf(vptr, " ademas esto es el texto que continua");
    fclose(vptr);
    return 0;
}
