#include <stdio.h>
int main()
{
    char str[10];
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("input :");
        gets(str);
        printf("str : %s \n", str);

        int j = 0;
        while (1)
        {
            if (str[j] == '\0')
                break;

            printf("[%c]", str[j]);
            ++j;
        }
    }
    printf("\n");
    return 0;
}
