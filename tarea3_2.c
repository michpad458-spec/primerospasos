// numero secreto
//adivina el numero

#include <stdio.h>

int main() {

    //ENTRADA DE DATOS 

    int minumeroSecreto = 1038;
    int numeroUsuario;
    int minimo = 0;
    int maximo = 2000;

    //PROCESAMIENTO DE DATOS

    printf("adivina el numero secreto: \n");
    scantf(" %d, &numeroUsuario");

    while(numeroUsuario != minumeroSecreto) {

        //adivinar el numero
        //hasta el final
    }

    //comparar y sacar mensaje

    //SALIDA DE DATOS

    if(nueroUsuario == minumeroSecreto) {
        printf("felicidades, adivinaste el numero secreto \n");
    }

    else if(numeroUsuario > minumeroSecreto) {
        printf("demasiado alto, intenta de nuevo \n");
        maxi = numeroUsuario;
    }

    else (numeroUsuario < minumeroSecreto) {
        printf("demasiado bajo", intenta de nuevo \n);
        minimo = numeroUsuario;
    }

    return 0;
}
