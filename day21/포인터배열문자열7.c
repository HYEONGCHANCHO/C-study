#include <stdio.h>
int main()
{
    // char array[3] = {'A', 'B', 'C'};
    int array[3] = {10,20,30};
    printf("%p %p %p ", &array[0], &array[1], &array[2]);
    printf("%u %u %u ", &array[0], &array[1], &array[2]);
    return 0;
}
