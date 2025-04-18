#include<stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the nth term: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + (8*i - 4)*(8*i - 4);
    }
    printf("The sum of the series is: %d", sum);
}