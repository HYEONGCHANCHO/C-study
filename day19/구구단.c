#include<stdio.h>
int main(){
    printf("%s","출력하고자 하는 단 수를 입력하세요\n");
    int i, num;
    scanf("%d",&num);
    for(i=1; i<=9; i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}