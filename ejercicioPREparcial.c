#include <stdio.h>
#include <stdlib.h>

//variable de prueba, la original debe valer 50 en este ejercicio
int tam = 3;
int checkComienzo = 0;

void cargarEnvios(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[]);
void mostrarEnvios(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[]);
void modificarEstadoDeUnEnvio(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[]);
void mostrarEnvioParaDestino(int destino, int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[]);
void mostrarEnviosPendientes(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[]);
void mostrarEnviosDespachados(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[]);

int main()
{
    int numerosID[50];
    float pesos[50];
    int destinos[50];
    int horasPlanificadas[50];
    int estados[50];

    int opcion = 0;
    int des = 0;

    do
    {
        printf("1-Cargar env%cos planificados.\n", 161);
        printf("2-Mostrar env%cos planificados.\n", 161);
        printf("3-Modificar estado de un env%co.\n", 161);
        printf("4-Mostrar env%cos para un destino.\n", 161);
        printf("5-Salir.\n");
        printf("6-Mostrar envios pendientes\n");
        printf("7-Mostrar envios despachados\n");
       
        scanf("%d", &opcion);
        //validacion para que me arranque cargando los datos
        if (opcion == 1 || opcion == 5) {
            checkComienzo++;
        }
        //si la variable checkComienzo no se incrementó significa que arranco por una opcion diferente a 1 o a 5
        while (checkComienzo == 0) {
            printf("Debe comenzar cargando los envios\n");
            scanf("%d", &opcion);
            if (opcion == 1 || opcion == 5) {
                checkComienzo++;
            }
        }
        
        
        

        switch (opcion)
            {
            case 1:
                // Cargar envíos planificados
                cargarEnvios(numerosID, pesos, destinos, horasPlanificadas, estados);
                break;
            case 2:
                // Mostrar envíos planificados
                mostrarEnvios(numerosID, pesos, destinos, horasPlanificadas, estados);
                break;
            case 3:
                // Modificar estado de un envío
                modificarEstadoDeUnEnvio(numerosID, pesos, destinos, horasPlanificadas, estados);
                break;
            case 4:
                // Mostrar envíos para un destino
                printf("Destino a buscar: ");
                printf("\n1- Rosario");
                printf("\n2- Funes");
                printf("\n3- Roldan");
                printf("\n4- Baigorria");
                printf("\n");
                scanf("%d", &des);
                while (des < 1 || des > 4 ) {
                    printf("El entero debe ser mayor igual a 1 o menor igual a 4\n");
                    scanf("%d", &des);
                }
                mostrarEnvioParaDestino(des, numerosID, pesos, destinos, horasPlanificadas, estados);
                break;
                case 5:
                break;
            case 6:
                mostrarEnviosPendientes(numerosID, pesos, destinos, horasPlanificadas, estados);    
                break;
            case 7:
                mostrarEnviosDespachados(numerosID, pesos, destinos, horasPlanificadas, estados);    
                break;
            default:
                printf("La opci%cn ingresada es inv%clida\n", 162, 160);
            }
        

    } while (opcion != 5);
    
    if (opcion == 5) {
        printf("Ha salido del sistema\n");
    }
    system("pause");
    return 0;
}

void cargarEnvios(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[])
{
    printf("--Ingrese los datos de los env%cos--\n", 161);

    for (int i = 0; i < tam; i++)
    {
        printf("Nro. de env%co: ", 161);
        scanf("%d", &arrayIds[i]);
        while(arrayIds[i] < 100 || arrayIds[i] > 999) {
            printf("Ingrese un numero entre 100 y 999\n");
            scanf("%d", &arrayIds[i]);
        }

        printf("Ingrese el peso: ");
        scanf("%f", &arrayPesos[i]);
        while(arrayPesos[i] < 0) {
            printf("Ingrese un peso positivo\n");
            scanf("%d", &arrayPesos[i]);
        }

        printf("Ingrese el destino: ");
        printf("1- Rosario\n");
        printf("2- Funes\n");
        printf("3- Roldan\n");
        printf("4- Baigorria\n");
        printf("\n");
        scanf("%d", &arrayDestinos[i]);

        printf("Ingrese la hora: ");
        scanf("%d", &arrayHorasPlanificadas[i]);
        while (arrayHorasPlanificadas[i] < 8 || arrayHorasPlanificadas[i] > 22) {
            printf("La hora planifica es de 8 a 22 hs\n");
            scanf("%d", &arrayHorasPlanificadas[i]);
        }

        printf("Ingrese el estado: ");
        printf("\n0- Pendiente");
        printf("\n1- Despachado");
        printf("\n");
        scanf("%d", &arrayEstados[i]);
    }
}

