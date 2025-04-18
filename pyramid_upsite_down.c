#include<stdio.h>

int main()
{
    int i, j, n;
    printf("Enter the number of row in the pyramid: ");
    scanf("%d", &n);

    for(int i = n; i != 0; i--)
    {
        for(int j = 1; j <= i; j++ )
        {
            printf(" %d", j);
        }
        printf("\n");
    }
}