#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    char fname[100];
    int number, score, count;
    // float score = 0;
    int total = 0;
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
    fgets(score,count,fp);
    total += score;
    // printf("%s",name);

    printf("��� = %f\n", total / count);
    fclose(fp);
    // fgets()
    // // ���Ͽ��� ������ �о ����� ���Ѵ�.
    // // �Է�
    // {
    //     // �Է�
    //     total += score;
    //     count++;
    // }
    // // �Է�
    return 0;
}