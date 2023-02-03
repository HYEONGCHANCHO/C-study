#include <stdio.h>
int main()
{

    FILE *src_file, *cpy_file;
    char filename[100];
    char buffer[1024];
    int r_count;

    printf("이미지 파일 이름 :");
    scanf("%s", filename);

    src_file = fopen(filename, "rb");
    cpy_file = fopen("copy.png", "wb");

    // fread , fwrite

    while ((r_count = fread(buffer, 1, sizeof(buffer), src_file)) > 0)
    {
        int w_count = fwrite(buffer, 1, r_count, cpy_file);

        if (w_count < 0)
        {
            fprintf(stderr , "파일쓰기 오류\n");
            return 1;
        }

        if (w_count < r_count)
        {
            fprintf(stderr, "미디어쓰기 오류\n");
            return 1;
        }
    }

    if (src_file == NULL || cpy_file == NULL)
    {
        fprintf(stderr, "파일 열기 오류\n");
        return 1;
    }

    printf("copy.png파일이 복사되었습니다.\n");
    fclose(src_file);
    fclose(cpy_file);
    return 0;
}