#include "developer_group.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char input1[30]; // Buffer for user input
    char action = 0; // Variable to store user action
    int continue_loop = 1; // Flag to control the loop
    DeveloperGroup g;
    
    // Initialize the developer group
    initialize_developer_group( &g );
    // Add developers to the group
    add_developer_to_group( &g, "Nico", "München");
    add_developer_to_group( &g, "Niko", "Ulm");

    while(continue_loop)
    {
        // Printing the menu
        printf("\033[4;92m========================\n");
        printf("Choose your action: \n");
        printf("List Developers \t[1]\n");
        printf("Print Group Logo \t[2]\n");
        printf("Print Group \t\t[3]\n");
        printf("Exit \t\t\t[4]\n");
        printf("========================\033[0m\n");

        // Getting user input
        printf("Enter your selection: ");
        scanf("%s", input1);
        action = input1[0]; // Assigning the first character of input to action

        switch (action)
        {
            case '1':   //print developers' names and aliases
                print_developers( &g );
                break;
            case '2':   //print developer group logo
                print_logo( &g );
                break;
            case '3':   //does case1 and 2 combined
                print_logo( &g );
                print_developers( &g );
                break;
            case '4':   //exits loop and terminates the program
                continue_loop = 0;
                break;
            default:
                printf("That was not a valid input!\n");
                break;
        }
    }
    return 0;
}


