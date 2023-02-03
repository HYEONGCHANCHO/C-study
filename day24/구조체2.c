#include <stdio.h>
#include <math.h>
struct point
{
    int x;
    int y;
};
int main()
{
    struct point p1; // 첫번째 점의 좌표를 입력
    struct point p2; // 두번째 점의 좌표를 입력
    int xdiff, ydiff;
    double distance;

    printf("첫번째 점의 x,y좌표를 입력하세요. : ");
    scanf("%d %d", &p1.x, &p1.y);

    printf("두번째 점의 x,y좌표를 입력하세요. : ");
    scanf("%d %d", &p2.x, &p2.y);

    xdiff = p1.x - p2.x;
    ydiff = p1.y - p2.y;

    distance = sqrt((double)(xdiff * xdiff + ydiff * ydiff));
    printf("두 점의 거리는 %f입니다.", distance);
    return 0;
}