#include <stdio.h>
#include <stdlib.h>

int main()
{
    // ������ �ٷ� ��, pointer���� �ʿ���
    FILE *fp;
    fp = fopen("test.txt", "w");

    if (fp = NULL)
    {
        printf("File ���� ����\n");
    }
    else
        printf("File ���� ����\n");
        fputc('a', fp);
        fputc('b', fp);
        fputc('c', fp);



    fclose(fp);
    return 0;
}