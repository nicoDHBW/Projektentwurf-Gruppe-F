#ifndef DEVELOPER_GROUP_H
#define DEVELOPER_GROUP_H

#define MAX_DEVELOPERS 5
#define MAX_LOGO_LINE 10
#define MAX_LOGO_COLUMN 20


#include "developer.h" // Include the developer structure

// Structure for a group of developers
typedef struct {
    Developer developers[MAX_DEVELOPERS]; // Array of developers
    char logo[MAX_LOGO_LINE][MAX_LOGO_COLUMN];           // Matrix for Group logo
    int  anzahl_dev;
} DeveloperGroup;

// Initialization function for a developer group
void initialize_developer_group(DeveloperGroup *devg);

// add developer to group
void add_developer_to_group( DeveloperGroup *devg, char *name, char *alias );

// Function to print developers in the group
void print_developers(DeveloperGroup *devg);

// Function to print logo of the group
void print_logo(DeveloperGroup *devg);


#endif /* DEVELOPER_GROUP_H */