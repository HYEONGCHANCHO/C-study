#include <stdio.h>
int main()
{
    int array[3];
    int i,j;
    int total=0;
    printf("������ 3���� �Է��ϼ���");
    for(i=0;i<3;i++){
        scanf("%d",array+i);
    };
    for(j=0;j<3;j++) {
        printf("�迭�� ��� array[%d]�� �� : %d",j,array[j]);
        total += array[j];
    
    }
    printf("������ %d �̰� ����� %.2lf �Դϴ�.", total, (double)total/3);











    // int array[3];
    // int j;
    // printf("������ 3���� �Է��ϼ���.\n");
    // for (j = 0; j < 3; j++)
    // {
    //     scanf("%d", &array[j]);
    // }
    // int i, total = 0;
    // for (i = 0; i < 3; i++)
    // {
    //     total = total + array[i];
    //     printf("�迭�� ��� array[%d]�� �� : %d \n", i, array[i]);
    // }
    // printf("������ %d �̰�", total);
    // printf("����� %.2lf �Դϴ� \n", (double)total / 3);

    return 0;
}