#include<stdio.h>
int main(){
    int a,b,c;
    printf("10진수 정수 1개 입력 :");
    scanf("%d" ,&a);
    printf("10진수 : %d, 16진수 :%x, 8진수: %o \n",a,a,a);
    printf("16진수 정수 1개 입력 :");
    scanf("%x" ,&b);
    printf("10진수 : %d, 16진수 :%x, 8진수: %o \n",b,b,b);
    printf("8진수 정수 1개 입력 :");
    scanf("%o" ,&c);
    printf("10진수 : %d, 16진수 :%x, 8진수: %o \n",c,c,c);
    return 0;
}