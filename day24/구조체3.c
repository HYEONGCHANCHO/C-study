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
    // printf("ù��° ���� ��ǥ�� �Է��ϼ��� : ");
    // scanf("%d %d", &p1.x, &p1.y);
    // printf("�ι�° ���� ��ǥ�� �Է��ϼ��� : ");
    // scanf("%d %d", &p2.x, &p2.y);

    // xdiff = p1.x - p2.x;
    // ydiff = p1.y - p2.y;

    // diff = sqrt((double)(xdiff * xdiff + ydiff * ydiff));
    // printf("�� �� ������ �Ÿ��� %f�Դϴ�.\n", diff);

    return 0;
}