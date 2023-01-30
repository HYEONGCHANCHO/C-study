#include <stdio.h>
#include <stdbool.h>
int main()
{
    char a = 'C';
    char b[]="program";
    // float c = 3.141592; //4byte 6-7digits, %f사용
    float c = 3.1415922842948; //4byte 6-7digits, %f사용
    double d =3.1415922842948; //double 형 8bytes 15-16digits
    bool e=false;
    char f=100; // 1byte ( -128~127까지 표현가능)
    unsigned char g=255;
    short int h = 32767; //2bytes(-32,768~32,767)
    unsigned short int i = 65535; //2bytes(0~65535)
    int j = 2131314141;
    unsigned int k = 4215315135;
    long long int l =9223372036854775807; //8bytes %lld
    unsigned long long int m =18446744073709551615; //8bytes %llu

    printf("%c \n",a); //문자(character) 1개
    printf("%s \n",b); // character array
    // printf("%f \n",c); //float
    // printf("%lf \n",d); //float
    printf("%.15f \n",c); //float
    printf("%.15lf \n",d); //float
    printf("%d \n",e); //float
    printf("%d \n",f); //float
    printf("%d \n",g); //
    printf("%d \n",h); //
    printf("%d \n",i); //
    printf("%d \n",j); //
    printf("%u \n",k); //
    printf("%lld \n",l); //
    printf("%llu \n",m); //

    // printf(" \n",);
    // printf(" \n",);


    return 0;
}