#include <stdio.h>
#include <string.h>
int main()
{
    char name[25];
    int age;
    printf("�̸��� �Է��ϼ��� :");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; // �迭�� ���ڿ��Է��� �����ٴ� ǥ�ø� \0��ȣ�� �������� �־ �����ٴ� ���� �˷���� ��.
    printf("���̸� �Է��ϼ��� :");
    scanf("%d", &age);

    printf("\n Hello %s, how are you?", name);
    printf("\n You are %d years old", age);
    return 0;
}