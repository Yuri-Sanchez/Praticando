#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, pares = 0, impares = 0;

    printf("Os pares de 0 a 100 são: \n");
    for(i = 0; i <= 100; i++){
        if(i % 2 == 0){
            printf("%d ", i);
            pares++;    
        }
    }
    printf("\nQuantidade de números pares: %d\n", pares);

    printf("\nOs impares de 0 a 100 são: \n");
    for(i = 0; i <= 100; i++){
        if(i % 2 != 0){
            printf("%d ", i);
            impares++;    
        }
    }
    printf("\nQuantidade de números impares: %d\n", impares);
}