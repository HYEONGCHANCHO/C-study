#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char fname[100];
    int number, score, count;
    // float score = 0;
    int total = 0;
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
    fgets(score,count,fp);
    total += score;
    // printf("%s",name);

    printf("평균 = %f\n", total / count);
    fclose(fp);
    // fgets()
    // // 파일에서 성적을 읽어서 평균을 구한다.
    // // 입력
    // {
    //     // 입력
    //     total += score;
    //     count++;
    // }
    // // 입력
    return 0;
}