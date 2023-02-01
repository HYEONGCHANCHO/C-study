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
// // 함수의 원형
// int sum(int a, int b);
// int main()
// { // 함수의 호출
//     int a1 = 5, a2 = 8;

//     printf("a+b=%d\n", sum(a1, a2));
//     return 0;
// }

// // 함수의 정의
// int sum(int a, int b)
// {
//     return a + b;
// }