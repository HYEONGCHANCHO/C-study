#include <stdio.h>
int main()
{
    int arr[8];
    for (int i = 0; i < 8; i++)
    {
        printf("%d��° ���� �Է� :\n", i + 1);
        scanf("%d", arr + i);
    }
    printf("Ȧ���� :");
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] % 2)
        {
            printf("%-3d ", arr[i]);
        }
    }
    printf("¦���� :");
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%-3d ", arr[i]);
        }
    }
    return 0;
}
