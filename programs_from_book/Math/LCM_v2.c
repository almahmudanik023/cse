#include<stdio.h>

int main()
{
    int a, b, lcm, max;

    printf("Enter two number to determine LCM: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;
    lcm = max;

    while (1)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("LCM = %d", lcm);
            break;
        }
        
        lcm += max;
    }   
}