#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int op, n, v[2], i, soma, sub, mult;
    float div;
    char continuar;

    do{
        printf("===============\nCalculadora\n===============\n");
        printf("Escolha a operação: \n");
        printf("1- Soma\n");
        printf("2- Subtração\n");
        printf("3- Multiplicação\n");
        printf("4- Divisão\n");
        printf("5- Sair\n");
        printf("Opção: ");
        scanf("%d", &op);

        while (op < 1 || op > 5){
            printf("Opção inválida, favor escolher um número entre 1 e 5");
            scanf("%d", &op);
        }

        if (op == 5){
            printf("Programa encerrado!");
            return 0;
        }

        for (i = 0; i < 2; i++){
            printf("Escolha o %d° número: \n", i);
            scanf("%d", &v[i]);
        }    

        if (op == 4 && v[1] == 0){
            printf("Erro: Não é possível realizar divisões por zero\n");
            continue;
        }

        switch(op){
            case 1:
                soma = v[0] + v[1];
                printf("%d + %d = %d\n", v[0], v[1], soma);
            break;

            case 2:
                sub = v[0] - v[1];
                printf("%d - %d = %d\n", v[0], v[1], sub);
            break;

            case 3:
                mult = v[0] * v[1];
                printf("%d x %d = %d\n", v[0], v[1], mult);
            break;

            case 4:
                div = (float)v[0] / v[1]; //float é utilizado pq o vetor foi declarado como inteiro e o compilador nesse caso realiza primeiramente a divisão da parte inteira e imprime erradamente o resultado, com o float na frente isso não ocorre.
                printf("%d / %d = %.2f\n", v[0], v[1], div);
            break;
        }

        do {
            printf("Deseja fazer outra operação? (S/N)\n");
            scanf(" %c", &continuar);

            continuar = toupper(continuar);

            if (continuar == 'N'){
                printf("Programa encerrado!");
                return 0;
            }
        }while(continuar != 'S');

    }while(1);

    return 0;
}