#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (k = 4; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}