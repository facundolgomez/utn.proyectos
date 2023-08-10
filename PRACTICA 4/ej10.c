/*10. Retomamos el ejercicio 11 del documento LC1 – Práctica 2 – Estructuras de control if y
switch:
“Pedir al usuario que ingrese dos números (permitir ingresar número con decimales).
Luego presentar el siguiente menú:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Salir
Seleccione una operación:
Mostrar el resultado de la operación seleccionada. Si el usuario ingresa la opción 5 el
programa debe terminar.”

Vamos a modificar el mismo de manera que el menú se muestre al usuario mientras
este no se ingrese la opción 6.
Además agregar una opción 5 que muestre la cantidad de operaciones que realizó el
usuario.
El menú que se mostrará al usuario quedará entonces de la siguiente forma:
1. Informar su suma
2. Informar su resta
3. Informar su multiplicación
4. Informar su división
5. Informar cantidad de operaciones realizadas
6. Salir
Seleccione una operación:*/

#include <stdio.h>

int main() {
    float number1, number2, suma = 0, resta = 0, mult = 0, div = 0;
    int opc, cantOp = 0;
    printf("Ingrese dos numeros\n");
    scanf("%f %f", &number1, &number2);

    do {
    printf("Ingrese una opcion\n");
    printf("1.Informar su suma\n2.Informar su resta\n3.Informar su multiplicacion\n4.Informar su division\n5.Informar cantidad de operaciones realizadas\n6.Salir\n");
    scanf("%d", &opc);
     switch (opc) {
            case 1:
            suma = number1 + number2;
            printf("La suma es %.2f\n", suma);
            cantOp++;
            break;

            case 2:
            resta = number1 - number2;
            printf("La resta es %.2f\n", resta);
            cantOp++;
            break;

            case 3:
            mult = number1 * number2;
            printf("La multiplicacion es %.2f\n", mult);
            cantOp++;
            break;

            case 4:
            div = number1 / number2;
            printf("La division es %.2f\n", div);
            cantOp++;
            break;

            case 5:
            printf("La cantidad de operaciones es %d\n", cantOp);
            break;

            case 6:
            printf("Ha salido del menu\n");
            break;
            

        }

    } while (opc != 6);

    return 0;
    
}
    


