#include <stdio.h>
#include <string.h>
// ���ڿ� �� , strcmp(�Ű�����1, �Ű�����2)

int main()
{
    char *s1 = "Republic of Korea";
    char *s2 = "republic of Korea";
    int pt;

    pt = strcmp(s1, s2);
    if (pt < 0 || pt > 0)
        printf("���ڿ��� ���� �ٸ��ϴ�. \n");
    if (pt == 0)
        printf("���ڿ��� ���� �����ϴ�. \n");
    return 0;
}
