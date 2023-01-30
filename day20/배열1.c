#include <stdio.h>
int main()
{
    // int score[10] = {10};
    // int i;
    // for (i = 0; i < 10; i++)
    // {
    //     printf("%d \n", score[i]);
    // }
    int score[] = {1, 2, 3, 4, 5, 6};
    int i, size;

    size = sizeof(score) / sizeof(score[0]);

    printf("%d",size);
    
    return 0;
}