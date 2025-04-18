#include<stdio.h>

int main()
{
    int n;

    FILE *file = fopen("numbers.txt", "r");

    while(!feof(file))
    {
        fscanf(file, "%i", &n);
        printf("%i\n",n);
    }

    fclose(file);
}
