#include <stdio.h>
int main()
{
    int array[2][2];
    int i, j;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("array[%d][%d] �� ���� �Է�",i,j);
            scanf("%d",&array[i][j]);
        }
    }

    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("array[%d][%d] = %d\n",i,j,array[i][j]);
        }
    }

    // int array[2][2];
    // int i, j;
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {
    //         printf("������ �Է��ϼ���");
    //         scanf("%d", &array[i][j]);
    //     }
    // }
    // for (i = 0; i < 2; i++)
    // {
    //     for (j = 0; j < 2; j++)
    //     {
    //         printf("%3d",array[i][j]);
    //     }
    // }

    return 0;
}
