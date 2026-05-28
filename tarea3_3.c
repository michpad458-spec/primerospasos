//

#include <stdio.h>

int main() {
    //entrada de datos
    int num1, num2; //numero que introduce el ususario
    int operacion = 0; //operacion que elige
    int resultado;

    printf("introduce num1 \n"); // se ejecuta el programa
    scantf(" %d", &num1);
    printf("introduce num2 \n");
    scantf(" %d", &num2);

    printf("introducir tipo de operacion: \n");
    scantf(" %d", &operacion);

    while(operacion !=5) {
        //mientras la operacion no sea 5 continuamos con el programa

switch(operacion) {
        case 1: //realizar suma
        resultado = num1 + num2;
        break;

        case 2: //realizar resta
        resultado = num1 - num2;
        break;

        case 3: //realizar multiplicacion
        resultado = num1 * num2;
        break;

        case 4: //realizar la division
        resultado = num1 / num2;
        break;

        //utilizar default para salir del bucle
        default: resultado = 0;
        operacion = 5;
        break;
    }

    //muestra el resultado de la operacion seleccionada
    printf("el resultado es: %d", resultado \n);
    //vuelvo a pedir la operacion a realizar 
    printf("introducir tipo de operacion: \n");
    scantf("%d", &operacion);

    }
     printf("gracias por usar la calculadora \n");
     
    return 0;
}
