//A biblioteca de uma universidade deseja fazer um algoritmo que leia o nome do
//livro que será emprestado, o tipo de usuário (professor ou aluno) e possa imprimir um recibo conforme mostrado a seguir. Considerar que o professor tem dez
//dias para devolver o livro e o aluno só três dias.
#include <stdio.h>
#include <stdlib.h>

int main()
{
system("clear");
char livro[30];
int usuario;

printf("Qual o título deseja retirar?\n ");
fgets(livro, 30, stdin);
printf("Se você é professor digite (1) se é aluno digite (2) \n ");
scanf("%d", &usuario);
if(usuario == 1 )
{
    printf("\t\t\t#####RECIBO#####\n\n");
    printf("Professor, você tem 10 dias para devolução do livro %s \n", livro);
}
else if(usuario == 2 )
{
    printf("\t\t\t#####RECIBO#####\n\n");
    printf("Prezado aluno, você tem 03 dias para devolução do livro %s \n", livro);
}






        return 0;
}
