#include <stdio.h>
#define STUDENT 5
int main()
{
    int score[STUDENT];
    int sum = 0;
    int i, ave;
    // �л����� ������ �Է¹޴´�.

    for (i = 0; i < STUDENT; i++)
    {
        printf("�л��� ������ �Է��ϼ��� : ");
        scanf("%d", &score[i]);
    }

    for (i = 0; i < STUDENT; i++)
    {
        // printf("�л��� ������ %d : ", score[i]);
        sum += score[i];
    }
    ave = sum / STUDENT;
    printf("����� %d", ave);

    return 0;
}