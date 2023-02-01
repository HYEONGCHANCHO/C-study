#include <stdio.h>
//지역변수, 전역변수
//지역변수는 {스코프} 안에서 선언되고 실행되고 {}가 종료될 때 소멸된다.
int main()
{   
    int i=0;
    int total=0;
    for(i=1;i<3;i++){
        int total =0;
        total = total+i;
    }
    if(total<10)
    {
        printf("total값은 %d 입니다",total);
    }
    return 0;
}
