#include <stdio.h>
int main()
{
    // int score[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // score[0] = score[1];
    // printf("%d", score[5]);
    // printf("%d", score[2]);
    int i;
    int score[5];
    score[0] = 10;
    score[1] = 20;
    score[2] = 30;
    score[3] = 40;
    score[4] = 50;

    for (i = 0; i < 5; i++)
    {
        printf("score[%d] = %d \t", i, score[i]);
        printf("score[%d] = %p \t", i, &score[i]);
        printf("score[%d] = %d \n", i, *(&score[i]));

    }
    return 0;
}