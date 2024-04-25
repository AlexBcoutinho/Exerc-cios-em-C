#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    char nome[12];
    int idade;
    
    printf("\nDigite seu nome e a sua idade: ");
    scanf("%s%d", &nome, &idade);
    if (idade <= 10)
    {
        printf("\nO valor que devera ser pago para %s, é R$ 30.00\n", nome);
    }
    else if (idade > 10 && idade <= 29)
    {
        printf("\nO valor que devera ser pago para %s, é R$ 60.00\n", nome);
    }
    else if (idade > 29 && idade <= 45)
    {
        printf("\nO valor que devera ser pago para %s, é R$ 120.00\n", nome);
    }

    else if (idade > 45 && idade <= 59)
    {
        printf("\nO valor que devera ser pago para %s, é R$ 150.00\n", nome);
    }
    else if (idade > 59 && idade <= 65)
    {
        printf("\nO valor que devera ser pago para %s, é R$ 250.00\n", nome);
    }
    else if (idade > 65)
    {
    printf("\nO valor que devera ser pago para %s, é R$ 400.00\n", nome);
    }
    return 0;
}