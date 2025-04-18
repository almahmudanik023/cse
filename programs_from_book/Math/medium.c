#include<stdio.h>

int main()
{
    int a, b, c;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("Enter the third number: ");
    scanf("%d", &c);

    if (a > b)
    {
        if(b > c)
        {
            printf("Medium is %d", b);
        }
        else if(a > c)
        {
            printf("Medium is %d", c);
        }
        else
        {
            printf("Medium is %d", a);
        }
              
    }
    else
    {
        if (a > c)
        {
            printf("Medium is %d", a);
        }
        else if(b > c)
        {
            printf("Medium is %d", c);
        }
        else
        {
            printf("Medium is %d", b);
        }
    }
}