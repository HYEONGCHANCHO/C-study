#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // 난수(임의의수) 발생함수
    // 난수 발생시 #include <time.h>가 들어간다
        srand(time(NULL));
    for (int i = 1; i <= 5; i++)
    {
        printf("%d \n", rand() % 9 + 1); // 1~100사이의 난수
    }
    return 0;
}