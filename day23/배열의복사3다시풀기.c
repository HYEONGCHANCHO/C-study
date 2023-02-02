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
        printf("ㅡ ");
    }

   
        char corect[20] = {0}; // 정답을 하나씩 저장할 배열 초기화
                 int k =strlen(save)              ;
        while (k>0)
        {
            printf("\n문자하나를 입력하세요");
            char input;
            scanf("%c", &input);
            getchar();

            for (int i = 0; i < strlen(save); i++) // 문제 길이 만큼 반복
            {
                if (save[i] == input) // 입력한 값이 문제와 같은 문자가 있다면
                {
                    corect[i] = save[i];                        // corect배열에 해당 문자를 저장
                    k--;
                    // printf("정답에%s가 들어갑니다", corect[i]); // 어떤 문자가 맞는지 확인해줌
                }
            }
        }
        // {
        //     break;
        //     return 2;
        // } //
        // }
   
    printf("정답입니다");
    // memcpy(copyword, word[x], sizeof(word[x]));
    return 0;
}