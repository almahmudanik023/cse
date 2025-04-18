#include<stdio.h>
#include<math.h>

int main()
{
    int x,y, power;
    printf("Enter the value of x and y: ");
    scanf("%d%d",&x,&y);

    power = pow(x,y);

    printf("The value of %d to the power %d is %d",x,y,power);

}