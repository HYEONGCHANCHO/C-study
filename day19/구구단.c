#include<stdio.h>
int main(){
    printf("%s","����ϰ��� �ϴ� �� ���� �Է��ϼ���\n");
    int i, num;
    scanf("%d",&num);
    for(i=1; i<=9; i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    return 0;
}