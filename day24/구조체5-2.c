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
            {"나도게임", 2022, 50, "나도회사"},
            {"너도게임", 2022, 100, "너도회사"}};

    struct GameInfo *p1,*p2;
    p1 = &gameArray[0];
    p2 = &gameArray[1];

    printf("\n--게임 출시 정보 ==\n");
    printf("게임 이름 : %s\n", (*p1).name);
    printf("발매 연도 : %d\n", (*p1).year);
    printf("게임 가격 : %d\n", (*p1).price);
    printf("제작 회사 : %s\n", (*p1).company);

    printf("게임 이름 : %s\n", p2->name);
    printf("발매 연도 : %d\n", p2->year);
    printf("게임 가격 : %d\n", p2->price);
    printf("제작 회사 : %s\n", p2->company);
    // struct GameInfo gameArray[2] =
    //     {
    //         {"나도게임", 2022, 50, "나도회사"},
    //         {"너도게임", 2022, 100, "너도회사"}};

    // struct GameInfo *p;
    // p = gameArray;

    // printf("\n--게임 출시 정보 ==\n");
    // printf("게임 이름 : %s\n", p->name);
    // printf("발매 연도 : %d\n", p->year);
    // printf("게임 가격 : %d\n", p->price);
    // printf("제작 회사 : %s\n", p->company);

    return 0;
}