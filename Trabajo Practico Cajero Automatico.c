//Integrantes : Luca Bruzzo, Julian Brion, Facundo Gomez
#include <stdio.h>
#include <string.h>

void cargaClientes(int IDs[], int Contrasenas[], int Estados[], char Nombres[][20], float Saldos[]);
int inicioSesion (int IDs[], int Contrasenas[], int Estados[], char Nombres[][20]);
void deposito(float Saldos[], int chequeoIngreso);
void extraccion(float Saldos[], int chequeoIngreso);
void consultarElSaldo(float Saldos[],int chequeoIngreso );
void cantOperacionesYSaldo(float Saldos[], int chequeoIngreso, int cantidadOperaciones);
int numCuentaIngreso, contrasenaIngreso;

int main() {

    int idCuenta[10], contrasena[10], estado[10];
	char nombre[10][20];
    float saldo[10];
    

    /*opc es para el menu de opciones de switch, verificacionIngreso guarda el numero de cliente, una vez logueado correctamente, es decir el indice.*/
    int opc,verificacionIngreso, cantOperaciones; 
    int repetirMenu = 1; /*repetirmenu igual a 1 lo utilizamos para que el menu siempre se repita dentro del primer do - while de la linea 28 */
    
    
    printf("BIENVENIDO AL BANCO PRIVADO\n");

    cargaClientes(idCuenta, contrasena, estado, nombre, saldo);/*funcion para cargar los clientes del banco*/
    do {
    verificacionIngreso = inicioSesion(idCuenta, contrasena, estado, nombre);  /*verificacionIngreso guarda el numero de cliente una...
                                                                                  .....vez logueado correctamente, es decir el indice.*/
       
        if ((verificacionIngreso > - 1) && (verificacionIngreso <= 9)) { /* si el indice es un numero entre 0 y 9, entonces se ejecuta el do while interno.*/

        cantOperaciones = 0; /*contador para la cantidad de operaciones realizadas. Inicializamos en 0*/
        do {
        printf("Ingrese una opci%cn del Menu\n", 162);
        //Todo lo relacionado al menu
        printf("1-Deposito\n2-Extracci%cn\n3-Consultar saldo\n4-Cantidad de operaciones realizadas y el saldo actual\n5-Salir de la sesion actual\n", 162);
        scanf("%d", &opc);

            switch (opc) {
            case 1:
                deposito(saldo, verificacionIngreso);
                
                cantOperaciones++;
            break;

            case 2: 
                extraccion(saldo, verificacionIngreso);

                cantOperaciones++;
            break;

            case 3: 
                consultarElSaldo(saldo,verificacionIngreso);
                     cantOperaciones++;
                
            break;

            case 4: 
               
                cantOperacionesYSaldo(saldo, verificacionIngreso, cantOperaciones);

            break;

            case 5:
            printf("Ha salido de sesi%cn\n", 162);
            break;

            default:
                printf("Opcion invalida\n");
                break;
            }
            
        
        
        
        

        
        
    } while(opc != 5 && cantOperaciones < 10); /*si el usuario elige la opcion 5 o llega a los 10 movimientos se sale del do-while interno de la linea 28.../*
                                 /*... pero sigue dentro del do- while externo de la linea 35, para  que de este modo se repita el menu principal en pantalla...*/
                                                /*...quedando el mismo disponible para un nuevo usuario*/
    
    if (cantOperaciones == 10) {
    printf("Lleg%c al l%cmite de operaciones. Fin. Gracias!\n", 162, 161); /*este cartel solo se mnuestra cuando el contador llega a 10 operaciones*/
    }
        

    }
    } while (repetirMenu == 1); /*repetir menu igual a 1 lo utilizamos para que el menu siempre se repita dentro del primer do - while, el externo */
       
       
        return 0;
      } 
       


    //cargamos todos los clientes con sus datos
