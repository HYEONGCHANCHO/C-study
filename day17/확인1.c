#include <stdio.h>
int main()
{
    double number1 = 10;
    int number2 = 1.2345;
    short number3 = 70000;
    // printf("%f \n", number1);
    // printf("%d \n", number2);
    // printf("%d \n", number3);
    // 형변환
    printf("%d \n", (short)3.1415);
    printf("%d \n", (int)3.1415);
    printf("%f \n", (double)10);
    printf("%f \n", (float)10);

    printf("%c \t",'a');
    printf("%d",'a');
    return 0;
}