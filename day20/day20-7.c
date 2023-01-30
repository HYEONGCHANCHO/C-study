#include <stdio.h>
#include <string.h>
int main()
{
    //pointer는 변수하고 비슷한 레퍼런스, variable-like
    //* indirection operator

    int age = 20;
    int *pAge = &age;
    printf("age의 값 %d \n", age);
    printf("age의 변수의 주소 %p \n", &age);
    printf("age의 변수의 주소를 갖고 있는 변수 %p \n", pAge);
    printf("age의 변수의 주소를 갖고 있는 변수 %d \n", *pAge);//dereferencing 역참조

    printf("size of age : %d bytes \n", sizeof(age));
    printf("size of pAge : %d bytes \n", sizeof(pAge));
    return 0;
}