#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // ����(�����Ǽ�) �߻��Լ�
    // ���� �߻��� #include <time.h>�� ����
        srand(time(NULL));
    for (int i = 1; i <= 5; i++)
    {
        printf("%d \n", rand() % 9 + 1); // 1~100������ ����
    }
    return 0;
}