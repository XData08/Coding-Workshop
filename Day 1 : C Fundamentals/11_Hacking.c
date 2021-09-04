#include <stdio.h>      // Standard input output
#include <stdlib.h>     // Standard library
#include <conio.h>      // Console input output
#include <unistd.h>     // Unix standard

int main(){

    char name[100];
    system("cls");      // Used to clear the console
    printf("\n\n\n\t===================================");
    printf("\n\n\t  Enter name to be hacked: ");
    scanf("%s", name);

    printf("\n\t===================================");
    printf("\n\n\n");
    for (int i=0; i<=100; i++){
        if (i%20==0){
            sleep(1);   // Delay 1 second
            system("color 2"); // Change the color into green
            printf("\t    Hacking %s [%3d%]\n", name, i);
        } 
    }
    sleep(3);           // Delay 3 seconds
    system("color 4");  // change the color into red
    printf("\n\n\n\t===================================");
    printf("\n\t      Hacking %s Successful...", name);
    printf("\n\t===================================\n\n\n");

    return 0;
}