#include <stdio.h>
// int num = 0;
int num;
void grow();

int main()
{
    printf("함수 호출 전 num은 %d \n", num);
    grow();
    printf("함수 호출 후 num은 %d \n", num);

    return 0;
}
void grow()
{
    num = 60;
}