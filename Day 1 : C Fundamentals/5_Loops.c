/* 
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  @ Topic         : Loops
 *  @ Programmer    : Data, Lirae Que
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#include <stdio.h>

int main(){

    /*
     * ~~~~~~~~~~~~~~~~~~~~~~~~
     * @ for loop
     * @ while loop
     * @ do - while loop
     * ~~~~~~~~~~~~~~~~~~~~~~~~
     */

    /* 
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     *  @ Basic Syntax : for loops
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * 
     *  for (initialization ; condition ; increment || decrement){
     *      // Code
     *  }
     *  
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     */

    // Sample for loops
    // use for specific value iteration
    int number = 10;
    for (int  i=0; i<number; i++){
        printf("[%d] Hello world!\n", i);
    }

    /* 
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     *  @ Basic Syntax : while loops
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * 
     *  while (condition){
     *      // Code
     *  }
     *  
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     */

    // Sample while loop
    // use for unknown value iteration
    // Checks the condition then execute the code first 
    int i = 0;
    while (i< number){
        if (i < 7){
            printf("[%d] Hello!\n", i);
        } else if (i== 9){
            break;      // Exit the loop
        }  else {
            continue;   // Skip an iteration
        }
        i++;
    }

    /* 
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     *  @ Basic Syntax : while loops
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * 
     *  while (condition){
     *      // Code
     *  }
     *  
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
     */

    // Sample while loop
    // Execute the code first then checks the condition
    int i = 0;
    do {
        if (i < 5){
            printf("[%d] Hello!\n", i);
        } else {
            printf("[%d] World!\n", i);
        }
        i++;
    } while (i< number);


    // ~~~~~~~~~~~~~~~~~ Nested Loops ~~~~~~~~~~~~~~~~~~
    // Condition inside a condition
    int row = 10;
    int column = 10;

    // Performs the row of the square
    // Outer loop  
    for (int i=0; i<row ; i++){
        
        // Performs the column of the square
        // Inner loop
        for (int j=0; j<column ; j++){
            printf("* ");
        }
        printf("\n");  // Will print a new line after the inner loop
    }


    return 0;
}