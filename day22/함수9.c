#include <stdio.h>

void swap1(int i, int j);

int main()
{
    int i = 30, j = 80;
    swap1(i, j);
    printf("main i=%d, j=%d \n", i, j);

    return 0;
}

void swap1(int i, int j)
{
    int temp;
    temp = i;
    i = j;
    j = temp;
    printf("swap i=%d, j=%d \n", i, j);
}
