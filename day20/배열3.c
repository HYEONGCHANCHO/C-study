#include <stdio.h>
int main()
{
    int korea[4] = {15, 17, 27, 32};
    int china[4] = {27, 16, 19, 11};
    int i;
    int sum1;
    int sum2;

    printf("국가/qua   1Q\t2Q\t3Q\t4Q\t합계");
    printf("\n대한민국 : ");
    for (i = 0; i < 4; i++)
    {
        printf("%d \t", korea[i]);
        sum1 += korea[i];
    }
    printf("%d",sum1);

    printf("\n중    국 : ");
    for (i = 0; i < 4; i++)
    {
        printf("%d \t", china[i]);
        sum2 += china[i];
    }
    printf("%d",sum2);

    return 0;
}
