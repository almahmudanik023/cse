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
            if(a[j]> a[j+1])
            {
                swap = a[j+1];
                a[j+1] = a[j];
                a[j] = swap;
            }
        }
    }

    FILE *fw = fopen("sorted.txt", "w");
    fprintf(fw, "The sorted elements of the array are:\n");
    for(int i = 0; i < n; i++)
    {
        fprintf(fw, "%d\n", a[i]);
    }
    fclose(fw);
    printf("The elements are sorted and written to the sorted.txt file\n");
}

