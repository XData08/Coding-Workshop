/* 
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  @ Topic         : Guess the Number
 *  @ Programmer    : Data, Lirae Que
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#include <stdio.h>      // Standard Input output
#include <stdlib.h>     // Standard library

int main(){
    
    int secret_number = 23;
    int guess_count = 0, guess;

    system("cls");  // Used to clear the console
    printf("\n\t++---------------------++");
    printf("\n\t||    * GUESS THE *    ||");
    printf("\n\t||    SECRET NUMBER    ||");
    printf("\n\t++---------------------++");
    printf("\n\t||  Developed by Data  ||");
    printf("\n\t++---------------------++\n\n");
    
    // This will cause an infinite loop
    while (1){
        printf("\n\tYour Guess? ");
        scanf("%d", &guess);
        if (guess == secret_number) {
            break;
        } else if (guess < secret_number) {
            printf("\tYour guess is small...\n");
        } else {
            printf("\tYour guess is big...\n");
        }
        guess_count++;
    }

    if (guess_count == 0){
        printf("\n\n\tDamn! you're good at this...\n\n\n");
    } else {
        printf("\n\n\tYou took %d tries!...\n\n\n", guess_count);
    }
    
    return 0;
}