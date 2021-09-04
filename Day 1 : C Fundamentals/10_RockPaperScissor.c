/* 
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  @ Topic         : Rock Paper Scissor
 *  @ Programmer    : Data, Lirae Que
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

/*
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  Random Number Generator
 *  -> srand()      - random generator function 
 *                    that will affect rand()
 *  -> time(NULL)   - returns a number for every 
 *                    second
 *  -> rand()       - returns a random number
 * ~~~~~~~~~~~~~~~~~~~~~~~~~
 */

int main(){
    int ai_score = 0, my_score = 0;
    int round, guess, random;
    char quit;

    printf("\n\t<<~~<<~~~~~~~~~~~~~~~~~>>~~>>");
    printf("\n\t || ROCK! PAPER! SCISSOR! ||");
    printf("\n\t || * Developed by Data * ||");
    printf("\n\t<<~~<<~~~~~~~~~~~~~~~~~>>~~>>");

    printf("\n\n\tEnter number of rounds? ");
    scanf("%d", &round);

    for (int i=0; i<round; i++){
        srand(time(NULL));
        random = (rand()%3)+1;
        system("cls");

        printf("\n\tRound [#%d]", (i+1));
        printf("\n\t<<~~<<~~~~~~~~~~~~~~~~~>>~~>>");
        printf("\n\t || ROCK! PAPER! SCISSOR! ||");
        printf("\n\t<<~~<<~~~~~~~~~~~~~~~~~>>~~>>");
        printf("\n\t ||    [1]     Rock       ||");
        printf("\n\t ||    [2]     Paper      ||");
        printf("\n\t ||    [3]     Scissor    ||");
        printf("\n\t<<~~<<~~~~~~~~~~~~~~~~~>>~~>>");
        printf("\n\t       Enter choice: ");
        scanf("%d", &guess);

        switch(guess){
            case 1: switch(random){
                case 1: 
                    printf("\n\n\t\t[Rock vs Rock]");
                    printf("\n\t\tIt's a Draw!");
                    break;
                case 2: 
                    printf("\n\n\t\t[Rock vs Paper]");
                    printf("\n\t\tYou Lose! Loser!");
                    my_score++;
                    break;
                case 3: 
                    printf("\n\n\t\t[Rock vs Scissor]");
                    printf("\n\t\tYou Win! Winner!");
                    ai_score++;
                    break;
            };break;
            case 2: switch(random){
                case 1: 
                    printf("\n\n\t\t[Paper vs Rock]");
                    printf("\n\t\tYou Win! Winner!");
                    my_score++;
                    break;
                case 2: 
                    printf("\n\n\t\t[Paper vs Paper]");
                    printf("\n\t\tIt's a Draw!");
                   
                    break;
                case 3: 
                    printf("\n\n\t\t[Paper vs Scissor]");
                    printf("\n\t\tYou Lose! Loser!");
                    ai_score++;
                    break;
            };break;
            case 3: switch(random){
                case 1: 
                    printf("\n\n\t\t[Scissor vs Rock]");
                    printf("\n\t\tYou Lose! Loser!");
                    ai_score++;
                    break;
                case 2: 
                    printf("\n\n\t\t[Scissor vs Paper]");
                    printf("\n\t\tYou Win! Winner!");
                    my_score++;
                    break;
                case 3: 
                    printf("\n\n\t\t[Scissor vs Scissor]");
                    printf("\n\t\tIt's a Draw!");
                    break;
            };break;
            default:
                printf("\n\n\t~~~ Invalid choice ~~~\n");
                break;
        }

        // To exit the program 
        printf("\n\n\t\tPress q to quit: ");
        quit = getch();   // From conio, used to get a character from the user
        if (quit == 'q' || quit == 'Q'){
            break; 
        }
    }

    printf("\n\n\tResult: ");
    printf("\n\t\tMy Score = %d", my_score);
    printf("\n\t\tAI Score = %d", ai_score);
    
    return 0;
}