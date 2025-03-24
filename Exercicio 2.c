#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL, "Portuguese_Brazil");

    int ano;

    /*Regra ano bissexto 
    Um ano � bissexto se ele for divisivel por 4, exceto se for ano centen�rio(que deve ser divis�vel por 400)*/

    printf("Digite um ano para saber se ele � bissexto: \n");
    scanf("%d", &ano);

    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        printf("O ano %d � bissexto!\n", ano);
    }else{
        printf("O ano %d n�o � bissexto!.\n", ano);
    }
}