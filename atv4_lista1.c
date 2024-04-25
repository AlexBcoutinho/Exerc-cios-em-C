#include <stdio.h>
#include <stdlib.h>

int main(){
system("clear");
float aporte, juros, rend, total;

printf("\nQual o valor do aporte?");
scanf("%f", &aporte);
printf("\nQual a taxa de juros do investimento a.m.? ");
scanf("%f",&juros);
rend=aporte*juros;
total=aporte+rend;
printf("\nO total do  rendimento a.m. é de %.2f ficando %.2f após o período de 1 mês. \n", rend, total);

    return 0;
}