#include <stdio.h>
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        printf("%d번째 숫자 입력 :\n", i + 1);
        scanf("%d", arr + i);
    }
    printf("홀수는 :");
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] % 2)
        {
            printf("%-3d ", arr[i]);
        }
    }
    printf("짝수는 :");
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%-3d ", arr[i]);
        }
    }
    return 0;
}
