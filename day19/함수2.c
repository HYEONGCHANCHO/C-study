// #include <stdio.h>
// void myF(char x[])
// {
//     printf("%s �ҷ�����?",x);
// }

// int main()
// {
//     myF("John");
//     myF("Jenny");
//     return 0;
// }
// #include <stdio.h>
// void myF(char name[]){
// printf("%s�� �ȳ��ϼ���",name);
// }
// int main(){
//     myF("hon");
//     return 0;
// }
#include <stdio.h>
void myF(char name[], int old){
printf("�ȳ��ϼ��� %s���� %d ���Դϴ�",name,old);
}
int main(){
    myF("hon",20);
    myF("wrw",22);
    return 0;
}