#include <stdio.h>
int main()
{  //�߰����
    int kor, eng, com;
    // int total =(int)(kor+eng+com);
    // int avg =total/3;
    printf("��������? : ");
    scanf("%d", &kor);
    printf("��������? : ");
    scanf("%d", &eng);
    printf("��ǻ�� ����? : ");
    scanf("%d", &com);
    int total = kor+eng+com;
    int avg = total/3;
    // printf("�Ѱ� : %d \n ��� : %.2lf ",kor+eng+com,(double)(kor+eng+com)/3 );
    printf("�Ѱ� : %d \n ��� : %.2lf ",total,(double)avg );

    return 0;
}