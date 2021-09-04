/* 
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  @ Topic         : Decision Making
 *  @ Programmer    : Data, Lirae Que
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#include <stdio.h>

int main(){

    /*
     * ~~~~~~~~~~~~~~~~~~~~~~~~
     * @ if - else 
     * @ if - else if - else
     * @ switch
     * ~~~~~~~~~~~~~~~~~~~~~~~~
     */

    int first_number = 10;
    int second_number = 5;
    
    /* 
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     *  @ Basic Syntax : if - else
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * 
     *  if (codition){
     *      // Code
     *  } else {
     *      // Code
     *  }
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     */

    // Sample if - else
    // Using relational operators
    // Can only have one condition
    if (first_number == second_number){
        printf("First and Second number are the same!\n");
    } else {
        printf("Bro, they're not the same!\n");
    }

    /* 
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     *  @ Basic Syntax : if - else if - else 
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * 
     *  if (codition){
     *      // Code
     *  } else  if (condition) {
     *      // Code
     *  } else if (condition) {
     *      // Code
     * } ...
     * 
     * else {
     *     // Code 
     * }
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     */

    // Sample if - else if - else 
    // Can have multiple condition
    if (first_number < 0){
        printf("Bro, the number is less than 0!\n");
    } else if (first_number > 0){
        printf("Bro, the number is greater than 0!\n");
    } else {
        printf("Bro the first number is to 0!\n");
    }

    /* 
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     *  @ Basic Syntax : switch 
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * 
     *  switch (value) {
     *      case value: 
     *              // Code 
     *              break;
     *      case value:
     *              // Code
     *              break;
     *      ...
     *      default:
     *              break;
     * 
     *  }
     *  
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     */

    // Sample switch 
    // have multiple case values
    switch(second_number){
        case 1: printf("The second number is 1, right?\n");break;
        case 2: printf("The second number is 2, right?\n");break;
        case 3: printf("The second number is 3, right?\n");break;
        case 4: printf("The second number is 4, right?\n");break;
        case 5: printf("The second number is 5, right?\n");break;
        default:
            pritnf("Bro, I don't know!");
            break;
    }


    // ~~~~~~~~~~~~~~~~~ Nested Decision Making ~~~~~~~~~~~~~~~~~~
    // Condition inside a condition
    if (first_number > 0){
        if (second_number == 5){
            printf("Damn bro!\n");
        } else {
            // Code
        }
    } else {
        // Code
    }

    return 0;
}