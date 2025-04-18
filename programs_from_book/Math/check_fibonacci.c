#include<stdio.h>

int main()
{
    int n, a = 0 , b = 1, c;
    printf("Enter an integer number: ");
    scanf("%d", &n);

    for(int i = 0; a < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }

    if (a == n)
    {
        printf("%d is a fibonacchi number.", n);
    }
    else
    {
        printf("%d is not a fibonacchi number.", n);
    }
}