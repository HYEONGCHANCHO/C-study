#include <stdio.h>
int main()
{
    int i,num,sum=0;
    printf("양수의 숫자를 입력하세요 :");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        sum+=i;
    
    }
    printf("sum = %d",sum);
    return 0;
}