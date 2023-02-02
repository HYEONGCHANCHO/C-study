#include <stdio.h>
#include <stdlib.h>


int main()
{
    // 파일을 다룰 때, pointer선언 필요함
    FILE *fp=NULL;
    int c;
    fp = fopen("test.txt", "r");

    if (fp = NULL)
    {
        printf("File 열기 실패\n");
    }
    else
        printf("File 열기 성공\n");

    while ((c = fgetc(fp)) != EOF) 
        putchar(c);

    fclose(fp);
    return 0;
}