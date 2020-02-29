#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max_pessoas 3
#define Tam_nome 35


struct dados
{
    char Nome[Tam_nome];
    char Sexo;
    int QuantProduzida;
};
struct dados pessoas[Max_pessoas];

int quantDeFunc = 0;
int QuantoMaisProd=0;
int PosDeQMaisProd=0;
int i=0;


int main()
{
    int Valor;
    int t=Max_pessoas;
    while (Valor != 0)
    {

        printf("\n====Digite o numero correspondente ao acesso====\n");
        printf("--1--Registro\n");
        printf("--2--Produção da Empresa\n");
        printf("--0--Sair\n");

        scanf("%d", &Valor);


        if (Valor == 1)
        {
            int i;
            for (i = 0; i < t ; i++)
            {
                fflush(stdin);
                printf("Nome do Funcionario:\t");
                gets(pessoas[i].Nome);
                fflush(stdin);

                printf("Quantidade Produzida:\t");
                scanf("%d", &pessoas[i].QuantProduzida);
                fflush(stdin);

                printf("Sexo do Funcionario (M - masculino ou F - feminino):\t");
                scanf("%c", &pessoas[i].Sexo);
                fflush(stdin);


            }
        }
        if (Valor == 2)
        {

            //Maior quantidade produzida

            int k;
            for(k=0; k<t; k++)
            {
                if(pessoas[k].QuantProduzida>QuantoMaisProd)
                {
                    PosDeQMaisProd=k;
                    QuantoMaisProd=pessoas[k].QuantProduzida;
                }
            }

            printf("\nQuem produziu mais :%s \nQuanto produziu :%d\n", pessoas[PosDeQMaisProd].Nome,pessoas[PosDeQMaisProd].QuantProduzida );

                //Quantidade produzida por sexo

                int j;
                int QuantProduzidaM = 0;
                int QuantProduzidaF = 0;

                for(j = 0;j<t;j++)
                {

                    if('M'==pessoas[j].Sexo)
                    {
                        QuantProduzidaM += pessoas[j].QuantProduzida;

                    }

                    else
                    {
                        QuantProduzidaF += pessoas[j].QuantProduzida;

                    }
                }
                printf("\nQuantidade produzidas sexo masculino :%d\n", QuantProduzidaM);
                printf("\nQuantidade produzidas sexo feminino :%d\n", QuantProduzidaF);
        }

    }
    return 0;
}
