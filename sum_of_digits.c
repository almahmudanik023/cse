#include<stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter any integer number: ");
    scanf("%d", &n);

    for(n; n != 0; n /= 10)
    {
        sum = sum + n%10;
    }
    

    printf("Sum of the digits of given number is: %d", sum);

}