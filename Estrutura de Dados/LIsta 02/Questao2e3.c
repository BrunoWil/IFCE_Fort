#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Max_pessoas 2
#define Tam_nome 35

struct dados
{
    char Nome[Tam_nome];
    float Nota[3];
};
struct dados aluno[Max_pessoas];

int main()
{
    int i;
    int AP1=0;
    int AP2=0;
    int FINAL=0;

    for (i = 0; i < Max_pessoas; i++)
    {

        fflush(stdin);
        printf("Nome do Aluno:\t");
        gets(aluno[i].Nome);
        fflush(stdin);


        printf("Nota AP1:");
        scanf("%f", &AP1);
        if (AP1 >= 10)
        {
            aluno[i].Nota[0] = 10;
        }
        else
        {
            aluno[i].Nota[0] = AP1;
        }
        fflush(stdin);


        printf("Nota AP2:");
        scanf("%f", &AP2);
        if (AP1 >= 10)
        {
            aluno[i].Nota[1] = 10;
        }
        else
        {
            aluno[i].Nota[1] = AP1;
        }
        fflush(stdin);


        printf("Nota Final:");
        scanf("%f", &FINAL);
        if (AP1 >= 10)
        {
            aluno[i].Nota[2] = 10;
        }
        else
        {
            aluno[i].Nota[2] = FINAL;
        }
        fflush(stdin);
    }

    for (i = 0; i < Max_pessoas; i++)
    {
        if (aluno[i].Nome != NULL)
        {
            printf("Nome do Aluno: %s\t\n", aluno[i].Nome);
            printf("Nota AP1 do Aluno: %.2f\t\n", aluno[i].Nota[0]);
            printf("Nota AP2 do Aluno: %.2f\t\n", aluno[i].Nota[1]);
            printf("Nota Final do Aluno: %.2f\t\n", aluno[i].Nota[2]);
        }
    }
    return 0;
}
