#include<stdio.h>

int main()
{
    double n, sum = 0;

    printf("This program can calculate the sum of the series 2.5.8 + 5.8.11 + 8.11.13 +.....+X. X is nth term.\n");
    printf("Enter the nth term: ");
    scanf("%lf", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + (i*3 - 1)*(i*3 +2)*(i*3 + 5); ;
    }
    printf("The sum of the series is: %lf", sum);
}