#include <stdio.h>
#include <string.h>
int main()
{
    //pointer�� �����ϰ� ����� ���۷���, variable-like
    //* indirection operator

    int age = 20;
    int *pAge = &age;
    printf("age�� �� %d \n", age);
    printf("age�� ������ �ּ� %p \n", &age);
    printf("age�� ������ �ּҸ� ���� �ִ� ���� %p \n", pAge);
    printf("age�� ������ �ּҸ� ���� �ִ� ���� %d \n", *pAge);//dereferencing ������

    printf("size of age : %d bytes \n", sizeof(age));
    printf("size of pAge : %d bytes \n", sizeof(pAge));
    return 0;
}