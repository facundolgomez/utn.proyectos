/*Se desea realizar un programa que gestione el stock de un negocio de venta de
electrodomésticos. Como máximo se permitirán cargar 100 electrodomésticos. De cada
electrodoméstico se conoce su código de barras, su descripción y una cantidad en stock.
Se deberá presentar un menú con las siguientes opciones:
1. Cargar productos.
2. Modificar stock.
3. Mostrar productos sin stock. 
4. Listar productos.
5. Salir.
Donde, la opción 1 permite cargar los 100 electrodomésticos ingresando para cada uno: código
de barras, descripción y cantidad.
La opción 2 debe pedir el código de barras del electrodoméstico al cual se desea cambiar el
stock y la nueva cantidad. Si el código de barras ingresado no existe, informar la situación con
un mensaje “Electrodoméstico inexistente”, si el código de barras si se encuentra modificar su
stock con la cantidad ingresada.
La opción 3 debe mostrar en la consola los datos de aquellos electrodomésticos con cantidad
igual a cero.
La opción 4 debe mostrar en la consola el listado de electrodomésticos.
SOLO se saldrá de la aplicación si se selecciona la opción 5.*/
#include <stdio.h>

int main() {
    char descripcion[100][100];
    int opcion, codBarra[100], cantStock[100], codigoIngresado, productoExiste = 0, auxStock = 0;
    int cantPrueba = 100;
    do {
    printf("Ingrese la opcion que desea ejecutar\n");
    printf("1.Cargar productos\n2.Modificar stock\n3.Mostrar productos sin stock\n4.Listar productos\n5.Salir\n");

    scanf("%d", &opcion);
    switch (opcion) {
        case 1:
        printf("Ingrese los 100 electrodomesticos\n");
        for (int i = 0; i < cantPrueba; i++) {
            printf("Ingrese codigo de barra\n");
            scanf("%d", &codBarra[i]);
            printf("Ingrese descripcion del producto\n");
            fflush(stdin);
            scanf("%[^\n]", &descripcion[i]);
            printf("Ingrese una cantidad en stock\n");
            scanf("%d", &cantStock[i]);
        }
        break;
        
        case 2:
        productoExiste = 0;
        printf("Ingrese el codigo de barra del electrodomestico que quiere cambiar la cantidad del stock\n");
        scanf("%d", &codigoIngresado);
        for (int i = 0; i < cantPrueba; i++) {
            if (codigoIngresado == codBarra[i]) {
                printf("Se encontr%c el electrodomestico.Ingrese la nueva cantidad del stock\n", 162);
                scanf("%d", &cantStock[i]);
                productoExiste = 1;
            }
            
            if (productoExiste != 1 && i == 99) {
                printf("Electrodomestico inexistente\n");
            }
                
            }

        break;
        //La opción 3 debe mostrar en la consola los datos de aquellos electrodomésticos con cantidad igual a cero.
        case 3:
        auxStock = 0;
        for (int i = 0; i < cantPrueba; i++) {
            if (cantStock[i] == 0) {
                if (i == 0) {
                printf("Los electrodomesticos sin stock son\n");
                }
                auxStock = 1;
                printf("%d--%s\n", codBarra[i], descripcion[i]);
                
            }
            if (auxStock == 0 && i == 99) {
                printf("No hay electrodomesticos sin stock\n");
                
            }
            
        }
        break;
        
        case 4:
        for (int i = 0; i < cantPrueba; i++) {
            printf("%d--%s--%d\n", codBarra[i], descripcion[i], cantStock[i]);
        }
        break;
        
        case 5:
        printf("Ha salido del sistema\n");
        break;
    }

    } while (opcion != 5);

    return 0;
}





