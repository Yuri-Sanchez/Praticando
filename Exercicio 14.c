#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n, quantidadePares = 0, quantidadeImpares = 0, i;

    for(i = 1; i <= 10; i++){
        printf("Digite o %d n�mero: \n", i);
        scanf("%d", &n);

        if(n % 2 == 0){
            printf("%d � par.\n", n);
            quantidadePares++;

        }else{
            printf("%d � �mpar.\n", n);
            quantidadeImpares++;
        }
    }    
    printf("Quantidade de n�meros pares: %d\n", quantidadePares);
    printf("Quantidade de n�meros impares: %d\n", quantidadeImpares);
}    