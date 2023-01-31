#include <stdio.h>
int main()
{
    int array[3];
    int i,j;
    int total=0;
    printf("점수값 3개를 입력하세요");
    for(i=0;i<3;i++){
        scanf("%d",array+i);
    };
    for(j=0;j<3;j++) {
        printf("배열의 요소 array[%d]의 값 : %d",j,array[j]);
        total += array[j];
    
    }
    printf("총점은 %d 이고 평균은 %.2lf 입니다.", total, (double)total/3);











    // int array[3];
    // int j;
    // printf("점수값 3개를 입력하세요.\n");
    // for (j = 0; j < 3; j++)
    // {
    //     scanf("%d", &array[j]);
    // }
    // int i, total = 0;
    // for (i = 0; i < 3; i++)
    // {
    //     total = total + array[i];
    //     printf("배열의 요소 array[%d]의 값 : %d \n", i, array[i]);
    // }
    // printf("총점은 %d 이고", total);
    // printf("평균은 %.2lf 입니다 \n", (double)total / 3);

    return 0;
}