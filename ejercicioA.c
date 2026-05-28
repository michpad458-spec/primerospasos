
#include <stdio.h>
int main() {
    int usuario;
    int edad= 19; //edad del usuario
    int nota=5; // nota de examen del usuario
    int falta= 100;
    int operacion= 0;
    int resultado;

    printf("introduce tu edad \n",edad);
    scanf("%d", &edad);
    printf("introduce tu nota\n");
    scanf("%d", &nota);

    //muestra el resultado de la operacion seleccionada
    printf("el resultado es: %d\n", resultado);
    printf("introducir tipo de operacion\n",operacion);
    scanf("%d", &operacion);

    //comprobando si el usuario es mayor de edad
    if (edad >=18) {
        printf("eres mayor de edad\n");
    }
    else{
        printf("eres menor de edad\n");
    }

    //comprobando la nota de examen 
    if (nota >=5) {
        printf("has aprobado\n");
    }
    else{
        printf("has reprobado\n");
    }
    
    //identificando la edad del usuario para saber cuantos años le faltan para cumplir 100
    switch(operacion) {
        case 1: //realizar resta 
        resultado= edad-falta;
        break;
         }
 
         //muestra el resultado de la operacion seleccionada
    printf("el resultado es: %d\n", resultado);
    //vuelvo a pedir la operacion a realizar 
    printf("introducir tipo de operacion: \n");
    scanf("%d", &operacion);


         return 0;

    }

