/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Assignment 3b
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Feb 16th, 2020
//    FILE:         database.c
//    DESCRIPTION:  Holds the database functions
//                  
****************************************************************************/

#include <stdio.h>
#include "database.h"
extern int debugMode;

/***************************************************************************
//
//    FUNCTIONNAME: addRecord
//    DESCRIPTION:  Adds a new record to the database
//    PARAMETERS:   start     (struct record**) : a double pointer to the start of the record
//                  accountno (int)             : account number added by the user
//                  name      (char[])          : account name added by the user
//                  address   (char[])          : account address added by the user
//
****************************************************************************/

int addRecord (struct record **start, int accountno, char name[], char address[]) 
{

    if (debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: addRecord();\n");
        printf("Parameters Passed:\n");
        printf("Account Number: %d\n", accountno);
        printf("Account Name: %s\n", name);
        printf("Account Address: %s\n", address);
        printf("*********************************************\n");
    }

    printf("Record added.\n");

    return 0;
}

/***************************************************************************
//
//    FUNCTIONNAME: printRecord
//    DESCRIPTION:  Prints a record from the given account number
//    PARAMETERS:   start     (struct record*)  : a pointer to the start of the record
//                  accountno (int)             : account number added by the user
//
****************************************************************************/

int printRecord (struct record *start, int accountno) 
{
    printf("Print Record\n");

    if (debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: printRecord();\n");
        printf("Parameters Passed:\n");
        printf("Account Number: %d\n", accountno);
        printf("*********************************************\n");
    }

    return 0;
}

/***************************************************************************
//
//    FUNCTIONNAME: printAllRecords
//    DESCRIPTION:  Prints all the records in the database
//    PARAMETERS:   start     (struct record*) : a pointer to the start of the record
//
****************************************************************************/

void printAllRecords (struct record *start)
{
    if (debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: addRecord();\n");
        printf("Parameters Passed:\n");
        printf("NONE\n");
        printf("*********************************************\n");
    }

    printf("Print All Records\n");
}

/***************************************************************************
//
//    FUNCTIONNAME: modifyRecord
//    DESCRIPTION:  Modifies the address of the record based on account number
//    PARAMETERS:   start     (struct record*)  : a pointer to the start of the record
//                  accountno (int)             : account number added by the user
//                  address   (char[])          : account address added by the user
//
****************************************************************************/

int modifyRecord (struct record *start, int accountno, char address[])
{
    if (debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: modifyRecord();\n");
        printf("Parameters Passed:\n");
        printf("Account Number: %d\n", accountno);
        printf("Account Address: %s\n", address);
        printf("*********************************************\n");
    }

    printf("Record Modified\n");

    return 0;
}

/***************************************************************************
//
//    FUNCTIONNAME: deleteRecord
//    DESCRIPTION:  Deletes a record based on the account number given
//    PARAMETERS:   start     (struct record**) : a double pointer to the start of the record
//                  accountno (int)             : account number added by the user
//
****************************************************************************/

int deleteRecord (struct record **start, int accountno)
{
    
    if (debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: deleteRecord();\n");
        printf("Parameters Passed:\n");
        printf("Account Number: %d\n", accountno);;
        printf("*********************************************\n");
    }

    printf("Record Deleted\n");

    return 0;
}