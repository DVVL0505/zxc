#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("chcp 65001");
    system("cls");
    int **mas;
    int *sum;
    int i, j, n;
    printf("Введите порядок матрицы\n");
    sum = (int *) calloc (3, sizeof (int));
    scanf("%d", &n);
    mas = (int **) calloc (n, sizeof (int *));
    for(int i=0; i < n; i++)
    {
    mas[i] = (int *) calloc (n, sizeof (int));
    }
    for (i = 0; i < 3; i++)
    {
        sum[i] = 0;
    }
    for(i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            mas[i][j] = rand() % 200 + (-100);
        }
    }
    for(i = 0; i < n; i++)
    {
        if (mas[i][0] < 0)
        {
            if (i == 0)
            {
                sum[1] += mas[i][i];
                sum[2] += mas[i + 1][i];
            }
            else if (i == n - 1)
            {
                sum[1] += mas[i][i];
                sum[0] += mas[i - 1][i];
            }
            else
            {
                sum[1] += mas[i][i];
                sum[0] += mas[i - 1][i];
                sum[2] += mas[i + 1][i];
            }
        }
    }
    printf("\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", mas[i][j]);
        }
        printf("\n");
    }
    printf("Сумма над главной диагональю равна %d\nСумма на главной диагонали ранва %d\nСумма под главной диагональю равна %d\n", sum[0], sum[1], sum[2]);
    free(mas);
    free(sum);
    return 0;
}
