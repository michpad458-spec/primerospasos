//contador de numerospares e impares

#include <stdio.h>

int main() {

    int pares= 0;
    int impares= 0;
    int entradas[10]= {18,22,15,34,66,87,97,26,22,19};

    for(int i= 0; i <= 9; i++){impares= impares + (entradas [i] %2);}
    
    printf("cantidad de numeros impares= %d \n", impares);
    printf("cantidad de numeros pares= %d \n", pares);

    return 0;

}
