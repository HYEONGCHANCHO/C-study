#include <stdio.h>
int main()
{  //중간고사
    int kor, eng, com;
    // int total =(int)(kor+eng+com);
    // int avg =total/3;
    printf("국어점수? : ");
    scanf("%d", &kor);
    printf("영어점수? : ");
    scanf("%d", &eng);
    printf("컴퓨터 점수? : ");
    scanf("%d", &com);
    int total = kor+eng+com;
    int avg = total/3;
    // printf("총계 : %d \n 평균 : %.2lf ",kor+eng+com,(double)(kor+eng+com)/3 );
    printf("총계 : %d \n 평균 : %.2lf ",total,(double)avg );

    return 0;
}