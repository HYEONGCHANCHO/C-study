#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char fname[100];
    int number = 0, count = 0;
    float score = 0;
    float total = 0;
    char name[20];
    FILE *fp;
    printf("����ó�� ���� �̸��� �Է��Ͻÿ� : ");
    scanf("%s", fname);
    fp = fopen(fname, "w");

    if (fp == NULL)
    {
        fprintf(stderr, "��������%s�� �� �� �����ϴ�.\n", fname);
        exit(1);
    }
    while (1)
    {
        printf("�й�, �̸�, ������ �Է��Ͻÿ�: (�����̸� ����)");
        scanf("%d", &number);
        if (number < 0)
            break;
        scanf("%s %f", name, &score);
        total += score;
        count++;
        fprintf(fp, "%d %s %f\n", number, name, score);
    }
    fclose(fp);

    fp = fopen(fname, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "��������%s�� �� �� �����ϴ�.\n", fname);
        exit(1);
    }
    printf("��� = %f\n", (total / count));
    fclose(fp);

    return 0;
}