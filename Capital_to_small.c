#include<stdio.h>

int main()
{
    char n;

    printf("Enter a Capital Latter: ");
    scanf("%c", &n);

    printf("The Lowercase of %c is %c", n, n+32);
}