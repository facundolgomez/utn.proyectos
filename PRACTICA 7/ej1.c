#include <stdio.h>
float cubica(float numero);
int main()
{
    /* Crear una función que calcule el cubo de un número real (float).
     * El resultado deberá ser otro número real.
     * Probar esta función para calcular el cubo de 3.2 y el de 5. */
    float numero;
    numero = 1;
    float cubo;
    int i = 0;
    while (numero != 0)
    {
        if (i == 0)
        {
            puts("\nEscriba un numero real");
        }
        else
        {
            puts("\nEscriba otro numero real");
        }
        scanf("%f", &numero);
        if (numero != 0)
        {
            printf("%f elevado al cubo es %.2f\n", numero, cubo = cubica(numero));
            i++;
        }
    }
        return 0;
    
}
    float cubica(float numero)
    {
        float cubica;
        cubica = numero * numero * numero;
        return cubica;
    }