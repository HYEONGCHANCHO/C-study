#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 파일을 다룰 때, pointer선언 필요함
    FILE *fp;
    fp = fopen("test.txt", "w");

    if (fp = NULL)
    {
        printf("File 열기 실패\n");
    }
    else
        printf("File 열기 성공\n");
        fputc('a', fp);
        fputc('b', fp);
        fputc('c', fp);



    fclose(fp);
    return 0;
}