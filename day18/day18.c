#include <stdio.h>
int main()
{
    char name[256];
    printf("name?\n");
    scanf_s("%s", name, sizeof(name));
    int age;
    printf("age?\n");
    scanf_s("%d", &age);
    float weight;
    printf("weight?\n");
    scanf_s("%f", &weight);
    double height;
    printf("height?\n");
    scanf_s("%lf", &height);
    char what[256];
    printf("crime?\n");
    scanf_s("%s", what, sizeof(what));

    printf("\n\n ---information --- \n\n");
    printf("name : %s\n", name);
    printf("age : %d\n", age);
    printf("weight : %.2f\n", weight);
    printf("height : %.2lf\n", height);
    printf("crime : %s\n", what);

    return 0;
}