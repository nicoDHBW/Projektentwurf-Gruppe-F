#include "developer_group.h"
#include <stdio.h>
#include <string.h>


// Initialization function for a developer group
void initialize_developer_group(DeveloperGroup *devg)
{
    // Number of developers is initially 0
    devg->number_of_dev = 0;

    // initialize logo
    strcpy(devg->logo[0], "/^-----^\\");
    strcpy(devg->logo[1], "V  o o  V");
    strcpy(devg->logo[2], " |  Y  |");
    strcpy(devg->logo[3], "  \\ Q /");
    strcpy(devg->logo[4], "  / - \\");
    strcpy(devg->logo[5], "  |    \\");
    strcpy(devg->logo[6], "  |     \\     )");
    strcpy(devg->logo[7], "  || (___\\====");
    strcpy(devg->logo[8], "");

}

// add developer to group
void add_developer_to_group( DeveloperGroup *devg, const char *name, const char *alias )
{
    // check if group is full
    if( devg->number_of_dev < MAX_DEVELOPERS )
    {
        // check if name and alias are not NULL
        if( name && alias)
        {
            initialize_developer( &(devg->developers[devg->number_of_dev]), name, alias );
            // strcpy(devg->developers[devg->number_of_dev].name, name); 
            // strcpy(devg->developers[devg->number_of_dev].alias, alias); 
            devg->number_of_dev++;
        }
    }
}

// Function to print developers in the group
void print_developers(const DeveloperGroup * const devg)
{
    int i=0;

    for( i=0; i< devg->number_of_dev; i++)
    {
        printf( "Developer %d:\n", i+1 );

        developer_print( &devg->developers[i] );
        //printf( "    Name  : %s\n", devg->developers[i].name );
        //printf( "    Alias : %s\n", devg->developers[i].alias );
    }
}

// Function to print the logo of the developer group
void print_logo(const DeveloperGroup * const devg)
{
    int i = 0;

    for( i=0; i< MAX_LOGO_LINE; i++)
    {
        printf("%s\n", devg->logo[i]);
    }

}
