#include <stdio.h>
int main()
{
    char questions[][100] = {
        "1. what is did the C language debut?",
        "2. who is credited with creating c?",
        "3. What is the predecessor of C?"};
    char options[][100] = {
        "1. 1969", "2. 1972", "3. 1975", "4, 1999", "1. Dennis Ritchie", "2. Nikola Tesla", "3. John Carmack", "4.  Coc", "1. Objectiv C", "2. B", "3. C++", "4. C#"};
    char answers[] = {'2', '1', '2'};
    char guess;
    int score = 0;
    int i, j;
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);

    for(i=0;i<numberOfQuestions;i++){
        printf("************************\n");
        printf("%s \n",questions[i]);
        printf("************************\n");
        for(j=i*4;j<i*4+4;j++){
            printf("%s\n",options[j]);
        }
        printf("Guess :");
        scanf("%s",&guess);

        if(answers[i]==guess){
            printf("CORRECT!");
            score++;
        } else {
            printf("WRONG !");
        }

    }
        printf("���� ������ %d/%d",score,numberOfQuestions);

    
    
    
    return 0;
}