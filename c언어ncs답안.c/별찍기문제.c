#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 10; ++i)
    {
        printf("\n");
        for (j = 1; j <= i; ++j)
        {
            printf("%c", '*');
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("\n");
        for (j = 9; j > i; j--)
        {
            printf("*");
        }
    }

    return 0;
}