#include "developer_group.h"
#include <stdio.h>
#include <string.h>


// Initialization function for a developer group
void initialize_developer_group(DeveloperGroup *devg)
{
    // Anzahl Developer ist am Anfang 0
    devg->anzahl_dev = 0;

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
void add_developer_to_group( DeveloperGroup *devg, char *name, char *alias )
{
    // check if group is full
    if( devg->anzahl_dev < MAX_DEVELOPERS )
    {
        strcpy(devg->developers[devg->anzahl_dev].name, name); 
        strcpy(devg->developers[devg->anzahl_dev].alias, alias); 
        devg->anzahl_dev++;
    }
}

// Function to print developers in the group
void print_developers(DeveloperGroup *devg)
{
    int i=0;

    for( i=0; i< devg->anzahl_dev; i++)
    {
        printf( "Developer %d:\n", i+1 );
        printf( "    Name  : %s\n", devg->developers[i].name );
        printf( "    Alias : %s\n", devg->developers[i].alias );
    }
}


void print_logo(DeveloperGroup *devg)
{
    int i = 0;

    for( i=0; i< MAX_LOGO_LINE; i++)
    {
        printf("%s\n", devg->logo[i]);
    }

}
