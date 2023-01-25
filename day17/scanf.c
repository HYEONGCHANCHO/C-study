#include <stdio.h>
int main()
{
    //printf()
    //scanf()키보드로부터 값을 입력받음
    // printf("%d", 'a');
    // int age;
    // printf("How old are you?");
    // scanf("%d", &age);
    // printf("your age is%d",age);

    int age;
    printf("what is your age?");
    scanf("%d", &age);
    printf("Wow~ Really? Are you %d years old? \n", age);
    
    return 0;
}