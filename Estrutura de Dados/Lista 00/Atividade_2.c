#include <stdio.h>

int main()
{
    int l, a[3][5], b[3][5], c[2][15];
    l = 1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++, l++)
        {
            printf("\n Numero do grupo A \t");
            /*             scanf("%i", &l); */
            a[i][j] = l;
            printf("%d", a[i][j]);
        }
    }

printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++, l++)
        {
            printf("\n Numero do grupo B \t");
            /*             scanf("%i", &l); */
            b[i][j] = l;
            printf("%d", b[i][j]);
        }
    }

    for (int w = 0, j = 0; w < 3; w++)
    {
        for (int k = 0; k < 5, j < 15; k++, j++)
        {
            c[0][j] = a[w][k];
            // printf("\n %d", c[0][j]);
        }
    }

    for (int w = 0, j = 0; w < 3; w++)
    {
        for (int k = 0; k < 5, j < 15; k++, j++)
        {
            c[1][j] = b[w][k];
            // printf("\n %d", c[1][j]);
        }
    }


printf("\n \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 15; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
