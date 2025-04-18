#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of row of the pyramid: ");
    scanf("%d", &n);

    for (int i = n; i != 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", (i+j)%2);
        }
        printf("\n");
    }
}