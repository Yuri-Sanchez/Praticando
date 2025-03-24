#include <stdio.h>
#include <locale.h>

int main (){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int c;
    float f;

    for(c = 0; c <= 100; c++){
        f = (c * 1.8) + 32;
        printf("%d° grau(s) Celsius = %.2f° grau(s) Fahrenheit\n", c, f);
    }
}