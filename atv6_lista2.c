#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int numero;
    
    printf("\nDigite um número de 1 a 12: ");
    scanf("%d", &numero);
    
    if(numero == 1)
    {
        printf("O número %d,  corresponde ao mês de JAN\n", numero);
    }
    else if (numero==2)
    {
        printf("O número %d,  corresponde ao mês de FEV\n", numero);
    }
    else if (numero==3)
    {
        printf("O número %d,  corresponde ao mês de MAR\n", numero);
    }
    else if (numero==4)
    {
        printf("O número %d,  corresponde ao mês de ABR\n", numero);
    }
    else if (numero==5)
    {
        printf("O número %d,  corresponde ao mês de MAI\n", numero );
    }
    else if (numero==6)
    {
        printf("O número %d,  corresponde ao mês de JUN\n", numero);
    }
    else if (numero==7)
    {
        printf("O número %d,  corresponde ao mês de JUL\n", numero );
    }
    else if (numero==8)
    {
        printf("O número %d,  corresponde ao mês de AGO\n", numero );
    }
    else if (numero==9)
    {
        printf("O número %d,  corresponde ao mês de SET\n", numero );
    }
    else if (numero==10)
    {
        printf("O número %d,  corresponde ao mês de OUT\n", numero );
    }
    else if (numero==11)
    {
        printf("O número %d,  corresponde ao mês de NOV\n", numero );
    }
    else if (numero==12)
    {
        printf("O número %d,  corresponde ao mês de DEZ\n", numero );
    }
    else if (numero!= 1 && numero!=2 && numero!=3 && numero!=4 && numero!=5 && numero!=6 && numero!=7 && numero!=8 && numero!=9 && numero!=10 && numero!=11 && numero!=12)
    {
        printf("\nNão existe mês com este número\n\n");
    }


     return 0;
}