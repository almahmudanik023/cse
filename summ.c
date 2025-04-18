#include<stdio.h>

int main()
{
    double n, sum = 0;

    printf("This program can calculate the sum of the series 1.3.5.7 + 3.5.7.9 + 5.7.9.11 +.....+X. X is nth term.\n");
    printf("Enter the nth term: ");
    scanf("%lf", &n);

    for(int i = 1; i <= n; i++)
    {
        sum = sum + (i*2 -1)*(i*2 + 1)*(i*2 +3)*(i*2 + 5);
    }
    printf("The sum of the series is: %lf", sum);
}