void cargaClientes(int IDs[], int Contrasenas[], int Estados[], char Nombres[][20], float Saldos[]) {
     
    IDs[0] = 8924;
    Contrasenas[0] = 748692;
    Estados[0] = 1;
    strcpy(Nombres[0], "Facundo Gomez");
    Saldos[0] = 80000;
   
    
    IDs[1] = 4254;
    Contrasenas[1] = 184320;
    Estados[1] = 1;
    strcpy(Nombres[1], "Julian Brion");
    Saldos[1] = 8500000;
    
  

    IDs[2] = 8452;
    Contrasenas[2] = 385732;
    Estados[2] = 1;
    strcpy(Nombres[2], "Luca Bruzzo");
    Saldos[2] = 100000;
    
    

    IDs[3] = 6033;
    Contrasenas[3] = 907842;
    Estados[3] = 0;
    strcpy(Nombres[3], "Lionel Messi");
    Saldos[3] = 400000;
    

    IDs[4] = 1460;
    Contrasenas[4] = 583259;
    Estados[4] = 1;
    strcpy(Nombres[4], "Cristiano Ronaldo");
    Saldos[4] = 700000;
    

    IDs[5] = 7317;
    Contrasenas[5] = 912430;
    Estados[5] = 0;
    strcpy(Nombres[5], "Kylian Mbappe");
    Saldos[5] = 1000000;
    

    IDs[6] = 9742;
    Contrasenas[6] = 142587;
    Estados[6] = 1;
    strcpy(Nombres[6], "Javier Milei");
    Saldos[6] = 800000;
    

    IDs[7] = 1027;
    Contrasenas[7] = 853024;
    Estados[7] = 0;
    strcpy(Nombres[7], "Cristina Fernandez de k");
    Saldos[7] = 500000;
    

    IDs[8] = 6753;
    Contrasenas[8] = 102734;
    Estados[8] = 1;
    strcpy(Nombres[8], "Brad Pitt");
    Saldos[8] = 1200000;
    

    IDs[9] = 9632;
    Contrasenas[9] = 918273;
    Estados[9] = 0;
    strcpy(Nombres[9], "Leonardo Di Caprio");
    Saldos[9] = 1500000;
    

    
}

//Funcion de inicio de sesion

