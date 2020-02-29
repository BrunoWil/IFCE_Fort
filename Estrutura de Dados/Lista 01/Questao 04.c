#include <stdio.h>

int main()
{
    int i, j, k, c, l, n;

    while (k > 0)
    {
        scanf("%d", &k);

        i = 0, j = 0, c = 0, l = 0, n = 0;

        c = k;
        int M[c][c], soma = 1;
        while (c > 0)
        {
            for (i = l; i < c; i++)
            {
                for (j = n; j < c; j++)
                {
                    M[i][j] = soma;
                }
            }
            c--;
            l++;
            n++;

            soma++;
        }

        for (i = 0; i < k; i++)
        {
            for (j = 0; j < k; j++)
            {
                if (j < k - 1)
                {
                    printf("%3d", M[i][j]);
                    printf(" ");
                }
                else
                {
                    printf("%3d", M[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
