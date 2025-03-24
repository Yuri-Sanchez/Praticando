#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int ano, idade;

    printf("Digite o ano de nascimento para saber a idade da pessoa: \n");
    scanf("%d", &ano);

    idade = 2025 - ano;

    if(idade >= 18){
        printf("A pessoa tem %d anos, é maior de idade!\n", idade);
    }else{
        printf("A pessoa tem %d anos,é menor de idade", idade);
    }
}