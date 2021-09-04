/* 
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  @ Topic         : Basic Calculator
 *  @ Programmer    : Data, Lirae Que
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#include <stdio.h>      // Standard input output 
#include <stdlib.h>     // Stardard Library 
#include <conio.h>      // Console input output

int main(){

    int num1, num2, result;
    char choice;

    do {
        system("cls");      // From stdlib, used to clear the console
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~");
        printf("\n\t||  Simple Calculator  ||");
        printf("\n\t||  Developed by Data  ||");
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~");


        printf("\n\n\tEnter First Number: ");
        scanf("%d", &num1);

        fflush(stdin);      // From stdlib, used to clear the user buffer

        printf("\tEnter operation: ");
        scanf(" %c", &choice);

        printf("\tEnter Second Number: ");
        scanf("%d", &num2);

        // Switch statement is used for 
        // Selection of Operations
        switch(choice){
            case '+': result=num1 + num2; break;
            case '-': result=num1 - num2; break;
            case '*': result=num1 * num2; break;
            case '/': result=num1 / num2; break;
            case '%': result=num1 % num2; break;
            default:    
                printf("\n\n\tInvalid Operation\n");
                break;
        }
        
        if (choice=='+' ||choice=='-'||choice=='*'||choice=='/'||choice == '%'){
            printf("\n\tAnswer = %d\n", result);


            // To exit the program 
            printf("\n\n\tPress q to quit: ");
            choice = getch();   // From conio, used to get a character from the user
            if (choice == 'q' || choice == 'Q'){
                break; 
            }
        } 
    } while (1);
    system("cls"); // Clear the console
    printf("\n\n\n\t~~~ * Thank you * ~~~\n\n\n\n");
    
    return 0;
}