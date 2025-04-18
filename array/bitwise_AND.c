#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("The bitwisw and of %d and %d is : %d\n", a, b, a&b);
}