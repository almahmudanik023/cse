#include<stdio.h>

int main()
{
    int a, b, c;

    printf("Enter two number to determine GCD: ");
    scanf("%d %d", &a, &b);

    while (a % b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }

    printf("GCD = %d", b);
    
}