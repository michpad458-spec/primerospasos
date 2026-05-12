//establecer un descuento segun la edad
// >=18 y <= a 65 descuento del 20%
// >65 años descuento del 40%
// <18 no hay descuento
#include <stdio.h>
int main() {
    int edad; //variable declarada pero sin valor
    printf("introducir tu edad para saber tu descuento \n");
    scanf("%d", &edad); // leer y guardar el valor introducido por el usuario en la variable edad

    if (edad < 18) {
        printf("no tienes un descuento\n");
    }
     else if (edad <= 65) {
        printf("tienes un descuento del 20%%\n");

    } else {
        printf("tienes un descuento del 40%%\n");
    }

    return 0;
}
