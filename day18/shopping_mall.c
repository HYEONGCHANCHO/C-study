#include <stdio.h>
int main()
{
    printf("%s", "�̸��� �Է��ϼ���");
    char name[256];
    scanf_s("%s", name, sizeof(name));
    printf("%s", "���̵� �Է��ϼ���");
    char Id[256];
    scanf_s("%s", Id, sizeof(Id));
    printf("%s", "���̸� �Է��ϼ���");
    int age;
    scanf_s("%d", &age);
    printf("%s", "������ �Է��ϼ���");
    char Bday[256];
    scanf_s("%s",Bday,sizeof(Bday));
    printf("%s", "�Ź� ũ�⸦ �Է��ϼ���");
    int shSize;
    scanf_s("%d",&shSize);

    printf("�̸�:\t%s\n", name);
    printf("���̵�:\t%s\n", Id);
    printf("����:\t%d\n", age);
    printf("�������:\t%s\n", Bday);
    printf("�Ź� ũ��:\t%d\n", shSize);
    return 0;
}