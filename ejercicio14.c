//bucle for
//para mostrar la tabla de multiplicar del 5
#include <stdio.h>
int main() {
    //ENTRADA DE DATOS
    int numero = 5;
    int i;

    //PROCESAMIENTO DE DATOS
    for (int i =0; i <= 10; i++) {
        //SALIDA DE DATOS
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}
