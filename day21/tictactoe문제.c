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
    //     //������ ���� -1 -1�Է� �׿��� 1 1 ��ǥ
    // }
    // while(done !=1){
    //     printf("(x,y)��ǥ�� �Է��ϰ� �����(-1,-1) :"); //done�� 1�� �ϴ°� �ϳ� ���� ���������� �ؾ���
    //     scanf("%d %d", &a, &b);

    //     if(a==-1 && b==-1) //��������
    //     if(board[a][b]==' ') //�߸��� ��ġ�Դϴ�.

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
// tic-tac-toe ����
// �ٵ��� �׸���
// player 2��, �����ư��鼭
// 3�� 3�� �ȿ����� ��ǥ�� �Է¹ް���
// ������ �����ϱ� ���ϸ� -1,-1 �Է��ϰ� �ϰų�, �����ϰ��ϴ� ����
// scanf()�� ��ǥ�� �Է¹��� ���� board[3][3]�� ����
// �̹� ������ ��ǥ�� ������ ���� �Է��ϸ� �ȵǰ� �ٸ����� �����ϰ� �ؾ���.
// ���ʰ� �־�� ��. �ٵ� 9���� �����ѻ���� �̰ܼ� ���ʿ����