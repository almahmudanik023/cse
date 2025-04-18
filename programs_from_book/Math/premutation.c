#include<stdio.h>

int main()
{
    long int per = 1;
    int n, r;

    printf("Enter the value of n and r of (nPr): ");
    scanf("%d %d", &n, &r);
                                                //nPr = (n!)/(n-r)!
    for (int i = n; i > (n-r); i--)
    {
        per *= i;
    }
    printf("Permutation = %ld", per);  
}