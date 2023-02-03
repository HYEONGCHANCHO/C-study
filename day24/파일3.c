#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
// {
{

    FILE *fp;
    char c;
    fp = fopen("demo.txt", "r");
    if (fp == NULL)
    {
        printf("파일오류");
        exit(1);
    }

    while (!feof(fp))
    {
        c = getc(fp);
        printf("%c", c);
    }
    printf("\n");
    fclose(fp);
    return 0;
}