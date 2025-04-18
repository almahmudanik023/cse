#include <stdio.h>

int main() 
{
    int n, sum = 0;

    printf("This program can calculate the sum of the series 2 + 4+ 6+.....+X. X is nth term.\n");
    printf("\n");
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 2 * i;
    }

    printf("The sum of the series of %dth term is: %d\n", n, sum);

    return 0;
}
