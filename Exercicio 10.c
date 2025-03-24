#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, n, soma = 0, pares = 0;

    printf("Digite um número para saber a soma de todos os números pares entre ele: \n");
    scanf("%d", &n);

    if(n <= 0){
        printf("Digite um número inteiro positivo!\n");
    }

    printf("Os números pares são: \n");

    for (i = 1; i <= n; i++){
        if(i % 2 == 0){ 
            printf("%d ", i);
            pares++;
            soma+= i;
        }
    }

    printf("\nA soma dos números pares são: %d\n", soma);
    printf("Quantidades de pares entre eles: \n%d", pares);
}