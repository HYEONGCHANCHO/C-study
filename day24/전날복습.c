#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(){
    // FILE *fp = fopen("demo.txt","w");
    // fprintf(fp, "Learning C Language");
    // fclose(fp);

    FILE *fp;
    fp = fopen("Hello.txt","w");
    fprintf(fp,"Hellow, world");
    fclose(fp);

    return 0;
}