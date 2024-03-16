#ifndef DEVELOPER_GROUP_H
#define DEVELOPER_GROUP_H

#define MAX_DEVELOPERS 2
#define MAX_LOGO_LENGTH_LINE 10
#define MAX_LOGO_LENGTH_COLUMN 20


#include "developer.h" // Include the developer structure

// Structure for a group of developers
typedef struct {
    Developer developers[MAX_DEVELOPERS]; // Array of developers
    char logo[MAX_LOGO_LENGTH_LINE][MAX_LOGO_LENGTH_COLUMN];           // Matrix for Group logo
} DeveloperGroup;

// Initialization function for a developer group
void initialize_developer_group(DeveloperGroup *devg, char *logo);

// Function to print developers in the group
void print_developers(DeveloperGroup *devg);


#endif /* DEVELOPER_GROUP_H */