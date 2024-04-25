#include <stdio.h>
#include <stdlib.h>

int main(){
    float total,gorjeta, conta;
    system("clear");
printf("\nQual o valor da conta? ");
scanf("%f", &conta);
gorjeta = 0.1;
total = conta + (conta*gorjeta);
printf("\nO valor da cona com oacrescimo do serviço é de %.2f\n ", total);


    return 0;
}