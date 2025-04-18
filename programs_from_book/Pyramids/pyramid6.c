#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of row of the pyramid: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++)
        {
            printf("\t");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
}