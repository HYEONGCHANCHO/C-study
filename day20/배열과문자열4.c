#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    char address[100];
    int i;
    printf("�̸��� �Է��ϼ��� :");
    gets(name);
    printf("�ּҸ� �Է��ϼ��� :");
    gets(address);

    puts(name);
    puts(address);

    for (i = 0; i < strlen(name); i++)
    {
        printf("%c \n", name[i]);
    }
    return 0;
}