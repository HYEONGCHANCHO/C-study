#include <stdio.h>
int main()
{
    char c;
    float f1, f2;
    printf("어떤 연산을 할까요? (+, -, *, /) :");
    scanf("%c", &c);
    printf("두 개의 입력값은 : ");
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
        printf("에러! 잘못된 연산자입니다.");
        break;
    }
}