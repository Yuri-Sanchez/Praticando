/*IPC - declarar as variaveis, caso não declare a memória pode pegar um valor "lixo", ou seja, um valor qualque perdido na memória e usar como inicial e com isso teremos um problema lógico.*/
    /*No caso desse exercicío, declaramos a variável "maisBaixa" com um número muito alto para ter ctz que qualquer número digitado será menor que ela e assim ficar gravado na variável o que queremos.*/

#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int idade, i, maisNova, maisVelha;
    float altura, maisBaixa, maisAlta;
    
    maisBaixa = 999.0;
    maisAlta = 0.0;
    maisNova = 999;
    maisVelha = 0;

    for (i = 1; i <= 5; i++){
        printf("%d- Responda as perguntas abaixo: \n",i);
        printf("A- Idade: \n");
        scanf("%d", &idade);

        printf("B- Altura: \n");
        scanf("%f", &altura);

        if(idade < maisNova){
            maisNova = idade;            
        }else{
            maisVelha = idade;      
        }

        if(altura < maisBaixa){
            maisBaixa = altura;
        }else{
            maisAlta = altura;
        } 
    }

    printf("Mais alta: %.2f\n", maisAlta);
    printf("Mais baixa: %.2f\n", maisBaixa);
    printf("Mais velha: %d\n", maisVelha);
    printf("Mais nova: %d\n", maisNova);
}