#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char c;
    fp=fopen("tset1.txt","w");

    if(fp==NULL)
    {
        printf("파일오류");
        exit(1);
    }

    printf("문자 입력 :");
    while ((c=getchar())!='\n')
    {
        printf("%c",c);
        fputc(c,fp);
    }
    fclose(fp);
    

    // FILE *fp;
    // char c;
    // fp = fopen("chracter.txt", "w");
    // if (fp == NULL)
    // {
    //     printf("파일 오류 \n");
    //     exit(1);
    // }
    // printf("*** Enter가 입력될 때까지 출력 *** \n");
    // printf("문자 입력 :");

    // while ((c = getchar()) != '\n')
    // {
    //     printf("%c", c);
    //     fputc(c, fp);
    // }
    // fclose(fp);
    return 0;
}