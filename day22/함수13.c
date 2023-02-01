#include <stdio.h>
int plus(int x, int y);
int main()
{
    int (*pt)(int x, int y);
    int a = 3, b = 5;
    pt = plus;
    printf("result = %d \n", pt(a,b));
    printf("result = %d \n", plus(a, b));
    return 0;
}

int plus(int x, int y)
{
    return x + y;
}