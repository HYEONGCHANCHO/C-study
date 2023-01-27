#include <stdio.h>
int main()
{
    char munja;
    printf("영문자 입력 :");
    munja = getchar();
    printf("입력한 문자는 %c이고 ascii 값은 %d 입니다.",munja,munja);
    return 0;
}