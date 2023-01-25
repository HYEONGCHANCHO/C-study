#include<stdio.h>
int main(){
    printf("%d,%d,%d\n" ,1,20,300);
    printf("%3d,%3d,%3d\n" ,1,20,300);
    //출력시 오른쪽 정렬
    printf("%03d,%03d,%03d\n" ,1,20,300);
    printf("%-3d,%-3d,%-3d\n" ,1,20,300);
    printf("%-3d,%-3d,%-3d\n" ,1,-20,-300);
    printf("%-3d,%-3d,%-3d\n" ,1,+20,-300);
    printf("%+3d,%+3d,%+3d\n" ,1,+20,-300);
    //출력시 +,- 기호와 오른쪽 정렬
    return 0;
}