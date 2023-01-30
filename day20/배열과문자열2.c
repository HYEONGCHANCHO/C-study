#include <stdio.h>
int main()
{
    char name1[] = "James Smith";
    char name2[] = "Hong Gil Dong";
    char name3[] = "ȫ�浿";
    int i,j;
    for (i = 0; i < 20; i++)
    {
        printf("%c", name1[i]);
    }
    for (j = 0; j < 20; j++)
    {
        printf("%c", name2[j]);
    }
    return 0;
}