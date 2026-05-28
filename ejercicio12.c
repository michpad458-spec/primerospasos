//Muestra los números pares del 1 al 20 usando while.

#include <stdio.h>

int main() {
    int numerosPares = 2;

    while(numerosPares <= 20) {
        printf("numerosPares es: %d \n", numerosPares);
        numerosPares += 2;
    }
    return 0;
}
