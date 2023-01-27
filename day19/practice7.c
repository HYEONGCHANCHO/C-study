#include<stdio.h>

int num1=10;
void printGlobalValue(){
    printf("%d \n", num1);
}

int main(){
    printf("%d \n", num1);
    num1=20;
    printGlobalValue();
    return 0;
}