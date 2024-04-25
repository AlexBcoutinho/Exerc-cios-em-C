#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");
    int maior, menor, intermediario, n1, n2, n3;
    printf("Digite 3 números: ");
    scanf("%d%d%d", &n1, &n2, &n3);

    if ((n1 > n2) && (n1 > n3))
    {
        maior = n1;
    }
    else if ((n2 > n1) && (n2 > n3))
    {
        maior = n2;
    }
    else if((n3>n2) && (n3>n1))
    {
        maior=n3;
    }
    if((n1>n2) && (n1<n3))
    {
        intermediario=n1;
    }
    else if((n2>n1) && (n2<n3))
    {
        intermediario=n2;
    }
    else if((n3>n1) && (n3<n2))
    {
        intermediario=n3;
    }
    if((n1<n2) && (n1<n3))
    {
        menor=n1;
    }
    else if((n2<n1) && (n2<n3))
    {
        menor=n2;
    }
    else if((n3<n1) && (n3<n2))
    {
        menor=n3;
    }
    fflush(stdin);
    printf("\n%i",intermediario);
    printf("\nOs números digitados seguem a sequencia: %d %d% d\n", maior, intermediario, menor);

    return 0;
}