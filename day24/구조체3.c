#include <stdio.h>
#include <math.h>

int main()
{
    struct point
    {
        int x;
        // int y;
        char name[20];
    };

    struct point p1;

    scanf("%d %s",&p1.x,p1.name);
    printf("%d %s",p1.x,p1.name);
    // int xdiff, ydiff;
    // double diff;

    // struct point p1, p2;
    // printf("첫번째 점의 좌표를 입력하세요 : ");
    // scanf("%d %d", &p1.x, &p1.y);
    // printf("두번째 점의 좌표를 입력하세요 : ");
    // scanf("%d %d", &p2.x, &p2.y);

    // xdiff = p1.x - p2.x;
    // ydiff = p1.y - p2.y;

    // diff = sqrt((double)(xdiff * xdiff + ydiff * ydiff));
    // printf("두 점 사이의 거리는 %f입니다.\n", diff);

    return 0;
}