// #include<stdio.h>
// void myF(int num[5]){
//     for(int i=0; i<5; i++)
// {
//     printf("%d \n",num[i]);
// }

// }
// int main(){
//     int num[5]={10,20,30,40,50};
//     myF(num);
// }
#include<stdio.h>
void myF(int num[]){
    for(int i=0; i<5; i++){
        printf("%d \n",num[i]);
    }

}
int main(){
    int num[5] = {10,20,30,40,50};
    myF(num);
    return 0;
}