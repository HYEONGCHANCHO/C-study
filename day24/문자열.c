#include <stdio.h>
int main()
{
    char s[80];

    printf("���ڿ��� �Է��Ͻÿ� :");
    scanf("%[abc]", s); //�Է��� abc�θ� �ްڴ�
    scanf("%[yn]", s); //�Է��� abc�θ� �ްڴ�

    printf("�Էµ� ���ڿ�=%s\n", s);

    return 0;
}