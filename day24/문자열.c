#include <stdio.h>
int main()
{
    char s[80];

    printf("문자열을 입력하시오 :");
    scanf("%[abc]", s); //입력을 abc로만 받겠다
    scanf("%[yn]", s); //입력을 abc로만 받겠다

    printf("입력된 문자열=%s\n", s);

    return 0;
}