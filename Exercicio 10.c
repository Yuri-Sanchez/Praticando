#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, n, soma = 0, pares = 0;

    printf("Digite um n�mero para saber a soma de todos os n�meros pares entre ele: \n");
    scanf("%d", &n);

    if(n <= 0){
        printf("Digite um n�mero inteiro positivo!\n");
    }

    printf("Os n�meros pares s�o: \n");

    for (i = 1; i <= n; i++){
        if(i % 2 == 0){ 
            printf("%d ", i);
            pares++;
            soma+= i;
        }
    }

    printf("\nA soma dos n�meros pares s�o: %d\n", soma);
    printf("Quantidades de pares entre eles: \n%d", pares);
}