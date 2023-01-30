#include <stdio.h>
int main()
{
    char name[256];
    printf("이름이 뭐에요?");
    scanf_s("%s", name, sizeof(name));
    printf("%s \n", name);
    return 0;
}