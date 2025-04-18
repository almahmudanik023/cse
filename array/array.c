#include<stdio.h>

int main()
{
    int n, a[100];

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("The elements of the array are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}