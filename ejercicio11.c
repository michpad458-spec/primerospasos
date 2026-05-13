//bucle while primer ejercicio
//mostrar numeros del 1 al 10
#include <stdio.h>
int main() {
    //el bucle while
    int numeroInicial = 1; 
    int numeroFinal = 10000;
    //nombre del bucle parentesis para la condicion
    //entre llaves el codigo a ejecutar
    while(numeroInicial <= numeroFinal) {
        printf("%d\n", numeroInicial);
        numeroInicial++; //operador de incremento suma 1 al valor de numeroInicial
        //suma 1 al valor de numeroInicial

    }
    return 0;

}
