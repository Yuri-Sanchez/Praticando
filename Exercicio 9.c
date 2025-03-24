#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int num, i, divisores = 0;

    printf("Digite um n�mero para saber seus divisores: \n");
    scanf("%d", &num);

    if(num <= 0){
        printf("Digite um n�mero inteiro positivo!\n");
    }

    printf("Os divisores de %d s�o: \n", num);

    for (i = 1; i <= num; i++){
        if (num % i == 0){
            printf("%d ", i);
            divisores++;
        }
    }

    printf("\nTotal de divisores:\n%d", divisores);
}