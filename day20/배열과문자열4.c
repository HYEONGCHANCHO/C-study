#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    char address[100];
    int i;
    printf("이름을 입력하세요 :");
    gets(name);
    printf("주소를 입력하세요 :");
    gets(address);

    puts(name);
    puts(address);

    for (i = 0; i < strlen(name); i++)
    {
        printf("%c \n", name[i]);
    }
    return 0;
}