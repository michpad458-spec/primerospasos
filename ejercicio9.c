//primer ejercicio de bucles comenzamos por el bucle switch
//que sirve para evaluar una variable y ejecutar un bloque de codigo dependiendo del valor 
#include <stdio.h>
int main() {
    //aqui 
    //ENTRADA DE DATOS

    int opcion; // variable para almacenar la opcion del ususario
    //PROCESAMIENTO DE DATOS
    printf("escribe un numero del 1 al 5 para saber que dia de la semana es \n");
    scanf("%d",&opcion); //leer y guardar el valor introducido por el usuario en la variable
    
    //SALIDA DE DATOS
    //comenzamos por el switch
    switch(opcion){
        //caso opcion es 1, muestra el texto lunes en la terminal
        case 1: printf("lunes \n");
        break; //finaliza el bloque de codigo y sale del swich
        case 2: printf("martes\n");
        break;
        case 3: printf("miercoles \n");
        break;
        case 4: printf("jueves \n");
        break;
        case 5: printf("viernes \n");
        break;
        //por si acaso no coincide el numero con las opciones vamos a establecer una opcion por defecto 
        default: printf("opcion no valida \n");
    
    }
    return 0;

}