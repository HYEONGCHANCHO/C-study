#include <stdio.h>
int main()
{
    char a[5] = "copy";
    char *pt;
    pt = a;

    printf("�迭�� �����ּ� : %u\n", pt);
    printf("�迭�� �����ּ� : %u\n", a);
    return 0;
}