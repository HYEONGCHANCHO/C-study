#include <stdio.h>
#include <string.h>
// 문자열 비교 , strcmp(매개변수1, 매개변수2)

int main()
{
    char *s1 = "Republic of Korea";
    char *s2 = "republic of Korea";
    int pt;

    pt = strcmp(s1, s2);
    if (pt < 0 || pt > 0)
        printf("문자열이 서로 다릅니다. \n");
    if (pt == 0)
        printf("문자열이 서로 같습니다. \n");
    return 0;
}
