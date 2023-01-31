#include <stdio.h>
int main()
{
    int num1 = 1, num2 = 2, num3 = 3, num4 = 4, num5 = 5;

    num1 += num2;
    num2 -= 2;
    num3 *= 2;
    num4 /= 2;
    num5 %= 2;

    printf("%d,%d,%d,%d,%d\n",num1,num2,num3,num4,num5);
    printf("%d,%d,%d,%d,%d\n",&num1,&num2,&num3,&num4,&num5);
    printf("%u,%u,%u,%u,%u\n",&num1,&num2,&num3,&num4,&num5);
    printf("%p,%p,%p,%p,%p\n",&num1,&num2,&num3,&num4,&num5);
    printf("%d,%d,%d,%d,%d\n",*&num1,*&num2,*&num3,*&num4,*&num5);
    return 0;
}