int inicioSesion(int IDs[], int Contrasenas[], int Estados[], char Nombres[][20]) {
        int index;
        int intentosIngreso = 0; /*contamnmos la cantidad de intentos con este contador, si llega a 2 , debe bloquear la cuenta*/
        
        int encontrado = 0; /*una bandera, si el usuario y la contraseña son correctos, cambia de 0 a 1, para salir del bucle do-while */
        
             /*esta estructura do-while, se repetira siempre que el cliente NO ingrese ID y contraseñá CORRECTA y la cantidad de intentos no superen a 3.
             Este do-while y sus acciones por verdadero están en la linea 242 */
                do {
                    puts("Ingrese su numero de cuenta");
                    scanf("%d", &numCuentaIngreso);
                    printf("Ingrese su contrase%ca\n", 164);
                    scanf("%d", &contrasenaIngreso);


/*realizamos una busqueda con un for, comparando cada ID y contrasenia almacenada de cada cliente, con las ingresadas por el usuario. Cómo son 10 clientes los 
cargados, recorremos el for del 0 al 9. El cliente econtrado será el que ingrese el ID y contrasenia correcta. Una vez econtrado almacenamos el numero de cliente i
en la variable index */


                    for(int i = 0; i < 10; i++) {
        //caso en el que el cliente haya ingresado correctamente ID, contraseña y este activo
        if ((numCuentaIngreso == IDs[i]) && (contrasenaIngreso == Contrasenas[i]) && (Estados[i] == 1)) {
            printf("---HA INGRESADO SESI%cN---\n", 224);
            printf("Nombre: %s\tEstado: Activo\t\n", Nombres[i]);
            encontrado = 1; /*una bandera, si el usuario y la contraseña son correctos, cambia de 0 a 1, para salir del bucle do-while */
            
            index = i; /*si es encontrado el usuario, asignamos  la posicion del mismo en la variable index, la que luego retornaremos al programa principal*/
        }

        //caso en el que el cliente haya ingresado incorrectamente ID o contraseña 
        /*en este else-if es importante el contador de la linea 236, que contabiliza la cantidad de intentos */
        else if ((numCuentaIngreso != IDs[i]) || (contrasenaIngreso != Contrasenas[i])) {
            


            if (intentosIngreso == 2) {
                Estados[i] = 0;  /*si los intentos fallidos llegan a 3,  el contador  también llega a 2, y el estaddo del cliente cambia a bloqueado, 
                                   ademas de salir del do -while */
               
               
                if (i == 9) {
                printf("No se permiten m%cs intentos. Su cuenta ha sido bloqueada, comun%cquese con la entidad bancaria para su restablecimiento\n", 160, 161);
                } /*el cartel de la linea 221 solo se muestra cuando el ciclo for realiza su ultima iteracion y la cantidad de intentos fallidos son 3, y el
                contador llega a 2. complementamos los carteles que visualiza en usuario en caso de que ingrese ID o contrasenia incorrecta y no 
                llegue al maximo de intentos  en la linea 240 */
                
            } 
            
    }

        //caso en el que el cliente haya ingresado correctamente ID, contraseña y no este activo
        else if (numCuentaIngreso == IDs[i] && contrasenaIngreso == Contrasenas[i] && Estados[i] == 0) {
            printf("Su cuenta se encuentra bloqueada, comun%cquese con la entidad bancaria para su restablecimiento\n", 161);
            encontrado = 1; /*una bandera, si el ID y la contraseña son correctos y está bloqueado, cambia de 0 a 1, para salir del bucle do-while */
        }
        
        }
            intentosIngreso++; /*contamnmos la cantidad de intentos por fuera del for*/

            if ((intentosIngreso < 3) && (encontrado == 0)) {
                printf("Cuenta o contrase%ca incorrecta, ingrese de nuevo los datos\n", 164);
                      //visualizamos este cartel en el caso de el usuario  ingrese ID  o contresenia incorrecta, y los intentos sean menor a 3
            }
        } while((encontrado == 0) && (intentosIngreso < 3));

        
             

        
           
            
            return index; /*si el usuario logra iniciar sesion retornamos el indice del cliente al programa principal*/
} 

//funcion deposito
void deposito(float Saldos[], int chequeoIngreso) {
        float montoDeposito;
        printf("Ingrese la cantidad de dinero a depositar\n");
        scanf("%f", &montoDeposito);

/*validamos que el monto a depositar sea un valor mayo a cero*/
while(!(montoDeposito>0)){
    printf("INGRESE UNA CANTIDAD MAYOR A CERO\n");
    scanf("%f", &montoDeposito);
}


        Saldos[chequeoIngreso] += montoDeposito;
        
        

}
    
//funcion extraccion
void extraccion(float Saldos[], int chequeoIngreso) {
    float montoExtraccion;
    printf("Ingrese el monto de extracci%cn\n", 162);
    scanf("%f", &montoExtraccion);

    /*validamos  que el monto a extraer  sea un valor menor al saldo disponible*/
    while (montoExtraccion > Saldos[chequeoIngreso]) {
        printf("El monto de extracci%cn no puede superar a la cantidad de saldo\n", 162);
        scanf("%f", &montoExtraccion);
    }
    Saldos[chequeoIngreso] -= montoExtraccion;
    
}

//funcion de cantidad de operaciones y saldo
void cantOperacionesYSaldo(float Saldos[], int chequeoIngreso, int cantidadOperaciones) {
    printf("Su saldo es %.3f\n",Saldos[chequeoIngreso]);
    printf("Cantidad de operaciones realizadas %d\n", cantidadOperaciones);
}


//funcion para consultar SOLO  el saldo
void consultarElSaldo(float Saldos[], int chequeoIngreso){

printf("Su saldo es %.3f\n",Saldos[chequeoIngreso]);



}













   





