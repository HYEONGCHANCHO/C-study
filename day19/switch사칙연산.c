#include <stdio.h>
int main()
{
    char c;
    float f1, f2;
    printf("� ������ �ұ��? (+, -, *, /) :");
    scanf("%c", &c);
    printf("�� ���� �Է°��� : ");
    scanf("%f %f", &f1, &f2);
    switch (c)
    {
    case '+':
        printf("%.2f %c %.2f = %.2f", f1, c, f2, (f1 + f2));
        break;
    case '-':
        printf("%.2f %c %.2f = %.2f", f1, c, f2, (f1 - f2));
        break;
    case '*':
        printf("%.2f %c %.2f = %.2f", f1, c, f2, (f1 * f2));
        break;
    case '/':
        printf("%.2f %c %.2f = %.2f", f1, c, f2, (f1 / f2));
        break;

    default:
        printf("����! �߸��� �������Դϴ�.");
        break;
    }
}