#include <stdio.h>

struct GameInfo
{
    char *name;
    int year;
    int price;
    char *company;
};
int main()
{
    struct GameInfo gameArray[2] =
        {
            {"��������", 2022, 50, "����ȸ��"},
            {"�ʵ�����", 2022, 100, "�ʵ�ȸ��"}};

    struct GameInfo *p1,*p2;
    p1 = &gameArray[0];
    p2 = &gameArray[1];

    printf("\n--���� ��� ���� ==\n");
    printf("���� �̸� : %s\n", (*p1).name);
    printf("�߸� ���� : %d\n", (*p1).year);
    printf("���� ���� : %d\n", (*p1).price);
    printf("���� ȸ�� : %s\n", (*p1).company);

    printf("���� �̸� : %s\n", p2->name);
    printf("�߸� ���� : %d\n", p2->year);
    printf("���� ���� : %d\n", p2->price);
    printf("���� ȸ�� : %s\n", p2->company);
    // struct GameInfo gameArray[2] =
    //     {
    //         {"��������", 2022, 50, "����ȸ��"},
    //         {"�ʵ�����", 2022, 100, "�ʵ�ȸ��"}};

    // struct GameInfo *p;
    // p = gameArray;

    // printf("\n--���� ��� ���� ==\n");
    // printf("���� �̸� : %s\n", p->name);
    // printf("�߸� ���� : %d\n", p->year);
    // printf("���� ���� : %d\n", p->price);
    // printf("���� ȸ�� : %s\n", p->company);

    return 0;
}