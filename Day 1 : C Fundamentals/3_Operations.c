/* 
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  @ Topic         : Operations
 *  @ Programmer    : Data, Lirae Que
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#include <stdio.h>

int main(){
    
    /*
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~~
     * @ Arithmetic Operations
     * ->   +   ~ Addition
     * ->   -   ~ Subtraction
     * ->   *   ~ Multiplication
     * ->   /   ~ Division
     * ->   %   ~ Modulo
     * ->   ++  ~ Increment
     * ->   --  ~ Decrement
     * ~~~~~~~~~~~~~~~~~~~~~~~~~~
     */ 

    int first = 120;
    int second = 30; 

    printf("[+] Addition       : %d + %d = %d\n", first, second, (first+second));
    printf("[-] Subtraction    : %d - %d = %d\n", first, second, (first-second));
    printf("[*] Multiplication : %d * %d = %d\n", first, second, (first*second));
    printf("[/] Division       : %d / %d = %d\n\n", first, second, (first/second));
    printf("[%] Division       : %d % %d = %d\n\n", first, second, (first%second));

    /*
     * ~~~~~~~~~~~~~~~~~~~~ 
     * @ Relational Operations
     * ->   ==   ~ Equals
     * ->   <    ~ Less than
     * ->   >    ~ Greater than
     * ->   <=   ~ Less than or equal to
     * ->   >=   ~ Greater than or equal to
     * ~~~~~~~~~~~~~~~~~~~
     */     
    
    int fnum = 10;
    int snum = 5;
    printf("[==] Equals to    : %d == %d : %d\n", fnum, snum, (fnum==snum));
    printf("[< ] Less than    : %d == %d : %d\n", fnum, snum, (fnum<snum));
    printf("[> ] Greater than : %d == %d : %d\n", fnum, snum, (fnum>snum));

    printf("[<=] Less than or Equals to    : %d == %d : %d\n", fnum, snum, (fnum<=snum));
    printf("[>=] Greater than or Equals to : %d == %d : %d\n\n", fnum, snum, (fnum>=snum));

    /*
     * ~~~~~~~~~~~~~~~~~~~~ 
     * @ Logical Operations
     * ->   ||   ~ or
     * ->   &&   ~ and
     * ->   !    ~ not
     * ~~~~~~~~~~~~~~~~~~~
     */ 

    int logic_one = 1;
    int logic_two = 0;

    printf("[||] Logic or  : %d || %d : %d\n",logic_one, logic_two, (logic_one || logic_two));
    printf("[&&] Logic and : %d && %d : %d\n",logic_one, logic_two, (logic_one && logic_two));
    printf("[! ] Logic not : !%d, !%d : %d, %d\n\n",logic_one, logic_two, !logic_one, !logic_two);

    return 0;
}