#include <stdio.h>
#include <stdlib.h>


int main() {
    system("clear");
    int numClientes = 0, numconta;
    float saldoTotalag = 0, saldo; 
    int clientesNeg = 0; 
    char nome[50];
    printf("Cadastro de Clientes\n");
    printf("Digite o número da conta, nome e saldo (digite -999 para encerrar):\n");

    while (numClientes < 10) {
        printf("Cliente %d:\n", numClientes + 1);
        printf("Número da conta: ");
        scanf("%d", &numconta);

        if (numconta == -999) {
            break;
        }

        printf("Nome: ");
        scanf("%s", nome);

        printf("Saldo: ");
        scanf("%f", &saldo);

        saldoTotalag += saldo;

        if (saldo < 0) {
            clientesNeg++;
        }

        numClientes++;
    }

    printf("\nRelatório da Agência:\n");
    printf("Total de clientes com saldo negativo: %d\n", clientesNeg);
    printf("Total de clientes da agência: %d\n", numClientes);
    printf("Saldo total da agência: R$ %.2f\n", saldoTotalag);

    return 0;
}