#include <stdio.h>
//��������, ��������
//���������� {������} �ȿ��� ����ǰ� ����ǰ� {}�� ����� �� �Ҹ�ȴ�.
int main()
{   
    int i=0;
    int total=0;
    for(i=1;i<3;i++){
        int total =0;
        total = total+i;
    }
    if(total<10)
    {
        printf("total���� %d �Դϴ�",total);
    }
    return 0;
}
