#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, pares = 0, impares = 0;

    printf("Os pares de 0 a 100 s�o: \n");
    for(i = 0; i <= 100; i++){
        if(i % 2 == 0){
            printf("%d ", i);
            pares++;    
        }
    }
    printf("\nQuantidade de n�meros pares: %d\n", pares);

    printf("\nOs impares de 0 a 100 s�o: \n");
    for(i = 0; i <= 100; i++){
        if(i % 2 != 0){
            printf("%d ", i);
            impares++;    
        }
    }
    printf("\nQuantidade de n�meros impares: %d\n", impares);
}