

/*9. Realizar un programa que permita ver información a un cliente de un banco. Para ello
el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero),
validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de
ingreso de contraseña. Al loguarse correctamente presentar un menú con las
siguientes opciones:
1- Consultar saldo
2- Consultar CBU
3- Salir
Trabajar con las siguientes variables:
int dni = 35654123;
int pass = 1234;
int saldo = 150000;
int cbu = 986323456;
int dniIngresado = 0;
int passIngresado = 0;
int intentos = 1;
int ingresaCorrectamente = 0;
*/

#include <stdio.h>

int main() {
int dni = 35654123, pass = 1234, saldo = 150000, cbu = 986323456, dniIngresado, passIngresado, intentos = 1, ingresaCorrectamente = 0, menu;

    printf("Ingrese su usuario (DNI) y contrase%ca...(Tiene 3 intentos para ingresar los datos correctamente)\n", 164);
    do {
        printf("Intento %d\n", intentos);
        scanf("%d %d", &dniIngresado, &passIngresado);
        intentos++;
        if ((dniIngresado == 35654123) && (passIngresado == 1234)) {
            ingresaCorrectamente++;
            printf("Ingrese 1 para consultar Saldo\nIngrese 2 si desea consultar CBU\nIngrese 3 si quiere Salir\n");
            scanf("%d", &menu);
            switch(menu) {
            case 1:
            printf("Su saldo es de $%d\n", saldo);
            break;
            case 2:
            printf("Su CBU es %d\n", cbu);
            break;
            case 3:
            printf("Ha salido del Sistema\n");
            break;
            default:
            printf("Ha ingresado un numero incorrecto\n");
        }
        }
        
    
    } while ((ingresaCorrectamente == 0) && (intentos <= 3));

    if ((ingresaCorrectamente == 0) || (intentos > 3 )) {
        printf("Ha superado el limite de intentos para ingresar correctamente los datos\n");
    }
    
    return 0;

}