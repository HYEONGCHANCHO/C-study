#include <stdio.h>
int main()
{

    // int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int i, j;
    // int sum1 = 0, sum2 = 0, sum3 = 0;

    // for (j = 0; j < 3; j++)
    // {
    //     sum1 += arr1[0][j];
    //     sum2 += arr1[1][j];
    //     sum3 += arr1[2][j];
    // }
    // printf("%d %d %d", sum1, sum2, sum3);
    int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int i, j;
    int sum = 0;
    for (i = 0; i < 3; i++)
    {
        sum = 0;
        for (j = 0; j < 3; j++)
        {
            sum += arr1[i][j];
        }
        printf("arr1배열 %d행의 합은 : %d\n", i + 1, sum);
    }

    return 0;
}
