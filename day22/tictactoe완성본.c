#include<stdio.h>
void my_table(char board[][3]);
void draw_table(char board[][3]);
int play_game(int player, char board[][3]);
int main(void)
{
  printf("===PLAY A GAME ===\n ");
  char board[3][3];
  my_table(board);
  int quit =0; // 종료여부
  do {
    draw_table(board);
    quit=play_game(0, board);
    printf("Good bye~");
  } while(quit == 0);
return 0;
}
void my_table(char board[][3]){
int i,j;
for(i=0; i<3; i++){
  for(j=0; j<3; j++){
      board[i][j]=' ';
  }
}
}
void draw_table(char board[][3]){
  int i;
  for(i=0; i<3; i++){
   printf("\n--|---|---\n");
   printf(" %c| %c | %c ", board[i][0], board[i][1], board[i][2]);
  }
   printf("\n--|---|---\n");
}
int play_game(int player, char board[][3]){
  int x,y, done=0;
  int count=0;
 while(done !=1){
    if(count >=9) return 1;
    printf("x, y Enter, To quit (-1 -1) :");
    scanf("%d %d",&x, &y ); // 1 2
    if(x == -1 && y == -1) return 1;
    if(board[x][y] !=' '){
      printf("빈공간이 아닙니다. 다시 시도하세요\n");
    } else if(player ==0  ){
      board[x][y] ='X';
      player=1;
      count++;
    } else {
      board[x][y] ='O';
      player=0;
      count++;
    }
    draw_table(board);
 }
}









