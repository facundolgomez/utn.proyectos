

/*11- Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar*/

#include <stdio.h>

int main() {
    float num1, num2, suma = 0, resta = 0, mult = 0, div = 0;
    int opcion;
    printf("ingrese dos numeros\n");
    scanf("%f %f", &num1, &num2);
    printf ("1. Informar su suma\n2. Informar su resta\n3. Informar su multiplicacion\n4. Informar su division\n5. Salir\n");
    scanf("%d", &opcion);
    switch (opcion) {
        case 1 :
        suma = num1 + num2;
        printf("la suma de los numeros es %.2f\n", suma);
        break;
        case 2 :
        resta = num1 - num2;
        printf("la resta de los numeros es %.2f\n", resta);
        break;
        case 3 :
        mult = num1 * num2;
        printf("la multiplicacion de los numeros es %.2f\n", mult);
        break;
        case 4 :
        div = num1 / num2;
        printf("la division de los numeros es %.2f\n", div);
        break;
        case 5 :
        printf("Salio del menu\n");
        break;
        default :
        printf("ingrese un numero correcto\n");

        
    }
    return 0;


}
