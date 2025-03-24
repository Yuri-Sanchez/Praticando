#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    float consumo, combustivel, distancia;

    printf("Para saber o consumo médio do seu veículo, digite as seguintes informações: \n");

    printf("1- Quilometragem percorrida: \n");
    scanf("%f", &distancia);

    printf("2- Quantos litros de combustivel foi gasto: \n");
    scanf("%f", &combustivel);

    consumo = (float)distancia / combustivel;

    printf("O consumo médio do seu veículo é: \n%.2f", consumo);
}