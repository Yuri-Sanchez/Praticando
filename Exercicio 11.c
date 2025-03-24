#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int i, mult = 1, fatorial = 0;

    printf("Digite um número para saber seu fatorial: \n");
    scanf("%d", &fatorial);

    if(fatorial <= 0){
        printf("Favor digitar um número positivo!\n");
    }else{

        for (i = 1; i <= fatorial; i++){
            mult *= i;
        }

        printf("O fatorial de %d é : %d\n", fatorial, mult);
    }
}