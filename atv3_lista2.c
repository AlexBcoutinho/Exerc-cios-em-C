#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    float salario, aliq1, aliq2, aliq3;
    printf("\nDigite seu salário: ");
    scanf("%f", &salario);
    if (salario <= 600.)
    {
        printf("\nVocê é isento de aliquota do INSS. Seu salário líquido é %f", salario);
    }
    else if (salario > 600. && salario <= 1200.)
    {
        aliq1 = (salario * 0.2);
        printf("\nSeu salario liquido após o desonto do INSS será %.2f\n ", salario - aliq1);
    }
    else if (salario > 1200. && salario <= 2000.)
    {
        aliq2 = (salario * 0.25);
        printf("\nSeu salario liquido após o desonto do INSS será %.2f\n ", salario - aliq2);
    }
    else if (salario > 2000.)
    {
        aliq3 = (salario * 0.3);
        printf("\nSeu salario liquido após o desonto do INSS será %.2f\n ", salario - aliq3);
    }
    return 0;
}