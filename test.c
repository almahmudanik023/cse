#include<stdio.h>

int main()
{
	FILE *fw = fopen("file.txt", "w");
    fprintf(fw, "Hello\n");
    fprintf(fw, "World");
    fclose(fw);

    FILE *fr = fopen("file.txt", "r");
    while(!feof(fr))
    {
        char a[100];
    fscanf(fr, "%s", &a);
    printf("%s\n", a);}
    return 0;
	
}

