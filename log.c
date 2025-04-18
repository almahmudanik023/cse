#include<stdio.h>
#include<math.h>

int main()
{
    float x, logarithm;
    printf("Enter the value of x: ");
    scanf("%f",&x);

    logarithm = log10(x);

    printf("The logarithm of x is %.4f", logarithm);

}