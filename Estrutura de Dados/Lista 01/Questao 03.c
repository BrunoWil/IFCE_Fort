#include <stdio.h>

int main()
{

    double M[12][12], soma = 0, media;
    char t;
    int i, j, c;

    scanf("%i", &c);

    scanf("%c", &t);

    t = getchar();


    

    for (i = 0; i < 12; i++)
    {
        for (j = 0; j < 12; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }




    for (i = 0; i < 12; i++)
    {
        soma = soma + M[i][c];
    }




    if (t == 'M')
    {
        media = soma / 12;
        printf("%.1lf\n", media);
    }

    if (t == 'S')
    {
        printf("%.1lf\n", soma);
    }

    return 0;
}
