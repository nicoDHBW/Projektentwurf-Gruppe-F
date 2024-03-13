#include "developer.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Initialization function for a developer
void initialize_developer(Developer *const dev, const char *name, const char *alias) 
{
    
    // Copy the name into the "name" field of the structure
    strncpy(dev->name, name, sizeof(dev->name)-1);
    dev->name[sizeof(dev->name)-1] = '\0'; // Ensure the name is terminated with null terminator
    
    // Copy the alias into the "alias" field of the structure
    strncpy(dev->alias, alias, sizeof(dev->alias)-1);
    dev->alias[sizeof(dev->alias)-1] = '\0'; // Ensure the alias is terminated with null terminator
}
 
 
 void developer_print(developer const *const dev)
{
    if (dev == NULL)
    {
        printf("\033[4;33mdeveloper print: invalid data\n\033[0m");
    }
    else
    {
        printf("=====================\n");
        printf("DEVELOPER: \n");
        
        printf("Name: %s\n", dev->name);
        printf("Alias: %u\n", dev->alias);
        printf("=====================\n");
    }
}