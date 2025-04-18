#include<stdio.h>
#define _USE_MATH_DEFINES  //It is for VS Code. Codeblocks works without this line
#include<math.h>

int main()
{
    float n;
    printf("Enter the value: ");
    scanf("%f", &n);

    printf("sin inverse(%f) =  %.4f\n", n, asin(n)*(180/M_PI));

    printf("cos inverse(%f) =  %.4f\n", n, acos(n)*(180/M_PI));

    printf("tan inverse(%f) =  %.4f\n", n, atan(n)*(180/M_PI));

    printf("cosec inverse(%f) =  %.4f\n", n, (asin(1/n)*(180/M_PI)));

    printf("cot inverse(%f) =  %.4f\n", n, (atan(1/n)*(180/M_PI)));
    
    printf("sec inverse(%f) =  %.4f\n", n, (acos(1/n)*(180/M_PI)));
}