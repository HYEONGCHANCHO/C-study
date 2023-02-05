#include <stdio.h>
int main()
{
    // 1~5 별찍기

    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // 5~1 별찍기
    // 다이아몬드 별찍기

    return 0;
}