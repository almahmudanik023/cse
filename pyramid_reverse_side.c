#include<stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the number of row in the pyramid: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        for(int j = n-i; j != 0; j--)
        {
            printf("\t");
        }
        for(int j = 1; j <= i; j++ )
        {
            printf("\t%d", j);
        }
        printf("\n");
    }
}
