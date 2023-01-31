#include <stdio.h>
int main()
{
    // 3За3ї­ x x x
    //        x x x
    //        x x x
    // char xxx[3][6] = {{"x x x"},{"x x x"},{"x x x"}};
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%s \n", xxx[i]);
    // }
    char x[3][3];
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (i == j)
                x[i][j] = 'O';
            else
                x[i][j] = 'X';
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%3c", x[i][j]);
        }
        printf("\n");
    }

    return 0;
}
