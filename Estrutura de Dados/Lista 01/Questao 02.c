#include <stdio.h>

int main()
{
    int N, p, i, v, j;

    scanf("%d", &N);

    int X[N];

    for (i = 0; i < N; i++)
    {

        scanf("%d ", &X[i]);
    }

    v = X[0];

    for (j = 0, p = 0; j < N; j++)
    {
        if (v > X[j])
        {
            p = j;
            v = X[j];
        }
    }

    printf("Menor valor: %d\nPosicao: %d\n", v,p);
    return 0;
}
