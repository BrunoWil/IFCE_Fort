

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max_pessoas 1

struct pessoa
{
    char nome[30];
    char endereco[35];
    char telefone[9];
    char situacao[1];
};
struct pessoa Pessoa[Max_pessoas];

int Registro()
{
    int i;
    for (i = 0; i < Max_pessoas; i++)
    {
        fflush(stdin);
        printf("Nome:\t");
        gets(Pessoa[i].nome);
        fflush(stdin);

        fflush(stdin);
        printf("Endereco:\t");
        gets(Pessoa[i].endereco);
        fflush(stdin);

        fflush(stdin);
        printf("Telefone:\t");
        gets(Pessoa[i].telefone);
        fflush(stdin);

        fflush(stdin);
        printf("Situacao:\t");
        gets(Pessoa[i].situacao);
        fflush(stdin);
    }
    return 0;
}

int Alterar(int pesquisa)
{

    int escolha;

    printf(" 1 - Altera nome\n");
    printf(" 2 - Altera endereco\n");
    printf(" 3 - Altera telefone\n");
    printf(" 4 - Altera situacao\n");
    printf(" 0 - Menu\n");

    if (pesquisa > -1)
    {
        fflush(stdin);
        scanf("%i", &escolha);
        fflush(stdin);

        switch (escolha)
        {
        case 1:
            fflush(stdin);
            printf("Nome:\t");
            gets(Pessoa[pesquisa].nome);
            fflush(stdin);
            break;

        case 2:
            fflush(stdin);
            printf("Endereco:\t");
            gets(Pessoa[pesquisa].endereco);
            fflush(stdin);
            break;

        case 3:
            fflush(stdin);
            printf("Telefone:\t");
            gets(Pessoa[pesquisa].telefone);
            fflush(stdin);
            break;

        case 4:
            fflush(stdin);
            printf("Situacao:\t");
            gets(Pessoa[pesquisa].situacao);
            fflush(stdin);
            break;

        default:
            break;
        }
    }
}

int Pesquisar()
{
    char Nome[30];
    int pesquisa = -1;
    int i, valor;
    printf("Digite o Nome de quem quer Pesquisar\n");
    fflush(stdin);
    gets(Nome);
    fflush(stdin);
    for (i = 0; i < Max_pessoas; i++)
    {
        if (strcmp(Nome, Pessoa[i].nome) == 0)
        {
            pesquisa = i;
        }
    }

    if (pesquisa == -1)
    {
        printf("Nome procurado nao consta");
        return 0;
    }
    printf("-----------------------\n");
    printf(" Nome :%s\t\n Endereco :%s\t\n Telefone :%s\t\n Situacao :%s\t", Pessoa[pesquisa].nome, Pessoa[pesquisa].endereco, Pessoa[pesquisa].telefone, Pessoa[pesquisa].situacao);
    printf("\n-----------------------");
    printf("\n1 - Alterar\n");
    printf("0 - Menu\n");
    scanf("%d", &valor);
    if (valor == 1)
    {
        Alterar(pesquisa);
    }
    if (valor == 0)
    {
        return 0;
    }
}

int main()
{

    int Valor = 1;

    while (Valor > 0)
    {
        Valor = 6;
        printf("\n 1 - Inserir os 5 resgistros na agenda\n");
        printf(" 2 - Pesquisar pessoas e Alterar\n");
        printf(" 0 - Sair\n");

        fflush(stdin);
        scanf("%d", &Valor);
        fflush(stdin);

        switch (Valor)
        {
        case 1:
            Registro();
            break;

        case 2:
            Pesquisar();
            break;

        default:
            break;
        }
    }
    return 0;
}
