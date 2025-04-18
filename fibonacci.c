/// 0,1,1,2,3,5,8,13,21,34 
#include<stdio.h>


int main()
{
    long int a = 0, b = 1, c, n;
    printf("Enter the number of number of the terms of fibonacci series: ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++)
    {
        printf("%ld\n", a);
        c = a + b;
        a = b;
        b = c;

    }

}