#include <stdio.h>
int main()
{
    int arr1[3]={1,2,3};
    int arr2[3]={'A','B','C'};
    printf("%x %x %x \n",&arr1[0],&arr1[1],&arr1[2]);
    printf("%x %x %x \n",&arr2[0],&arr2[1],&arr2[2]);
    return 0;
}
