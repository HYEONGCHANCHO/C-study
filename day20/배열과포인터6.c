#include <stdio.h>
#define STUDENT 5
int main()
{
    int score[STUDENT];
    int sum = 0;
    int i, ave;
    // 학생들의 점수를 입력받는다.

    for (i = 0; i < STUDENT; i++)
    {
        printf("학생의 성적을 입력하세요 : ");
        scanf("%d", &score[i]);
    }

    for (i = 0; i < STUDENT; i++)
    {
        // printf("학생의 성적은 %d : ", score[i]);
        sum += score[i];
    }
    ave = sum / STUDENT;
    printf("평균은 %d", ave);

    return 0;
}