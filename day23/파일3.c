#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file = fopen("C:\\web\\day23\\test2.txt", "wb");
    if (file == NULL)
    {
        printf("���� ���� ����\n");
        return 1;
    }
    return 0;
}