#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    char letra;
    for (letra = 'A'; letra <= 'Z'; letra++){
        printf("%c ", letra);
    }
}