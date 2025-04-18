#include<stdio.h>

int main()
{
    double n, sum = 0;

    printf("This program can calculate the sum of the series 4^2 + 12^2 + 20^2 +.....+X. X is nth term.\n");
    printf("Enter the nth term: ");
    scanf("%lf", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + (8*i - 4)*(8*i - 4);
    }
    printf("The sum of the series is: %lf", sum);
}