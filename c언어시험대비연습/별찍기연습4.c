#include <stdio.h>
int main()
{
    // ���̾Ƹ�� �����
    // 1,3,5,7,9 / 7,5,3,1�� ���� �ϰ� ���� ���鵵 ��� ��
    int i, j;
    for (i = 1; i < 6; i++)
    {
        for (j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (j = 1; j < 2 * i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        for (j = 9; j > 2 * i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}