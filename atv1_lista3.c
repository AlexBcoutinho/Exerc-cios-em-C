#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    float saldoM, p1, p2, p3;
    char nome[20];
    printf("\nQual o seu nome? ");
    scanf("%s", &nome);
    printf("\nQual o seu saldo médio no último ano ? ");
    scanf("%f", &saldoM);
    p1=saldoM*0.3;
    p2=saldoM*0.4;
    p3=saldoM*0.5;
    if(saldoM<=500)
    {
        printf("\n%s, você ainda não tem direito ao crédito especial.\n", nome);
    }
    else if(saldoM>500 && saldoM<=1000)
    {
        printf("\n %s, você tem direito a um crédito especial de %.2f \n", nome, p1);
    }
    else if(saldoM>1000 && saldoM<=3000)
    {
        printf("\n %s, você tem direito a um crédito especial de %.2f \n", nome, p2);
    }
    else if(saldoM>3000)
    {
        printf("\n %s, você tem direito a um crédito especial de %.2f \n", nome, p3);
    }


            return 0;
}