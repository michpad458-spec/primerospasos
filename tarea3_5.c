#include <studio.h>

int main() {

    int numero_usuario;
    printf("introducir el numero \n");
    scanf("%d, &numero_usuario");

    if(numero_usuario >0){
        printf("el numero es positivo \n");

        for (int i=3; i<=10; i++) {
            printf("%d x %d = %d\n", i, numero_usuario, i * numero-usuario);
        }
    }
    else if(numero_usuario <0) {
        printf("el numero es negativo\n");
    }
    else{
        printf("el numero es cero \n");
    }
    return 0;
}
