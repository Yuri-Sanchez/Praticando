#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int soma = 0, i;

    for (i = 0; i <= 100; i++){
        soma += i; /* Adiciona o valor de "i" a soma.*/
    }

    printf("\nA soma dos n�meros de 0 a 100 �: %d\n", soma);
}