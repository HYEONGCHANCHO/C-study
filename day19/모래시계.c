// #include <stdio.h>

// int main()
// {
//     int i, j, k;
//     for(i=5; i>=1; i--)
//     {
//         for(j=i; j>=1; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }

//     for(i=2; i<=5; i++)
//     {
//         for(j=i; j>=1; j--)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int i, j, k, n = 5;
//     for (i = 1; i <= n; i++)
//     {
//         for (j = i; j < n; j++)
//         {
//             printf(" ");
//         }
//         for (k = 1; k < (i * 2); k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     for (i = n - 1; i >= 1; i--)
//     {
//         for (j = n; j > i; j--)
//         {
//             printf(" ");
//         }
//         for (k = 1; k < (i * 2); k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 10; j > i; j--)
        {
            printf(" ");
        }
        for (k = 1; k < i * 2; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (k = 18; k > i * 2; k--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}