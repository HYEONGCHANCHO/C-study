#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file = fopen("C:\\web\\day23\\test2.txt", "wb");
    if (file == NULL)
    {
        printf("파일 열기 실패\n");
        return 1;
    }
    return 0;
}