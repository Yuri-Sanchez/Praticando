#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int n, i, resultado;

    printf("Digite um número para saber sua tabuada: \n");
    scanf("%d", &n);

    for (i = 0; i <= 10; i++){
        resultado = i * n;
        printf("%d x %d = %d\n", n, i, resultado);
    }
}