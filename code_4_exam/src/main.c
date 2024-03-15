#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char input1[30]; // Buffer for user input
    char action = 0; // Variable to store user action
    int continue_loop = 1; // Flag to control the loop

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
            case '1':   //print devs names and aliases
                developer_print();
                break;
            case '2':   //print devs group logo
                logo_print();
                break;
            case '3':   //does case1 and 2 combined
                developer_print();
                logo_print();
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