void mostrarEnvios(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[])
{
    for (int i = 0; i < tam; i++)
    {
        printf(" %d \t", arrayIds[i]);
        printf(" %.2f \t", arrayPesos[i]);
        switch (arrayDestinos[i])
        {
        case 1:
            printf("Rosario");
            break;
        case 2:
            printf("Funes");
            break;
        case 3:
            printf("Roldan");
            break;
        case 4:
            printf("Baigorria");
            break;
        default:
            printf("Destino inv%clido\n", 160);
        }
        printf("\t");
        printf("%d hs \t", arrayHorasPlanificadas[i]);

        switch (arrayEstados[i])
        {
        case 0:
            printf("Pendiente");
            break;
        case 1:
            printf("Despachado");
            break;
        default:
            printf("Estado inv%clido\n", 160);
        }

        printf("\n");
    }
}

void modificarEstadoDeUnEnvio(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[])
{
    int nroID = 0, est = 0;
    int encontrado = 0;

    printf("Nro del env%co a modificar:", 161);
    scanf("%d", &nroID);
    /* hay que recorrer el array arrayId hasta encontrar un codigo de envio que sea igual nroID
    una vez que se encuentra ese codigo, hay q  modificar el estado*/
    for (int i = 0; i < tam; i++) {
        if (nroID == arrayIds[i]) {
            printf("Nuevo estado\n");
            printf("pendiente\n");
            printf("despachado\n");
            scanf("%d", &est);
            arrayEstados[i] = est;
            encontrado = 1;


        }

        
    }
    if  (encontrado != 1) {
            printf("envio inexistente\n");
        }

}


//muestra de enviosparadestino
    void mostrarEnvioParaDestino(int destino, int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[])
{
/* ingresar desde teclado un valor de destino y mostrar todos los envios para ese destino
por ejemplo, ingresar 1 y luego mostrar todos los envios planificados para el destino 1, que es Rosario*/
{
	for(int i = 0; i < tam; i++)
    {
        if (arrayDestinos[i] == destino)
        {
            printf(" %d \t", arrayIds[i]);
            printf(" %.2f \t", arrayPesos[i]);
            printf(" %d hs \t", arrayHorasPlanificadas[i]);

            switch(arrayEstados[i])
            {
                case 0:
                    printf("Pendiente");
                    break;
                case 1:
                    printf("Despachado");
                    break;
                default:
                    printf("Estado inv%clido\n", 160);
            }
            printf("\n");
        } 
    }
}
}

//envios pendientes
void mostrarEnviosPendientes(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[]) {
    for (int i = 0; i < tam; i++) {
        if (arrayEstados[i] == 0) {
            switch (arrayDestinos[i])
        {
        case 1:
            printf("Envio pendiente: %d\t%.2f\tDestino: Rosario\t%d\t%d\n", arrayIds[i], arrayPesos[i], arrayHorasPlanificadas[i], arrayEstados[i]);
            break;
        case 2:
           printf("Envio pendiente: %d\t%.2f\tDestino: Funes\t%d\t%d\n", arrayIds[i], arrayPesos[i], arrayHorasPlanificadas[i], arrayEstados[i]);
            break;
        case 3:
            printf("Envio pendiente: %d\t%.2f\tDestino: Roldan\t%d\t%d\n", arrayIds[i], arrayPesos[i], arrayHorasPlanificadas[i], arrayEstados[i]);
            break;
        case 4:
            printf("Envio pendiente: %d\t%.2f\tDestino: Baigorria\t%d\t%d\n", arrayIds[i], arrayPesos[i], arrayHorasPlanificadas[i], arrayEstados[i]);
            break;
        default:
            printf("Destino inv%clido\n", 160);
        }


            
    }
    }
}

//Envios despachados
void mostrarEnviosDespachados(int arrayIds[], float arrayPesos[], int arrayDestinos[], int arrayHorasPlanificadas[], int arrayEstados[]) {
    for (int i = 0; i < tam; i++) {
        if (arrayEstados[i] == 1) {
            switch (arrayDestinos[i])
        {
        case 1:
            printf("Envio despachado: %d\t%.2f\tDestino: Rosario\t%d\t%d\n", arrayIds[i], arrayPesos[i], arrayHorasPlanificadas[i], arrayEstados[i]);
            break;
        case 2:
           printf("Envio despachado: %d\t%.2f\tDestino: Funes\t%d\t%d\n", arrayIds[i], arrayPesos[i], arrayHorasPlanificadas[i], arrayEstados[i]);
            break;
        case 3:
            printf("Envio despachado: %d\t%.2f\tDestino: Roldan\t%d\t%d\n", arrayIds[i], arrayPesos[i], arrayHorasPlanificadas[i], arrayEstados[i]);
            break;
        case 4:
            printf("Envio despachado: %d\t%.2f\tDestino: Baigorria\t%d\t%d\n", arrayIds[i], arrayPesos[i], arrayHorasPlanificadas[i], arrayEstados[i]);
            break;
        default:
            printf("Destino inv%clido\n", 160);
        }
}
    }
}