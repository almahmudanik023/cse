#include<stdio.h>
#define _USE_MATH_DEFINES  //It is for VS Code. Codeblocks works without this line
#include<math.h>

int main()
{
    float n;
    printf("Enter the value of the angle: ");
    scanf("%f", &n);

    printf("sin(%f) =  %.4f\n", n, sin(n*(M_PI/180)));
    printf("cos(%f) =  %.4f\n", n, cos(n*(M_PI/180)));
    printf("tan(%f) =  %.4f\n", n, tan(n*(M_PI/180)));
    printf("cosec(%f) =  %.4f\n", n,(1/sin(n*(M_PI/180))));
    printf("cot(%f) =  %.4f\n", n,(1/tan(n*(M_PI/180))));
    printf("sec(%f) =  %.4f\n", n,(1/cos(n*(M_PI/180))));
}