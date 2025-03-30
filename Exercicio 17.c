#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main (){
    setlocale(LC_ALL, "Portuguese");

    int op, i, mult, soma, sub, n;
    float div;
    char continuar;

    printf("======================\n");
    printf("Calculadora de tabuada");
    printf("\n======================\n");

    do { 
        printf("Escolha uma op��o: \n");
        printf("1- Multiplica��o.\n");
        printf("2- Divis�o.\n");
        printf("3- Soma.\n");
        printf("4- Subtra��o.\n");
        printf("5- Sair\n");
        printf("Op��o: ");
        scanf("%d", &op);

        while (op < 1 || op > 5){
            printf("Op��o inv�lida! Digite um n�mero de 1 a 5: \n");
            scanf("%d", &op);
        }

        if (op == 5){
            printf("Programa encerrado, obrigado!\n");
            return 0;
        }

        printf("Digite o n�mero para imprimir sua tabuada: \n");
        scanf("%d", &n);

        if(op == 2 && n == 0){
            printf("Erro: N�o � poss�vel fazer uma tabuada de divis�o por zero!\n");
            continue;
        }

        printf("\nTabuada da %d:\n", n);
        switch (op){
            case 1:
                for (i = 1; i <= 10; i++){
                    mult = n * i;
                    printf("%d x %d = %d\n", n, i, mult); 
                }
            break;

            case 2:
                for (i = 1; i <= 10; i++){
                    div = n / i;
                    printf("%d / %d = %.2f\n", n, i, div); 
                }
            break;
                
            case 3:
                for (i = 1; i <= 10; i++){
                    soma = n + i;
                    printf("%d + %d = %d\n", n, i, soma); 
                }
            break;
            
            case 4:
                for (i = 1; i <= 10; i++){
                    sub = n - i;
                    printf("%d - %d = %d\n", n, i, sub); 
                }
            break;
        }

        do {
            printf("Deseja fazer outra tabuada? (S/N)\n");
            scanf(" %c", &continuar);

            continuar = toupper(continuar);

            if(continuar == 'N'){
                printf("Programa finalizado, obrigado!");
                return 0;
            }
        }while (continuar != 'S');
              
    }while (1);
}