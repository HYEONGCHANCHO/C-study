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
        printf("���Ͽ���");
        exit(1);
    }

    printf("���� �Է� :");
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
    //     printf("���� ���� \n");
    //     exit(1);
    // }
    // printf("*** Enter�� �Էµ� ������ ��� *** \n");
    // printf("���� �Է� :");

    // while ((c = getchar()) != '\n')
    // {
    //     printf("%c", c);
    //     fputc(c, fp);
    // }
    // fclose(fp);
    return 0;
}