#include<stdio.h>

int max_of_elements(int a[], int n);
int main()
{
    int maximum, n, a[100];

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    maximum = max_of_elements(a, n);

    printf("Maximum of elements of array is: %d\n", maximum);

}

int max_of_elements(int a[], int n)
{
    int max = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
        else
        {
            max = max;
        }
    }
    return max;
}

