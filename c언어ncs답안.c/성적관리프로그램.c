#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char fname[100];
    int number = 0, count = 0;
    float score = 0;
    float total = 0;
    char name[20];
    FILE *fp;
    printf("성적처리 파일 이름을 입력하시오 : ");
    scanf("%s", fname);
    fp = fopen(fname, "w");

    if (fp == NULL)
    {
        fprintf(stderr, "성적파일%s을 열 수 없습니다.\n", fname);
        exit(1);
    }
    while (1)
    {
        printf("학번, 이름, 성적을 입력하시오: (음수이면 종료)");
        scanf("%d", &number);
        if (number < 0)
            break;
        scanf("%s %f", name, &score);
        total += score;
        count++;
        fprintf(fp, "%d %s %f\n", number, name, score);
    }
    fclose(fp);

    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "성적파일%s을 열 수 없습니다.\n", fname);
        exit(1);
    }
    printf("평균 = %f\n", (total / count));
    fclose(fp);

    return 0;
}