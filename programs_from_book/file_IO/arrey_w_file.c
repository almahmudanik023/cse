#include<stdio.h>

int main()
{
    int n, a[100];

    printf("How many number on the arrey: ");
    scanf("%d", &n);

    FILE *file = fopen("arrey.txt", "w");

    printf("Enter elements of the arrey: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%4d", a[i]);
    }
}