#include<stdio.h>

int main()
{
    int i = 0, n = 0, a[100];


    FILE *file = fopen("arrey.txt", "r");

    while(!feof(file))
    {
        fscanf(file, "%4d", &a[i]);
        i++;
        n++;
    }

    printf("Enter elements of the arrey are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%4d", a[i]);
    }
}