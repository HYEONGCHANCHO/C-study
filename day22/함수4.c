#include <stdio.h>
int sum (int a, int b);

int main(){
    int a1=5, b2=4;
    printf("a1+b2=%d",sum(a1,b2));
    return 0;
}

int sum (int a, int b){
    return a+b;
}





// #include <stdio.h>
// // �Լ��� ����
// int sum(int a, int b);
// int main()
// { // �Լ��� ȣ��
//     int a1 = 5, a2 = 8;

//     printf("a+b=%d\n", sum(a1, a2));
//     return 0;
// }

// // �Լ��� ����
// int sum(int a, int b)
// {
//     return a + b;
// }