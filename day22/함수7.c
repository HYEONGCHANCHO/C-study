#include <stdio.h>
// int num = 0;
int num;
void grow();

int main()
{
    printf("�Լ� ȣ�� �� num�� %d \n", num);
    grow();
    printf("�Լ� ȣ�� �� num�� %d \n", num);

    return 0;
}
void grow()
{
    num = 60;
}