//muestra los numeros del 1 al 50 que sean multiplos de 3

#include <stdio.h>

int main() {
    int multiplos= 3;

    while(multiplos <= 50) {
        printf("multiplos: %d \n", multiplos);
        multiplos += 3;
    }

    return 0;

}
