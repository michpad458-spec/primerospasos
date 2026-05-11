#include <stdio.h> //incluir la libreria standard de entrada y salida input output
int main() {
    //ENTRADA DE DATOS
int a = 5;
int b = 10;

    //PROCESAMIENTO
    //bool boleanos verdad o falso las comparaciones me devuelven un valor de verdad o falso
    int resultado1 = a > b; // operador de comparacion mayor que, devuelve 1 si es verdadero y 0 si es falso
    int resultado2 = a < b;
    int resultado3 = a == b;
    int resultado4 = a!= b;

    //comparar a>b

    //SALIDA DE DATOS
   printf("el numero %d es mayor que el numero %d : %d\n", a, b, resultado1); //o directamente la variable del resultado de la comparacion
   printf("el numero %d es menor que el numero %d : %d\n", a, b, resultado2);
   printf("el numero %d es igual que el numero %d : %d\n", a, b, resultado3);
   printf("el numero %d es diferente que el numero %d : %d\n", a, b, resultado4);

    return 0;
}
 