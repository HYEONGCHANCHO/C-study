#include <stdio.h>
int main()
{
    char name[100];
    char address[100];

    printf("이름이 뭐에요?");
    scanf("%s", name);
    printf("현재 거주하는 주소를 입력하시오 :");
    scanf("%s", address);
    
    printf("\n이름 : %s \n", name);
    printf("주소 : %s \n", address);
    return 0;
}