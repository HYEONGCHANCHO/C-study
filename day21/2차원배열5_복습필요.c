#include <stdio.h>
int main()
{
    char nation[4][10];
    
    for(int i=0;i<4;i++){
        printf("���� �̸��Է� : \n");
        gets(nation[i]);
    }
    for(int j=3;j>0;j-- ){
        printf("%s\n",nation[j]);
    }



    // char nation[4][20];
    // for(int i=0; i<4;i++){
    //     printf("���� �̸� : ");
    //     gets(nation[i]);
    // }
    // for(int i=4; i>0; i--){
    //     printf("%d��° ������ %s \n", i,nation[i-1]);
    // }




    // char nation[4][8];
    // int i, j;

    // // gets(nation);
    // // printf("%s",nation[0][0]);
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {
    //         printf("�����̸� 4���� : ");
    //         scanf("%s", &nation[i][j]);
    //     }
    // }
    // for (j = 1; j >= 0; j--)
    // {
    //     for (j = 1; j >= 0; j--)
    //     {
    //         printf("%s", nation[i][j]);
    //     }
    // }
    return 0;
}
