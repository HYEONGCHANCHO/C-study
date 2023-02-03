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
    a1.name = "한글게임";
    a1.year = 2023;

    GAME_INFO a2;
    a2.name="한자게임";
    a2.year=2024;

    printf("--게임 출시 정보--\n");
    printf("게임이름 : %s\n",a1.name);
    printf("출시연도 : %d\n",a1.year);
    printf("게임이름 : %s\n",a2.name);
    printf("출시연도 : %d\n",a2.year);

    return 0;
}