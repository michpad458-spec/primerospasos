//mi primer archivo de sentencias condicionales
#include <stdio.h> //incluir la libreria estandar de entrada y salida de datos
int main () {
    //NUESTRO PRIMER PROGRAMA CONDICIONAL
    int edad = 18;//variables que guarda la edad
    printf("introducir la edad: ");
    scanf("%d", &edad);//leer y guardar en la variable edad el valor introducido por el usuario

    //empieza la sentencia condicional
    if (edad >= 18) {
        //la accion a realizar si la condicion es verdadera
        printf("eres mayor de edad\n");
    }
    else {
        //accion a ejecutar si no se cumple la condicion 
        printf("eres menor de edad\n");
    }
    return 0;

}
