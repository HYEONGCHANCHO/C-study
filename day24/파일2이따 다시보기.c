#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
// {
{
    FILE *fp;
    char c;
    fp = fopen("test1.txt", "r");

    if (fp == NULL)
    {
        printf("파일오류");
        exit(1);
    }
    //     FILE *fp;
    //     char c;
    //     fp = fopen("demo.txt", "r");
    //     if (fp == NULL)
    //     {
    //         printf("파일오류");
    //         exit(1);
    //     }

    while ((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }
    fclose(fp);
    printf("\n");
    return 0;
}