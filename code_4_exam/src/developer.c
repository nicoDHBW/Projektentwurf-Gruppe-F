#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "developer.h"

// Initialization function for a developer
void initialize_developer(Developer *dev, const char *name, const char *alias) 
{
    
    // Copy the name into the "name" field of the structure
    strncpy(dev->name, name, sizeof(dev->name)-1);
    dev->name[sizeof(dev->name)-1] = '\0'; // Ensure the name is terminated with null terminator
    
    // Copy the alias into the "alias" field of the structure
    strncpy(dev->alias, alias, sizeof(dev->alias)-1);
    dev->alias[sizeof(dev->alias)-1] = '\0'; // Ensure the alias is terminated with null terminator
}
 
 
 void developer_print(Developer const * const dev)
{
    printf("=====================\n");
    printf("DEVELOPER: \n");
        
    printf("name : %s\n", dev->name);
    printf("alias: %s\n", dev->alias);
    printf("=====================\n");
    
}