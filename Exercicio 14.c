#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n, quantidadePares = 0, quantidadeImpares = 0, i;

    for(i = 1; i <= 10; i++){
        printf("Digite o %d número: \n", i);
        scanf("%d", &n);

        if(n % 2 == 0){
            printf("%d é par.\n", n);
            quantidadePares++;

        }else{
            printf("%d é ímpar.\n", n);
            quantidadeImpares++;
        }
    }    
    printf("Quantidade de números pares: %d\n", quantidadePares);
    printf("Quantidade de números impares: %d\n", quantidadeImpares);
}    