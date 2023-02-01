#include <stdio.h>

void swap(int *a, int *b);

int main()
{
    int a = 10;
    int b = 20;
    printf("a의 값은 %d, b의 값은 %d ", a, b);
    swap(&a, &b);
    return 0;
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("a의 값은 %d, b의 값은 %d ", *a, *b);
}
