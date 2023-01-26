#include <stdio.h>
int main()
{
    printf("%s", "이름을 입력하세요");
    char name[256];
    scanf_s("%s", name, sizeof(name));
    printf("%s", "아이디를 입력하세요");
    char Id[256];
    scanf_s("%s", Id, sizeof(Id));
    printf("%s", "나이를 입력하세요");
    int age;
    scanf_s("%d", &age);
    printf("%s", "생일을 입력하세요");
    char Bday[256];
    scanf_s("%s",Bday,sizeof(Bday));
    printf("%s", "신발 크기를 입력하세요");
    int shSize;
    scanf_s("%d",&shSize);

    printf("이름:\t%s\n", name);
    printf("아이디:\t%s\n", Id);
    printf("나이:\t%d\n", age);
    printf("생년월일:\t%s\n", Bday);
    printf("신발 크기:\t%d\n", shSize);
    return 0;
}