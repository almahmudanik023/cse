#include<stdio.h>

int main()
{
    int a, b, gcd;

    printf("Enter two number to determine GCD: ");
    scanf("%d %d", &a, &b);

    for (int i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            gcd = i;
        }
    }
    printf("GCD = %d", gcd);
    
}