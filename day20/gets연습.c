#include <stdio.h>
int main()
{
    int korea[4];
    int i;
    int sum = 0;
    for (i = 0; i < 4; i++)
    {
        printf("ют╥б%d :", (i + 1));
        gets(korea);
        // sum += gets(korea);
    }
    // printf("%d", sum);
    puts(korea);
    return 0;
}