#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int soma = 0, i;

    for (i = 0; i <= 100; i++){
        soma += i; /* Adiciona o valor de "i" a soma.*/
    }

    printf("\nA soma dos números de 0 a 100 é: %d\n", soma);
}