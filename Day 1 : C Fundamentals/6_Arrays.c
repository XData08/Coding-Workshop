/* 
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 *  @ Topic         : Arrays
 *  @ Programmer    : Data, Lirae Que
 * ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
 */

#include <stdio.h>

int main(){

    // Array is just another data type
    // It stores multiple value depending on the size
    
    int size = 5;       // Declare a size for the array
    int array[size];    // Declare an array and assign a size

    // Assign values to the array
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;

    printf("Array Element at index[0] : %d\n", array[0]);
    printf("Array Element at index[1] : %d\n", array[1]);
    printf("Array Element at index[2] : %d\n", array[2]);
    printf("Array Element at index[3] : %d\n", array[3]);
    printf("Array Element at index[4] : %d\n", array[4]);

    int size = 10;
    int array[size] = {10, 20,30, 40,50, 60, 70, 80, 90, 100};  

    for (int i=0; i<size; i++){
        printf("Index [%d] : %d\n", i, array[i]);
    }
    

    return 0;
}