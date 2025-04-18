#include<stdio.h>

int main()
{
    int n, is_prime;
    printf("How many number you check: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        is_prime = 1;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                is_prime = 0;
            }
        }
        if(is_prime == 1)
        {
            printf("%d ", i);
        }
    }


}