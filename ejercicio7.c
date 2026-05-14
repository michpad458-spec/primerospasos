//dado un numero n indica, si es positivo, negativo o cero
#include <stdio.h>

int main() {

    int num;
    printf("introduce un numero: ");
    scanf("%d", &num);

    //empieza la sentencia condicional
    if (num > 0) {
        //la accion a realizar si la condicion es verdadera
        printf("el numero es positivo \n");

    } else if (num < 0) {
        //accion a realizar si la condicion es igual 
        printf("el numero es negativo\n");

    } else {
        //accion a realizar si la condicion no cumple ninguna de las anteriores
        printf("el numero es cero\n");
    }
    return 0;
}
