#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("*****���� ���� �� ����*****\n");

    while (1)
    {
        printf("\n���ӹ�� : ����(1) ����(2) ��(3) �߿��� ���� | ����� 0 \n\n");
        int com = rand() % 3, you = 0;
        scanf("%d", &you);
        if(you==0) break;
        char *pr[3] = {"����", "����", "��"};
        srand(time(NULL));
        printf("��ǻ�Ͱ� ������ ���� %s\n", pr[com]);
        printf("����� ������ ���� %s\n", pr[you - 1]);
    
            if (com == 0)
            {
                if (you - 1 == 0)
                {
                    printf("�����ϴ�\n");
                    
                }
                else if (you - 1 == 1)
                {
                    printf("����� �̰���ϴ�\n");
                    
                }
                else
                {
                    printf("����� �����ϴ�\n");
                    
                }
            }
            else if (com == 1)
            {

                if (you - 1 == 0)
                {
                    printf("����� �����ϴ�\n");
                    
                }
                else if (you - 1 == 1)
                {
                    printf("�����ϴ�\n");
                    
                }
                else
                {
                    printf("����� �̰���ϴ�\n");
                    
                }
            }
            else
            {

                if (you - 1 == 0)
                {
                    printf("����� �̰���ϴ�\n");
                    
                }
                else if (you - 1 == 1)
                {
                    printf("����� �����ϴ�\n");
                    
                }
                else
                {
                    printf("�����ϴ�\n");
                    
                }
            }
        
    }

    printf("������ �����մϴ�\n");
    return 0;
}