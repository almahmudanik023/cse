#include<stdio.h>

int main()
{
    int n;

    printf("How many number do you want to write: ");
    scanf("%d", &n);

    FILE *file = fopen("numbers.txt", "w");

    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%d\n", i+1);
    }

    fclose(file);
}
