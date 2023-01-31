#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
void draw_table();

int main()
{
    int i;
    char board[3][3] = {0};
    for(i=0; i<3;i++){
        printf("---|---|---\n");
        printf(" %c | %c | %c \n", board[i][0],board[i][1],board[i][2]);
    }
        printf("---|---|---\n");

    // do{}while (quit==0)
    // {
    //     //게임을 중지 -1 -1입력 그외의 1 1 좌표
    // }
    // while(done !=1){
    //     printf("(x,y)좌표를 입력하고 종료시(-1,-1) :"); //done을 1로 하는거 하나 만들어서 빠져나가게 해야함
    //     scanf("%d %d", &a, &b);

    //     if(a==-1 && b==-1) //게임종료
    //     if(board[a][b]==' ') //잘못된 위치입니다.

    //     if(player ==0) board[a][b]='x'
    //     else board[a][b]='o'

    // }

    void draw_table()
    {
        printf("%c |%c |%c ", board[0][0], board[0][1], board[0][2]);
        printf("\n--|---|--\n");
        printf("%c |%c |%c ", board[1][0], board[1][1], board[1][2]);
        printf("\n--|---|--\n");
        printf("%c |%c |%c ", board[2][0], board[2][1], board[2][1]);
    }

    return 0;
}
// tic-tac-toe 게임
// 바둑판 그리기
// player 2명, 번갈아가면서
// 3행 3열 안에서만 좌표를 입력받게함
// 게임을 중지하기 원하면 -1,-1 입력하게 하거나, 중지하게하는 질문
// scanf()로 좌표를 입력받은 것을 board[3][3]에 저장
// 이미 선택한 좌표가 있으면 값을 입력하면 안되고 다른곳을 선택하게 해야함.
// 위너가 있어야 함. 근데 9개라 먼저한사람이 이겨서 할필요없음