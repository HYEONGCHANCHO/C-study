#include <stdio.h>
#include <stdlib.h>


int main()
{
    // ������ �ٷ� ��, pointer���� �ʿ���
    FILE *fp=NULL;
    int c;
    fp = fopen("test.txt", "r");

    if (fp = NULL)
    {
        printf("File ���� ����\n");
    }
    else
        printf("File ���� ����\n");

    while ((c = fgetc(fp)) != EOF) 
        putchar(c);

    fclose(fp);
    return 0;
}