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
    printf("%d \n", korea); // %d ������ �� ���� ����϶�� ����������
    printf("%p \n", korea); // %p �� �������� ��(�ּ�)�� ����϶�� ���� ������
    printf("%p \n", &korea[0]); // %p �� �������� ��(�ּ�)�� ����϶�� ���� ������
    return 0;
}