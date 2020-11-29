#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, k = 0, l;
    char *stroka;
    stroka = (char*) calloc (n, sizeof (char));
    system("chcp 65001");
    system("cls");
    printf("Введите число\n");
    scanf("%d", &n);
    printf("Введите строку\n");
    fflush(stdin);
    gets(stroka);
    for (i = 0; stroka[i] != '\0'; i++)
    {
        if (stroka[i] == ' ' || stroka[i] == ',')
        {
            if (((i - 1) - k) > (n - 1))
            {
                for (l = k; l < i; l++)
                {
                    printf("%c", stroka[l]);
                }
                printf(" ");
            }
            k = i + 1;

        }
    }
    if (((i - 1) - k) > (n - 1))
    {
        for (l = k; l < i; l++)
        {
            printf("%c", stroka[l]);
        }
        printf(" ");
    }
    free(stroka);
    return 0;
}
