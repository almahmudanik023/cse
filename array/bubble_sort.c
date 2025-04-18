#include<stdio.h>

int main()
{
    int swap, n, a[100], b[100];

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if(a[j] < a[j+1])
            {
                swap = a[j+1];
                a[j+1] = a[j];
                a[j] = swap;
            }
        }
    }

    printf("The sorted elements of the array are: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}

