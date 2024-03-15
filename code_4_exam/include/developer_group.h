#ifndef DEVELOPER_GROUP_H
#define DEVELOPER_GROUP_H

#define MAX_DEVELOPERS 2
#define MAX_LOGO_LENGTH 50

#include "developer.h" // Include the developer structure

// Structure for a group of developers
typedef struct {
    Developer developers[MAX_DEVELOPERS]; // Array of developers
    char logo[MAX_LOGO_LENGTH];           // Group logo
} DeveloperGroup;

// Initialization function for a developer group
void initialize_developer_group(DeveloperGroup *group, char *logo);

// Function to print developers in the group
void print_developers(DeveloperGroup group);


#endif /* DEVELOPER_GROUP_H */