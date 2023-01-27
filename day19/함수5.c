#include <stdio.h>
int myF(int x, int y)
{
    return x + y;
}
int main()
{
    printf("결과는%d 입니다",myF(3, 5));
    return 0;
}