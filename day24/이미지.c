#include <stdio.h>
int main()
{

    FILE *src_file, *cpy_file;
    char filename[100];
    char buffer[1024];
    int r_count;

    printf("�̹��� ���� �̸� :");
    scanf("%s", filename);

    src_file = fopen(filename, "rb");
    cpy_file = fopen("copy.png", "wb");

    // fread , fwrite

    while ((r_count = fread(buffer, 1, sizeof(buffer), src_file)) > 0)
    {
        int w_count = fwrite(buffer, 1, r_count, cpy_file);

        if (w_count < 0)
        {
            fprintf(stderr , "���Ͼ��� ����\n");
            return 1;
        }

        if (w_count < r_count)
        {
            fprintf(stderr, "�̵��� ����\n");
            return 1;
        }
    }

    if (src_file == NULL || cpy_file == NULL)
    {
        fprintf(stderr, "���� ���� ����\n");
        return 1;
    }

    printf("copy.png������ ����Ǿ����ϴ�.\n");
    fclose(src_file);
    fclose(cpy_file);
    return 0;
}