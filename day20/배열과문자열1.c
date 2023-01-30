#include <stdio.h>
int main()
{
    // char name[] = {'a', 'b', 'c', 'd', 'e'};
    // char name[5] = "copy";
    char name[] = {'c', 'o', 'p', 'y', '\0'};
    int i;
    printf("%c \n", name[3]);
    printf("%c \n", name[4]);
    // for (i = 0; i < 5; i++)
    //     printf("%c\n", name[i]);
    return 0;
}