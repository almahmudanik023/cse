#include<stdio.h>

int main()
{
    long int n, fact = 1;

    printf("Enter a number to determine factorial: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("Factorial = %ld", fact);  
}