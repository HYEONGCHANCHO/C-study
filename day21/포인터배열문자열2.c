#include <stdio.h>
int main()
{
    char name[50];
    int i;
    for(i=0;i<3;i++){
        printf("이름을 입력");
        gets(name);
        printf("%p",name);
        printf("%p",&name);
        printf("%p",&name[0]);
        puts(name);
    }





    // char str[50];
    // int i;
    // for (i = 0; i < 3; i++)
    // {
    //     printf("input :");
    //     gets(str);
    //     printf("   &str   : %p\n,",&str);
    //     printf("   str    : %d\n,",str);
    //     printf("  &str[0] : %p\n,",&str[0]);
    //     printf("  output  : ");
    //     puts(str);
    // }
    return 0;
}