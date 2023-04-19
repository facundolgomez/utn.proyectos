
/*
La compañía que gestiona la autopista ha decidido cambiar las tarifas de peaje. Estas tarifas
dependen de:
● Tipo de vehículo (camión, automóvil o moto) que desee utilizar la autopista
● Número de pasajeros que lleve
● Tipo horario del día:
Horario A: horas de “Alta” congestión:
● Los automóviles con tres pasajeros o más no pagan peaje
● Los camiones pagan $300      *chequeado*
● Las motos pagan $100
Horario B: horas de “Baja” congestión:
● Los automóviles pagan $150
● Los camiones pagan $200      *chequeado*
● Las motos no pagan peaje
En este horario la tarifa es independientemente del número de pasajeros.



Escriba un programa que leyendo el tipo de vehículo, tipo de horario de congestión alta o baja
y el número de pasajeros, calcule la tarifa que le debe cobrar a un vehículo. Validar que el tipo
de vehículo sea uno de los mencionados y que el número de pasajeros no sea mayor a 5
*/


#include <stdio.h>

int main() {

char vehiculo;
int pasajeros;
int horario;

printf("ingrese el tipo de vehiculo\nIngrese la letra c para CAMION, la a para AUTOMOVIL o la m para MOTO\n");
scanf("%c", &vehiculo);
switch (vehiculo) {
   
   
    case 'c':
    printf("Ha ingresado CAMION como vehiculo\n");
    printf("Ingrese el tipo de horario, 1 para alta congestion ALTA, 2 para BAJA congestion\n");
    scanf("%d", &horario);

    if (horario == 1) {
        printf("pagan $300\n");
    }

    else if (horario == 2) {
        printf("pagan $200\n");
    }
    
    break;



    case 'a':
    printf("Ha ingresado AUTO como vehiculo\n");
    printf("Ingrese el tipo de horario, 1 para ALTA congestion, 2 para BAJA congestion\n");
    scanf("%d", &horario);
    if (horario == 1) {
    printf("Ingrese cantidad de pasajeros\n");
    scanf("%d", &pasajeros);

    if (pasajeros >= 3) {
        printf("no pagan peaje\n");
    }
     else if (pasajeros <= 0  ) {
        printf("asigno una cantidad incorrecta de pasajeros\n");
    }
    else if (pasajeros > 0 && pasajeros < 3) {
        printf("pagan peaje\n");
    }

    }

    else if (horario == 2) {
        printf("pagan $150\n");
    }
   
    
    break;




    case 'm':
    printf("Ha ingresado MOTO como vehiculo\n");
    printf("Ingrese el tipo de horario, 1 para ALTA congestion, 2 para BAJA congestion\n");
    scanf("%d", &horario);
    if (horario == 1) {
        printf("pagan $100\n");
    }
    else if (horario == 2) {
        printf("no pagan peaje\n");
    }

    break;

    default :
    printf("Ha ingresado un tipo incorrecto de vehiculo\n");

}

return 0;


}
