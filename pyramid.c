#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            printf(" ");
        }
        for (j = i; j >= 0; j--)
        {
            printf("%d", j);
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}