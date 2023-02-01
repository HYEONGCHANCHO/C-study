#include <stdio.h>
void table(char board[][3]);
void draw_table(char board[][3]);
int play(int player, char board[][3]);

int main()
{
    printf("===PLAY A GAME===\n");
    char board[3][3];
    table(board);
    int quit = 0;
    do
    {

        draw_table(board);
        quit = play(0, board); // Ʋ���κ� ȣ���� ���� �ڷ����� ���� �ʴ´�
        printf("bye~");
    } while (quit == 0);

    return 0;
}
void table(char board[][3])
{
    int i, j;
    // char board[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}

void draw_table(char board[][3])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        printf("\n--|---|---\n");
        printf(" %c| %c | %c", board[i][0], board[i][1], board[i][2]);
    }
    printf("\n--|---|---\n");
}

int play(int player, char board[3][3])
{
    while (1)
    {

        int x, y, count = 0;
        int player;
        if (count >= 9)
        {
            return 1;
        }

        printf("x,y��ǥ �� �Է� :   (���� ������ : -1 -1)");
        scanf("%d %d", &x, &y);

        if (x == -1 && y == -1)
        {
            return 1;
        }

        if (board[x][y] != ' ')
        {
            printf("�̹� ���� �ֽ��ϴ�. �ٽ� �����ϼ���\n");
        }
        else if (player == 0)
        {
            board[x][y] = 'X';
            player = 1;
            count++;
        }
        else
        {
            board[x][y] = 'O';
            player = 0;
            count++;
        }
        draw_table(board);
    }
}