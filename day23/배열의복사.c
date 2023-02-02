#include <stdio.h>
int main()
{
    int score[] = {1, 2, 3, 4, 5, 6};
    int b[5] = {0};
    int i, size;
    size = sizeof(score) / sizeof(score[0]);
    for (i = 0; i < size; i++)
    {
        printf("%d", score[i]);
    }
    printf("\n");
    for (i = 0; i < size; i++)
    {
        b[i] = score[i];
    }
    for (i = 0; i < size; i++)
    {
        printf("%d", b[i]);
    }
    return 0;
}