#include<stdio.h>

int main()
{
    float cel, fer;
    printf("Enter Temperature in celsius: ");
    scanf("%f", &cel);

    fer = (9*cel)/5 + 32;

    printf("The Temperature in fahrenheit is: %.2f", fer);   /// %.2f is used to print the float value upto 2 decimal places

}