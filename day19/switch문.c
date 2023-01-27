#include <stdio.h>
int main()
{
    int day = 8;
    switch (day)
    {
    case 1:
        printf("월요일");
        break;
    case 2:
        printf("화요일");
        break;
    case 3:
        printf("수요일");
        break;
    case 4:
        printf("목요일");
        break;
    case 5:
        printf("금요일");
        break;
    case 6:
        printf("토요일");
        break;
    case 7:
        printf("일요일");
        break;
    default:
        printf("다음주말");
    }
    return 0;
}