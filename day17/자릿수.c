#include <stdio.h>
int main()
{

    float num = 1234.56789;
    printf("%.2f \n", num);
    printf("%.2e \n", num);
    printf("%10.2f \n", num); //출력은 10칸 소수 둘째자리 까지 남은공간은 공백으로 채움
    printf("%10.2e \n", num);
    printf("%010.2e \n", num); //남은 공간은 0으로 채움
    printf("%#o \n", num);
    printf("%#x \n", num);
    printf("%#X \n", num);
    printf("%20c \n", 'a');
    printf("%20s \n", "hellod,world!");
}