#include <stdio.h>
#include <string.h>
int main()
{
    char name[25];
    int age;
    printf("이름을 입력하세요 :");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; // 배열에 문자열입력을 끝났다는 표시를 \0기호를 마지막에 넣어서 끝났다는 것을 알려줘야 함.
    printf("나이를 입력하세요 :");
    scanf("%d", &age);

    printf("\n Hello %s, how are you?", name);
    printf("\n You are %d years old", age);
    return 0;
}