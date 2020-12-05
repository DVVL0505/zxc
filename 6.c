#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **matrica, *sum, i, n, j;
    system("chcp 65001");
    system("cls");
    printf("Введите порядок матрицы\n");
    scanf("%d", &n);
    matrica = (int**) calloc(n, sizeof (int*));
    for(i = 0; i < n; i++)
        matrica[i] = (int*) calloc(n, sizeof (int));
    sum = (int*) calloc(3, sizeof (int));
    for (i = 0; i < 3; i++)
    {
        sum[i] = 0;
    }
    printf("Введите элементы матрицы\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrica[i][j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", matrica[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        if (matrica[i][0] < 0)
        {
            if (i == 0)
            {
                sum[1] += matrica[i][i];
                sum[2] += matrica[i + 1][i];
            }

            else if (i == (n - 1))
            {
                sum[1] += matrica[i][i];
                sum[0] += matrica[i - 1][i];
            }
            else
            {
                sum[0] += matrica[i - 1][i];
                sum[1] += matrica[i][i];
                sum[2] += matrica[i + 1][i];
            }
        }
    }
    printf("%d\n%d\n%d", sum[0], sum[1], sum[2]);
    return 0;
}
