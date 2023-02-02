#include <stdio.h>
int main()
{
    char word[5][15] = {
        "world",
        "heroes",
        "voc",
        "source",
        "korea"};
    int i;

        for (i = 0; i < sizeof(word[i]); i++)
        {
            printf("-");
        }
        printf("\n");

    return 0;
}