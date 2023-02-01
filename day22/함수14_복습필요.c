#include <stdio.h>
// 함수의 결과값을 포인터에 반환하는 함수
char *string_cpy(char *dest, const char *src);

int main()
{
    char str[20];
    char *pt;

    pt = string_cpy(str, "my program");
    printf("str : %s\n", str);
    printf("pt : %s\n", pt);
    return 0;
}

char *string_cpy(char *dest, const char *src)
{
    char *p = dest;
    while (*src)
    {
        *p++ = *src++;
        *p = NULL;
        return dest;
    }
}