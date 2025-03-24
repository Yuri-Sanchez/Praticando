#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int a;
    float km, milhas,b, h, area, distancia, tempo, velocidade, minutos, consumo, kw;

    printf("Escolha uma opção:\n");
    printf("1- Conversão de KM para Milha.\n");
    printf("2- Conversão de Milha para KM\n");
    printf("3- Calcular área de um triangulo.\n");
    printf("4- Tempo necessário de viagem entre duas cidades.\n");
    printf("5- Consulta de kWh.\n");
    scanf("%d", &a);



    switch (a){
        case 1:
            printf("Digite uma distância em KM para saber a conversão para milhas: \n");
            scanf("%f", &km);
            milhas = (km * 0.6);
            printf("%.2f KM são %.2f Milhas\n", km, milhas);
        break;

        case 2:
            printf("Digite uma distância em Milhas para saber a conversão para KM: \n");
            scanf("%f", &milhas);
            km = (float)(milhas / 0.6);
            printf("%.2f Milhas são %.2f KM\n", milhas, km);
        break;

        case 3:
            printf("Digite a base do triangulo: \n");
            scanf("%f", &b);
            printf("Digite a altura do triangulo: \n");
            scanf("%f", &h);
            area = (float)(b*h)/2;
            printf("O triangulo de base %.2f e altura %.2f tem área igual a %.2f\n", b, h, area);
        break;

        case 4:
            printf("Digite a distância entre as cidades: \n");
            scanf("%f", &distancia);
            printf("Digite sua velocidade média(km/h): \n");
            scanf("%f", &velocidade);
            tempo = (float)(distancia / velocidade);
            minutos = tempo * 60;
            printf("Seu tempo de viagem foi de %.2f h que é igual a %.2f minutos\n", tempo, minutos);
        break;

        case 5:
            /*kWh = R$0.54*/
            printf("Qual foi o total de energia gasta(kW): \n");
            scanf("%f", &kw);
            consumo = (kw * 0.54);
            printf("Gastou %.2f kW de energia e isso gerou %.2f reais de custo", kw, consumo);
        break;

        default:
            printf("Valor inválido!\n");
        break;
    }
}