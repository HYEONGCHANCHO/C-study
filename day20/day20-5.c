#include <stdio.h>
int main()
{
    int arr[10];
    int i;

    // for (i = 0; i < 10; i++)
    // {
    //     printf("%d \n", arr[i]);
    // }

    int korea[4] = {15, 17, 27, 32};
    int china[4] = {27, 16, 19, 11};
    for (i = 0; i < 4; i++)
    {
        printf("%d \n", korea[i]);
    }
    printf("%d \n", korea); // %d 정수로 된 값을 출력하라는 서식지정자
    printf("%p \n", korea); // %p 는 포인터의 값(주소)을 출력하라는 서식 지정자
    printf("%p \n", &korea[0]); // %p 는 포인터의 값(주소)을 출력하라는 서식 지정자
    return 0;
}