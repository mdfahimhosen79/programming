#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int s = n - 1;
    int k = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= s; j++)
        {
            printf(" ");
        }

        s--;

        for (int l = 1; l <= k; l++)
        {
            printf("*");
        }

        k = k + 2;
        printf("\n");
    }

    return 0;
}