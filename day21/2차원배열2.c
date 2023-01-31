#include <stdio.h>
int main()
{
    int arr1[4][3] = {{1, 2}, {3}, {4}, {5}};
    int arr2[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10}};
    
    printf("%d %d %d \n",arr1[0][0],arr1[0][1],arr1[0][2]);
    printf("%d %d %d \n",arr1[1][0],arr1[1][1],arr1[1][2]);
    printf("%d %d %d \n",arr1[2][0],arr1[2][1],arr1[2][2]);
    printf("%d %d %d \n",arr1[3][0],arr1[3][1],arr1[3][2]);
    return 0;
}
