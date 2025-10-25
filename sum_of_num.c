#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a postive integer.\n");
        return 1;
    }
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0 && i % 3 == 0 && i % 5 == 0)
        {
            sum += i;
        }
    }

    printf("Sum is %d\n", sum);

    return 0;
}