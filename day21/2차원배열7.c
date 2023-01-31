#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *pt = &arr[0];
    int i, total = 0;

    for (i = 0; i <8; i++)
        {
            if(*(pt+i)%2)
            total +=*(pt+i);
        }
    printf("È¦¼öÀÇ ÇÕÀº : %d",total);

    // {
    //     printf("%d", *(pt - i) % 2);
    // }
    return 0;
}
