//determinar si un  numero es mayor de 10 y positivo
#include <stdio.h>

int main() {
    int num = 15;
    //añadir una ventana que permita al usuario ingresar un numero
    printf("ingrese un  numero: ");
    scanf ("%d", &num);
    int resultado = (num > 10) && (num >= 0);
    printf("el valor de resultado es: %d \n", resultado);

    return 0;

}
     