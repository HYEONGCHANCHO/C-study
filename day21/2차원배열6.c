#include <stdio.h>
int main()
{
    int array[2][2] = {10,20,30,40};
    printf("%u %u \n",array,array+0);
    printf("%u \n",array+1);
    return 0;
}
