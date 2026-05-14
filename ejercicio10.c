//solicitar 2 numeros y realizar una operacion 
#include <stdio.h>
int main () {
    // ENTRADA DE DATOS
    int numero1;
    int numero2;
    int operacion;
    float resultado;

    //PROCESAMIENTO DE DATOS
    printf("introduce el primer numero\n");
    scanf("%d", &numero1);
    printf("introduce el segundo numero\n");
    scanf("%d", &numero2);
    printf("introduce la operacion (1 para suma, 2 para resta, 3 para multiplicacion, 4 para division)\n");
    scanf("%d", &operacion);

    //SALIDA DE DATOS
    switch(operacion){
        case 1:resultado = numero1 + numero2;
            printf("el resultado de la suma es: %.2f\n", resultado);
            break;
        case 2:resultado = numero1 -numero2;
            printf("el resultado de la resta es: %.2f\n", resultado);
            break;
        case 3:resultado = numero1 * numero2;
            printf("el resultado de la multiplicacion es: %.2f\n", resultado);
            break;
        case 4:resultado = numero1 / numero2;
                printf("el resultado de la division es: %.2f\n", resultado);
                break;
                default: printf("operacion no valida\n");
            }
            return 0;
    }

