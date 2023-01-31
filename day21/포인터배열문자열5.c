#include <stdio.h>
int main()
{
    int arr[3] = {87, 99, 80};
    int i, sum = 0, ave = 0;
    for (i = 0; i < 3; i++)
    {
        sum += arr[i];
        ave = sum / 3;
    }
    printf("ÇÕ°è%d Æò±Õ %d", sum, ave);

    return 0;
}
