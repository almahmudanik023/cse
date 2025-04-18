#include<stdio.h>

int sum_of_elements(int a[], int n);
int main()
{
    int total, n, a[100];

    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    total = sum_of_elements(a, n);

    printf("Sum of elements of array is: %d\n", total);

}

int sum_of_elements(int a[], int n)
{
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    return sum;
}

