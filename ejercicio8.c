// Solicita dos números y muestra cuál es mayor o si son iguales.

#include <stdio.h>

int main(void) {
    int num1;
    int num2;

    printf("Introduce el primer numero: ");
    scanf("%d", &num1);
    printf("Introduce el segundo numero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d es mayor que %d\n", num1, num2);
    } else if (num1 < num2) {
        printf("%d es menor que %d\n", num1, num2);
    } else {
        printf("Los numeros son iguales\n");
    }

    return 0;
}
 