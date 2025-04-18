#include<stdio.h>

int main()
{
    long int n, reverse = 0;
    printf("Enter any integer number: ");
    scanf("%ld", &n);

    for(n; n != 0; n /= 10)
    {
        reverse = reverse*10 + n%10;
    }
    
    printf("Reverse of the digits of given number is: %d", reverse);

}