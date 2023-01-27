#include <stdio.h>
int main()
{
    int x = 10;
    x += 5;
    printf("%d\n", x);
    x -= 3;
    printf("%d\n", x);
    printf("\n--------------------------\n");

    float y = 5;
    y /= 3;
    printf("%f", y);

    printf("\n--------------------------\n");
    int z = 5;
    z %= 3;
    printf("%d\n", z);
    return 0;
}