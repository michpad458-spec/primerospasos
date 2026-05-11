#include <stdio.h>
//programa funcion principal
int main() {
    //ENTRADA DE DATOS
int quince = 15;
int siete = 7;
int veinte= 20;
int cuatro = 4;
int seis = 6;
int tres = 3;
int diez = 10;
int dos = 2;
int a = 10;
int b = 3;

    //PROCESAMIENTO DATOS
int resultadosumar = quince + siete; //almacenar el resultado en una variable
int resultadorestar = veinte - cuatro; 
int resultadomultiplicar = seis * tres;
int resultadodividir = diez / dos;
int resultadoresto = a % b;

    //SALIDA DE DATOS
    printf("el resultado de sumar %d y %d es: %d\n", quince, siete, resultadosumar);
printf("el resultado de restar %d y %d es: %d\n", veinte, cuatro, resultadorestar);
printf("el resultado de multiplicar %d y %d es: %d\n", seis, tres, resultadomultiplicar);
printf("el resultado de dividir %d y %d es: %d\n", diez, dos,resultadodividir);
printf("el resultado de resto de %d y %d es: %d\n", a, b, resultadoresto);

    return 0;
}
