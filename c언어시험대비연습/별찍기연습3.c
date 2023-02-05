#include <stdio.h>
int main()
{

    // 5~1 별찍기
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 5; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    // 다이아몬드 별찍기

    return 0;
}