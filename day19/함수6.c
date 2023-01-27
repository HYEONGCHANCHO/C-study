#include <stdio.h>
int addNum(x, y);

int main()
{
    int x, y;
    printf("더할 숫자 입력 : ");
    scanf("%d %d", &x, &y);
    printf("%d", addNum(x,y));
    return 0;
}

int addNum(x, y)
{
    return x + y;
}