//pide un numero y muestra su cuenta regresiva hasta 0
//bucle while para contar hacia atras desde un numero solicitado por la terminal
#include <stdio.h>
int main(){
    //ENTRADA DE DATOS

    int numero;
    //PROCESAMIENTO DE DATOS
    printf("introduce un numero \n");
    scanf("%d", &numero);

    //SALIDA DE DATOS
    while(numero >= 0){
        printf("el numero es: %d\n", numero);
        numero--; //operador de descremento, resta 1 al valor de numero
    }
    return 0;
}
