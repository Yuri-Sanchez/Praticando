#include <stdio.h>
#include <locale.h>

float transformacao(float a){
    return (a * 0.6);
}

float milhasParaKM(float m){
    return (m / 0.6);
}

float calcularArea(float base, float altura){
    return (base*altura)/2;
}

float calcularTempo(float d,float v){
    return (d / v);
}

float calcularMinuto(float t){
    return (t * 60);
}

float calcularConsumo(float c){
    return (c * 0.54);
}

int main(){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int a;
    float km, milhas,b, h, area, distancia, tempo, velocidade, minutos, consumo, kw, mlh;

    do {
        printf("\nEscolha uma op��o:\n");
        printf("1- Convers�o de KM para Milha.\n");
        printf("2- Convers�o de Milha para KM\n");
        printf("3- Calcular �rea de um triangulo.\n");
        printf("4- Tempo necess�rio de viagem entre duas cidades.\n");
        printf("5- Consulta de kWh.\n");
        printf("6- Sair\n");
        printf("Op��o: ");
        scanf("%d", &a);



        switch (a){
            case 1:
                printf("Digite uma dist�ncia em KM para saber a convers�o para milhas: \n");
                scanf("%f", &km);
                milhas = transformacao(km);
                printf("%.2f KM s�o %.2f Milhas\n", km, milhas);
            break;

            case 2:
                printf("Digite uma dist�ncia em Milhas para saber a convers�o para KM: \n");
                scanf("%f", &milhas);
                km = milhasParaKM(milhas);
                printf("%.2f Milhas s�o %.2f KM\n", milhas, km);
            break;

            case 3:
                printf("Digite a base do triangulo: \n");
                scanf("%f", &b);
                printf("Digite a altura do triangulo: \n");
                scanf("%f", &h);
                area = calcularArea(b,h);
                printf("O triangulo de base %.2f e altura %.2f tem �rea igual a %.2f\n", b, h, area);
            break;

            case 4:
                printf("Digite a dist�ncia entre as cidades: \n");
                scanf("%f", &distancia);
                printf("Digite sua velocidade m�dia(km/h): \n");
                scanf("%f", &velocidade);
                tempo = calcularTempo(distancia,velocidade);
                minutos = calcularMinuto(tempo);
                printf("Seu tempo de viagem foi de %.2f h que � igual a %.2f minutos\n", tempo, minutos);
            break;

            case 5:
                /*kWh = R$0.54*/
                printf("Qual foi o total de energia gasta(kW): \n");
                scanf("%f", &kw);
                consumo = calcularConsumo(kw);
                printf("Gastou %.2f kW de energia e isso gerou %.2f reais de custo", kw, consumo);
            break;

            case 6:
                printf("Obrigado, volte sempre!\n");
            break;

            default:
                printf("Valor inv�lido!\n");
            break;
        }
    }while(a != 6);
    return 0;
}