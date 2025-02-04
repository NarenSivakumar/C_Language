#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    char Questions[][111] = { "1. Who is the Prime Minister of India?",
                              "2. What is the name of Tanjore Temple?",
                              "3. Who was invented Current?\n" };
       
    char Options[][111] = { "A. Narendra Modi", "B. Rajiv Gandhi", "C. Jawaharlal Nehru", "D.Indira Gandhi",
                            "A. Meenakshi Temple", "B. Brihadeeswarar Temple", "C. Rameswaram Temple", "D.Thiruchendur Temple",
                            "A. Benjamin Franklin", "B. Michael Faraday", "C. Alessandro Volta", " D. Nikola Tesla" };


    char Answer[3] = { 'A', 'B', 'D'};
    
    int numberofQuestions  = sizeof(Questions)/sizeof(Questions[0]);

    char Guess; 
    int Score = 0; // Initialize the score to '0'

    printf("QUIZ GAME\n");

    for(int i = 0; i < numberofQuestions; i++)
    {
        printf("******************\n");
        printf("%s\n",Questions[i]);
        printf("******************\n");

        for(int j = 0 ; j < 4 ; j++)
        {
             printf("%s\n", Options[i * 4 + j]); // Give the condition the crctly
        }

        printf("Guess: ");
        scanf(" %c", &Guess); // User - input, give space before %c

        Guess = toupper(Guess);

        if(Guess == Answer[i])
        {
            printf("CORRECT!\n");
            Score++;
        }
        else{
            printf("OOPS! WRONG ONE\n");
        }
    }  
    printf("******************************\n"); 
    printf("Final Score : %d/%d \n", Score, numberofQuestions);
    printf("******************************\n");
    return 0;
}
