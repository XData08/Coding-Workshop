/* 
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  @ Topic         : Data Types
 *  @ Programmer    : Data, Lirae Que
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#include <stdio.h>

int main(){

    // Declaration
    int     Number;                     // Can only store numbers
    float   Decimal;                    // Can only store decimals
    char    Character;                  // Can only store Symbols

    // Assignment
    Number      = 10;
    Decimal     = 23.12;
    Character   = 'a';

    // Initialization 
    char Words[] = "Hello, World!";     // Can only store string

    printf("Number variable has a value of = %d\n", Number);
    printf("Decimal variable has a value of = %.2f\n", Decimal);
    printf("Character variable has a value of = %c\n\n", Character);
    printf("%s\n\n", Words);
    
    return 0;
}