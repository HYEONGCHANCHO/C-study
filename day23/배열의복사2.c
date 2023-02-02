#include <stdio.h>
int main()
{
    int score[] = {2, 4, 3, 7, 5, 6};
    int b[5] = {9, 4, 2, 10, 7};
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (b[i] == score[j])
            printf("%d\n",b[i]);
        }
    }

    return 0;
}