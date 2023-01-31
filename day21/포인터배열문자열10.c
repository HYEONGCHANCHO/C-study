#include <stdio.h>
int main()
{
    // int arr1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // int arr1[3][3] = {11,12,13,14,15,16,17,18,19};
    // int arr1[][3] = {21, 22, 23, 24, 25, 26, 27, 28, 29};
    int arr1[3][3] = {0};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("arr1[%d][%d] = %d\t",i,j,arr1[i][j]);

            printf("\n");
        }
    }
    return 0;
}
