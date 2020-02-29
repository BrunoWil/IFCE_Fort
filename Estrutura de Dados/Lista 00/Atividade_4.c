#include <stdio.h>

int main()
{
    int l, a[5][4], b[4][3], c[5][3];

    l = 1;
    printf("\n Matriz A \t");

    for (int i = 0; i < 5; i++)
    {
        printf("\n");
        for (int j = 0; j < 4; j++, l++)
        {

            a[i][j] = l;
            printf("%d \t", a[i][j]);
        }
    }

    printf("\n");

    printf("\n Matriz B \t");

    l = 1;

    for (int i = 0; i < 4; i++)
    {
        printf("\n");

        for (int j = 0; j < 3; j++, l++)
        {

            b[i][j] = l;
            printf("%d \t", b[i][j]);
        }
    }

    printf("\n");

    printf("\n Matriz C = A*B \t");

    int ia = 0, ja = 0, ib = 0, jb = 0, k = 0, i = 0, j = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0 ; j < 3; j++)
        {
            for (int ib = 0, ja = 0; ib < 4, ja < 4; ja++, ib++)
            {
                k = a[i][ja] * b[ib][j] + k;
            }
            c[i][j] = k;
            k=0;
        }
    }

    printf("\n \n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
