#include <stdio.h>
// int main()
// {
//     int i, j;

//     for (i = 0; i <10; i++)  {
//         for (j=0; j<i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main()
// {
//     int i, j;

//     for (i = 0; i <10; i++)  {
//         for (j=10; j>i; j--){
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;

int main()
{
    int i, j, k;

    for (i = 0; i < 10; i++)
    {
        for (k = 0; k < 10-i; k++)
        {
            printf("%c", ' ');
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
