#include<stdio.h>
#include<math.h>

int main()
{
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);

    printf("Square root of %d is: %.2f\n", a, sqrt(a));  //int not work. Use float

    printf("%d to the power %d is: %.2f\n", a, b, pow(a, b)); //int not work. Use float

    printf("e to the power %d is: %.2f\n", a, exp(a)); //int not work. Use float

    printf("Log of %d is: %.2f\n", a, log(a)); //int not work. Use float
    printf("Log10 of %d is: %.2f\n", a, log10(a)); //int not work. Use float
}