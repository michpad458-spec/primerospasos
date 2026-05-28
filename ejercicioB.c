
#include <stdio.h>
int main() {
    int numero;
    int i=1;
    
    printf("introduce un numero entero positivo\n");
    scanf("%d", &numero);

        for(int i= 1; 1 <=10; i++){
            printf("%d",i);
        }
    printf("numero del 1 al: %d", numero);

        for(int i=1; 1 <= numero; i++) {
            if (i % 2 == 0) {
                printf("%d", i);
            }

        }
        
     return 0;
    }
