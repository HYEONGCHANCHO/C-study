#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (k = 0; k < i; k++)
        {
            printf(" ");
        }
        for (j = 9; j > 2 * i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i < 6; i++)
    {
        for (k = 5; k > i; k--)
        {
            printf(" ");
        }
        for (j = 1; j < 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}