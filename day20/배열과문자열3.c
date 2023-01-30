#include <stdio.h>
#include <string.h>
int main()
{
    char name1[] = "James Smith";
    char name2[] = "Hong Gil Dong";
    char name3[] = "ȫ�浿";
    int i,j;
    printf("%d \n", strlen(name1));
    for (i = 0; i < strlen(name1); i++)
    {
        printf("%c", name1[i]);
    }
    for (j = 0; j < strlen(name2); j++)
    {
        printf("%c", name2[j]);
    }
    return 0;
}