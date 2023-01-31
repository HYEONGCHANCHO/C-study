#include <stdio.h>
int main()
{
    int i;
    char nation[3][9] = {"Korea", "England", "Thailand"};

    for (i = 0; i < 3; i++)
    {
        printf("%s\n", nation[i]);
    }

    return 0;
}
