#include <stdio.h>

int main()
{

int l, a[5], b[5], c[10];

for (int i = 0; i < 5; i++)
{
    printf("\n digite um numero do grupo A \t");
    scanf("%i", &l);
    a[i] = l;
}

printf("\n continue digitando numeros \t");

for (int j = 0; j < 5; j++)
{
    printf("\n digite um numero do grupo B \t");
    scanf("%i", &l);
    b[j] = l;
}

for (int i = 0; i < 5; i++)
{
    c[i] = a[i];
}

for (int j = 0; j < 5; j++)
{
    c[j + 5] = b[j];
}

for (int x = 0; x < 10; x++)
{
    printf("%d, ", c[x]);
}

return 0;
}
