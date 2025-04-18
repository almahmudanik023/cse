#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, c, d;
    float x,y;

    printf("Enter value of a,b,c of the quadratic equation: ");
    scanf("%d %d %d", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d > 0)
    {
        x = ((-b)+sqrt(d))/(2*a);
        y = ((-b)-sqrt(d))/(2*a);
        printf("Root of the equation are: (X1, X2) = (%0.2f, %0.2f)", x,y);
    }
    else if (d == 0)
    {
        x = y = (-b)/(2*a);
        printf("Root of the equation are: (X1, X2) = (%0.2f, %0.2f)", x,y);
    }
    else
    {
        x = ((-b)+sqrt(-d))/(2*a);
        y = ((-b)-sqrt(-d))/(2*a);
        printf("Root of the equation are: (X1, X2) = (%0.2fi, %0.2fi)", x,y);
    }
}