/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Project 1
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         Mar 15th, 2020
//    FILE:         database.h
//    DESCRIPTION:  This is the header file for database.c
//
****************************************************************************/

#define DATABASE_FUNCTIONS

int addRecord (struct record **, int, char [],char []);
int printRecord (struct record *, int);
void printAllRecords(struct record *);
int modifyRecord (struct record *, int, char []);
int deleteRecord(struct record **, int);
int readFile(struct record **, char []);
int writeFile(struct record *, char []);
void cleanUp(struct record **);