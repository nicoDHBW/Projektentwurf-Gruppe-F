#ifndef DEVELOPER_H_
#define DEVELOPER_H_

#define DEVELOPER_MAX_NAME_LENGTH (16U) //16 bc of the longest name in our group
#define ALIAS_MAX_NAME_LENGTH (9U)  //9 bc of the longest alias in the group


// Structure for a developer
typedef struct {
    char name[DEVELOPER_MAX_NAME_LENGTH];  // Name of the developer
    char alias[ALIAS_MAX_NAME_LENGTH];  // Alias of the developer
} Developer;

// Initialization function for a developer
void initialize_developer(Developer *dev, const char *name, const char *alias);

//print the Developer structure to the stdout
void developer_print(Developer const * const dev);

#endif /* DEVELOPER_H_ */