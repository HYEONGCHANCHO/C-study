#include <stdio.h>

struct GameInfo
{
    char *name;
    int year;
    int price;
    char *company;
    struct GameInfo *friendGame;
};
typedef struct GameInformation
{
    char *name;
    int year;
    int price;
    char *company;
    struct GameInfo *friendGame;
} GAME_INFO;

int main()
{
    typedef struct GameInfo game_info;
    game_info a1;
    a1.name = "�ѱ۰���";
    a1.year = 2023;

    GAME_INFO a2;
    a2.name="���ڰ���";
    a2.year=2024;

    printf("--���� ��� ����--\n");
    printf("�����̸� : %s\n",a1.name);
    printf("��ÿ��� : %d\n",a1.year);
    printf("�����̸� : %s\n",a2.name);
    printf("��ÿ��� : %d\n",a2.year);

    return 0;
}