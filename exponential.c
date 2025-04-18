#include<stdio.h>
#include<math.h>

int main()
{
    float x, exponent;
    printf("Enter the value of x: ");
    scanf("%f",&x);

    exponent = exp(x);

    printf("The value of e to the power x is %.4f", exponent);

}