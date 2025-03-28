#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    float imc, altura, peso;
    int opcao;

    printf("Escolha a opção de acordo com o seu sexo: \n");
    printf("1- Masculino\n");
    printf("2- Feminino\n");
    scanf("%d", &opcao);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);
    printf("Digite seu peso: \n");
    scanf("%f", &peso);

    imc = peso / (altura * altura);

    switch (opcao){
    case 1:
        if (imc < 20.7)
            printf("Abaixo do peso!");
        else if (imc < 26.4 )
            printf("Peso normal!");
        else if (imc < 27.8)
            printf("Sobrepeso!");
        else if (imc < 31.1)
            printf("Obesidade grau 1!");
        else if (imc < 40)
            printf("Obesidade grau 2!");
        else 
            printf("Obesidade grau 3(mórbida)");
    break;

    case 2:
        if (imc < 19.1)
            printf("Abaixo do peso!");
        else if (imc < 25.8 )
            printf("Peso normal!");
        else if (imc < 27.3)
            printf("Sobrepeso!");
        else if (imc < 32.3)
            printf("Obesidade grau 1!");
        else if (imc < 40)
            printf("Obesidade grau 2!");
        else 
            printf("Obesidade grau 3(mórbida)");

    break;
    
    default:
        printf("Opção inválida!");
    break;
    }

    return 0;
}