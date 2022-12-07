//1SF111 VICTOR ARROCHA 8-996-1219
//1SF111 SEBASTIAN OLIVERA 20-05-7353

#include <stdio.h>

void main(){
    int select, x, y, home;
    char* templaca[6], z[6];
    
    //DECLARACION DE VARIABLES
    home=1;
    
    //ARREGLO ESTACIONAMIENTOS
    char* parking[10];
    parking[0]="VACIO";
    parking[1]="VACIO";
    parking[2]="VACIO";
    parking[3]="VACIO";
    parking[4]="VACIO";
    parking[5]="VACIO";
    parking[6]="VACIO";
    parking[7]="VACIO";
    parking[8]="VACIO";
    parking[9]="VACIO";
    parking[10]="VACIO";
    //ARREGLO VEHICULOS AUTORIZADOS
    
    char* list[2][15];
    list[0][0]="AZ4111";
    list[0][1]="Serena Zapata   ";
    list[1][0]="BM5983";
    list[1][1]="Camilo Camargo  ";
    list[2][0]="CR5195";
    list[2][1]="Fermín Ferrer   ";
    list[3][0]="KL8965";
    list[3][1]="Calem Castillo  ";
    list[4][0]="KA7563";
    list[4][1]="Brock Vasquez   ";
    list[5][0]="AR7886";
    list[5][1]="Leo Messi       ";
    list[6][0]="HO6932";
    list[6][1]="Brandon Rendon  ";
    list[7][0]="SN7128";
    list[7][1]="Cintia Lopez    ";
    list[8][0]="CJ6942";
    list[8][1]="Carlos Carmin   ";
    list[9][0]="UN5721";
    list[9][1]="Hilberto Campos ";
    list[10][0]="LU3670";
    list[10][1]="Selena Luna     ";
    list[11][0]="GA4183";
    list[11][1]="Gloria Garcia   ";
    list[12][0]="SO3012";
    list[12][1]="Joseph Jordan   ";
    list[13][0]="VA6321";
    list[13][1]="Alberto Rios    ";
    list[14][0]="PA9685";
    list[14][1]="Juliana Sandoval";
    
    //MENU PRINCIPAL
    printf("Bienvenidos al Sistema Administracion de Estacionamientos\n\n");
    
    while(home==1){
        printf("Ingrese el numero de la accion que desea tomar:\n");
        printf("    1. Ver los estacionamientos ocupados y disponibles.\n");
        printf("    2. Asignar el estacionamiento.\n");
        printf("    3. Salir del estacionamiento.\n");
        printf("    4. Registro de acceso (Historial).\n");
        printf("    5. Ver el listado de vehículos autorizados.\n");
        printf("    6. Salir del sistema.\n");
    
    //SELECCION DE OPCIONES
        scanf("%d",&select);
        switch(select){
            case 1:
                //1. Ver los estacionamientos ocupados y disponibles.
                printf("\nESTADO DE ESTACIONAMIENTOS: \n");
                for(x=1; x<11;x++) {
                    printf("    |Espacio #%d:%s|\n", x, parking[x]);
                }
            break;
            
            case 2:
                //2. Acceder al estacionamiento.
                printf("\nASIGNAR EL ESTACIONAMIENTO:\n Ingrese la placa del vehiculo que desea acceder:\n");
                scanf("%s", &templaca[6]);
                printf("%s", templaca);
                for(x=0; x<15; x++){
                    if(templaca[6]==list[x][0]){
                        printf("El usuario esta autorizado\n");
                        x=888;
                    }
                    else{
                        printf("xd\n");
                        
                    }
                }
                printf("%d",x);
        
                 printf("El usuario no esta autorizado\n");
            break;
            
            case 3:
                //Llamar Funcion
            break;
            
            case 4:
                //Llamar Funcion
            break;
            
            case 5:
                //5. Ver el listado de vehículos autorizados.
                printf("\nVEHICULOS AUTORIZADOS Y SUS PROPIETARIOS: \n");
                for(x=0; x<15;x++) {
                    for(y=0; y<2;y++) {
                        printf("    |%s| ", list[x][y] );
                    }
                    printf("\n");
                }
            break;
            
            case 6:
                //Llamar Funcion
                home=0;
            break;
        }
    }
}
