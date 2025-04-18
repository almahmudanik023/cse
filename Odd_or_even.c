#include<stdio.h>

int main() 
{
    int n; 

    printf("Enter an integer number: ");
    scanf("%d", &n);

    if(n % 2 == 0)
        printf("The number %d is an even Number\n", n);
    else
        printf("The number %d is an odd Number\n", n);
        
    return 0;
}