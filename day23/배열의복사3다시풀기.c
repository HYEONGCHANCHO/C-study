#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main()
{
    char word[5][15] = {
        "world",
        "heroes",
        "voca",
        "source",
        "korea"};
    char save[20] = " ";
    srand(time(NULL));
    int x = rand() % 5;
    printf("word %s\n", word[x]);
    memcpy(save, word[x], sizeof(word[x]));
    // printf(">> save %s", save);

    for (int i = 0; i < strlen(word[x]); i++)
    {
        printf("�� ");
    }

   
        char corect[20] = {0}; // ������ �ϳ��� ������ �迭 �ʱ�ȭ
                 int k =strlen(save)              ;
        while (k>0)
        {
            printf("\n�����ϳ��� �Է��ϼ���");
            char input;
            scanf("%c", &input);
            getchar();

            for (int i = 0; i < strlen(save); i++) // ���� ���� ��ŭ �ݺ�
            {
                if (save[i] == input) // �Է��� ���� ������ ���� ���ڰ� �ִٸ�
                {
                    corect[i] = save[i];                        // corect�迭�� �ش� ���ڸ� ����
                    k--;
                    // printf("���信%s�� ���ϴ�", corect[i]); // � ���ڰ� �´��� Ȯ������
                }
            }
        }
        // {
        //     break;
        //     return 2;
        // } //
        // }
   
    printf("�����Դϴ�");
    // memcpy(copyword, word[x], sizeof(word[x]));
    return 0;
}