#include <stdio.h>

//extern ���� 
int main()
{
    extern int num1;
    extern int num2;
    extern int num3;
    printf("num1�� ���� %d\n",num1);
    printf("num2�� ���� %d\n",num2);
    printf("num3�� ���� %d\n",num3);
    printf("�հ�� %d\n",num1+num2+num3);
    return 0;
}