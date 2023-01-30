#include <stdio.h>
int main()
{
    int myNum[4] = {25, 50, 75, 100};
    int i;
    *myNum = 13;
    *(myNum + 1) = 17;
    for (i = 0; i < 4; i++)
    {
        printf("%d \n", myNum[i]);
    }
    // 주소 출력
    // 주소가 4bytes씩 증가하며 연속적이다.
    for (i = 0; i < 4; i++)
    {
        printf("%p \n", &myNum[i]);
    }
    printf("%d \n", *myNum);
    printf("%d \n", *(myNum + 1));
    return 0;
}