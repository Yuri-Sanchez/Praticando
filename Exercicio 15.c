#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n, soma = 0;

    while (soma < 100){
            printf("Digite um número inteiro: \n");
            scanf("%d", &n);
            soma += n;
        }
    printf("Soma limite batida: %d\n", soma);
}