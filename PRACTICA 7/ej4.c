#include <stdio.h>
int esPrimo(int n);
int main()
{
 /*se muestra 1 si el valor ingresado es primo, se muestra 0 si el valor ingresado no es primo*/
    int num;
    while (num)
    {
        printf("Escriba un numero: ");
        scanf("%d", &num);
        printf("%d ", esPrimo(num));
    }
    return 0;
}
int esPrimo(int n)
{
    int r, res;
    if (n != 1)
    {
        r = 1;
        res = 1;
        while (res != 0)
        {
            res = n % ++r;
        }
        /*
        El while calcula el residuo (res) de la división de un número (n) entre un incremento incremental de otra
         variable (r). 
        El bucle se ejecuta hasta que el residuo sea igual a cero.


    Se inicia el bucle while y se verifica la condición res != 0.
    Dentro del bucle, se calcula el residuo de n dividido por el incremento de r usando el operador módulo %. 
    El residuo se asigna a la variable res.
    La variable r se incrementa en uno antes de calcular el residuo, utilizando el operador de incremento ++.
    Si el residuo res no es igual a cero, el bucle continúa y se repiten los pasos 2 y 3.
    Si el residuo res es igual a cero, el bucle se detiene y el programa sale del bucle while.*/
        if (n == r)
            return 1;
        else
            return 0;
    }
    else
        return 1;
}