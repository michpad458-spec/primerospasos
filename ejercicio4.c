#include <stdio.h>
//operador logicos

int main() {
    //estrustura de nuestros programas
    //ENTRADA DE DATOS
    int x = 8;
    int y = 3;
    int resultado1 = (x > 5) && (y < 5); // primero se evalua la condicion del primer parentesis
    //luego del segundo 
    //y si ambas son verdaderas devuelve como valor de resultado1 Verdadero (1)
    int resultado2 = (x < 5) || (y < 5);
    int resultado3 = !(x > y);

    //PROCESAMIENTO DE DATOS

    //SALIDA DE DATOS
    printf("el valor de resultado1 es: %d\n", resultado1);
    printf("el valor de resultado2 es: %d\n", resultado2);
    printf("el valor de resultado3 es: %d\n", resultado3);

    return 0;

}
