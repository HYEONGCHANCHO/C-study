#include <stdio.h>
int main()
{
    int korea[4];
    int china[4];
    int i;
    int sum1 = 0, sum2 = 0;
    for (i = 0; i < 4; i++)
    {
        printf("���ѹα��� %dQ�� ����? :", (i + 1));
        scanf("%d",&korea[i]);
        sum1 +=korea[i];
    }
    printf("���ѹα��� �հ�%d",sum1);
    for (i = 0; i < 4; i++)
    {
        printf("\n�߱��� %dQ�� ����? :", (i + 1));
        scanf("%d",&china[i]);
        sum2 +=china[i];
    }
    printf("�߱��� �հ�%d",sum2);
    return 0;
}
// {
//     int korea[4] = {15, 17, 27, 32};
//     int china[4] = {27, 16, 19, 11};
//     int i,sum1=0,sum2=0;
//     printf("���ѹα� :");
//     for (i = 0; i < 4; i++)
//     {
//         printf("%d \t", korea[i]);
//         sum1 +=korea[i];
//     }
//     printf("�հ� %d",sum1);
//     printf("\n�߱� :");
//     for (i = 0; i < 4; i++)
//     {
//         printf("%d \t", china[i]);
//         sum2 +=china[i];
//     }
//     printf("�հ� %d",sum2);

//     return 0;
// }
