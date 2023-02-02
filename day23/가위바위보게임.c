#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    printf("*****가위 바위 보 게임*****\n");

    while (1)
    {
        printf("\n게임방법 : 가위(1) 바위(2) 보(3) 중에서 선택 | 종료는 0 \n\n");
        int com = rand() % 3, you = 0;
        scanf("%d", &you);
        if(you==0) break;
        char *pr[3] = {"가위", "바위", "보"};
        srand(time(NULL));
        printf("컴퓨터가 선택한 것은 %s\n", pr[com]);
        printf("당신이 선택한 것은 %s\n", pr[you - 1]);
        while (1)
        {

            if (com == 0)
            {
                if (you - 1 == 0)
                {
                    printf("비겼습니다\n");
                    break;
                }
                else if (you - 1 == 1)
                {
                    printf("당신이 이겼습니다\n");
                    break;
                }
                else
                {
                    printf("당신이 졌습니다\n");
                    break;
                }
            }
            else if (com == 1)
            {

                if (you - 1 == 0)
                {
                    printf("당신이 졌습니다\n");
                    break;
                }
                else if (you - 1 == 1)
                {
                    printf("비겼습니다\n");
                    break;
                }
                else
                {
                    printf("당신이 이겼습니다\n");
                    break;
                }
            }
            else
            {

                if (you - 1 == 0)
                {
                    printf("당신이 이겼습니다\n");
                    break;
                }
                else if (you - 1 == 1)
                {
                    printf("당신이 졌습니다\n");
                    break;
                }
                else
                {
                    printf("비겼습니다\n");
                    break;
                }
            }
        }
    }

    printf("게임을 종료합니다\n");
    return 0;
}