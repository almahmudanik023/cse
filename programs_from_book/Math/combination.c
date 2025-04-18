#include<stdio.h>

int factorial(int n);
int main()
{
    long int com;
    int n, r;

    printf("Enter the value of n and r of (nCr): ");
    scanf("%d %d", &n, &r);
                                                            //nCr = (n!)/(r!*(n-r)!)
    com = (factorial(n)/(factorial(r)*factorial(n-r)));
    
    printf("Combination = %ld", com);  
}

int factorial(int n)
{
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f *= i;
    }
    return f;
}