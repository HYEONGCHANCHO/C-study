#include <stdio.h>

//extern 변수 
int main()
{
    extern int num1;
    extern int num2;
    extern int num3;
    printf("num1의 값은 %d\n",num1);
    printf("num2의 값은 %d\n",num2);
    printf("num3의 값은 %d\n",num3);
    printf("합계는 %d\n",num1+num2+num3);
    return 0;
}