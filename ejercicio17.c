//crea un programa 
//averiguar un numero es cero, positivo o negativo
//realizar una accion

#include <stdio.h>

int main () {
    //ENTRADA DE DATOS
    int numero_usuario;
    printf("introducir un numero \n");
    //almaceno el numero introducido en la variable
    scanf("%d", &numero_usuario);

    //PROCESAMIENTO DE LOS DATOS
    if (numero_usuario > 0) {
        //el numero es positivo y mostrar la tabla de multiplicar con un bucle
        printf("el numero es positivo\n");
        for (int i = 1; i <= 10; i++) {
            //bucle para mostrar la tabla de multiplicar del numero usuario
            printf("%d x %d = %d\n", i, numero_usuario, i * numero_usuario);
        }
    } else if (numero_usuario < 0) {
        //el numero es negativo
        printf("el numero es negativo\n");
    } else {
        printf("el numero es cero\n"); //no hacemos nada en absoluto, solo indicarlo
    }
    return 0;
}

