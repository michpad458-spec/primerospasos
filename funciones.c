//funciones

//funcion principal
#include <stdio.h>
//funcion predefinida dentro del lenguaje c

//creacion de funciones propias para volver a reutilizar codigo
//funcion para poder sumar dos o mas numeros
//como no conozco los numeros a sumar
//utilizo un comodin llamado parametro que es una variable que mas adelante tendra
//dentro de los parentesis de la funcion coloco los parametros que necesite


int suma(int numero1, int numero2) {
    int resultado = numero1 + numero2;
    return resultado;
}
int restar(int numero1, int numero2) {
    int resultado = numero1 - numero2;
    return resultado;
}
int multiplicar(int numero1, int numero2) {
    int resultado = numero1 * numero2;
    return resultado;
}

//empieza la funcion principal
int main() {
    //dentro de las llaves de la funcion principal
    //ENTRADA DE DATOS
    int mi numero1, mi numero2; //numeros que solicita por terminal para sumarlos
    printf("primer numero: \n");
    scanf("%d, &minumero1");
    printf("segundo numero: \n");
    scantf("%d, &minumero2");
    //PROCESAMIENTO DE DATOS
    int miresultadoSuma= suma(minumero1, minumero2); //llamada a la funcion
    int miresultadoResta= resta(minumero1, minumero2);
    int mi resultadoMultiplicacion = multiplicar(mi numero1, mi numero2);

    //SALIDA DE DATOS
    printf("el resultado de la suma es: %d \n", miresultadosuma);
    printf("el resultado de la resta es: %d \n", miresultadoResta);
    printf("el resultado de la multiplicacion es: %d \n", miresultadoMultiplicacion);

    return 0;

    } // aqui termina la funcion
