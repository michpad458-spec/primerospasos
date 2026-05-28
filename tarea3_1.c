//cajero automatico simple

#include <stdio.h>

int main() {

    //ENTRADA DE DATOS
    
    int billetes10 = 0;
    int billetes20 = 0;
    int monedas = 0;
    int resto = 0;
    int usuario;
    int i = 0;
    
    printf("Cantidad de dinero plz:\n");
    scanf("%d", &usuario);
    

    //SALIDA DE DATOS
    if(usuario > 0 ){
        printf("adelante:\n");
            billetes20 = usuario/20;
            printf("%d billetes de 20\n", billetes20);
            printf("%d cantidad de dinero\n", usuario);
            printf("%d resto\n", resto);
            resto=usuario%20;
            printf("%d cantidad de dinero\n", usuario);
            printf("%d resto\n", resto);
            billetes10 = resto/10;
            printf("%d billetes de 10\n", billetes10);
            printf("%d resto\n", resto);
            resto=resto%10;
            printf("%d resto\n", resto);
            monedas= resto;
            printf("%d monedas\n", monedas);
            printf("%d resto\n", resto);   
    }else if (usuario = 0){
        printf("de que vas?:\n");
    }
    else{
        printf("no puede ser negativo\n");
    }

    return 0;
}
