#include <stdio.h>

int main(){

    int anoNasc, ano, idade, ano2;

    printf(" Informe o ano que você nasceu: ");
    scanf("%d", &anoNasc);
    printf(" Informe o ano atual: ");
    scanf("%d", &ano);

    idade=ano-anoNasc;
    ano2=2030-anoNasc;

    printf(" A sua idade é: %d", idade);
    printf("\n A sua idade em 2030 é: %d", ano2);

    return 0;
}