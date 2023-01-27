#include <stdio.h>
int main()
{
    int yy, mm, dd;
    scanf("%04d %02d %02d", &yy, &mm, &dd);
    printf("%04d.%02d.%02d", yy, mm, dd);
    return 0;
}