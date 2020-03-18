/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Project 1
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Mar 15th, 2020
//    FILE:         database.c
//    DESCRIPTION:  Holds all of the functions for the database.
//
****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "record.h"
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

int addRecord (struct record **start, int uaccountno, char uname[], char uaddress[]) 
{
    struct record ** temp = start;
    struct record * current;
    struct record * previous;

    current = *temp;
    previous = current;

    if (debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: addRecord();\n");
        printf("Parameters Passed:\n");
        printf("Account Number: %d\n", uaccountno);
        printf("Account Name: %s\n", uname);
        printf("Account Address: %s\n", uaddress);
        printf("*********************************************\n");
    }

    if (*temp == NULL)
    {
        *temp = (struct record *) malloc(sizeof(struct record));
        (*temp)->accountno = uaccountno;
        strcpy(((*temp)->name), uname);
        strcpy(((*temp)->address), uaddress);
        (*temp)->next = NULL;
    }
    else
    {
        if (current == *temp)
        {
            *temp = (struct record *) malloc(sizeof(struct record));
            (*temp)->accountno = uaccountno;
            strcpy(((*temp)->name), uname);
            strcpy(((*temp)->address), uaddress);
            (*temp)->next = current;
        }
        else
        {
            previous->next = (struct record *) malloc(sizeof(struct record));
            (previous)->accountno = uaccountno;
            strcpy(((previous)->name), uname);
            strcpy(((previous)->address), uaddress);
            (previous->next)->next = current;
        }
    }
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

int printRecord (struct record *start, int uaccountno) 
{
    struct record * current;
    int target;

    current = start;
    target = 0;

    if (debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: printRecord();\n");
        printf("Parameters Passed:\n");
        printf("Account Number: %d\n", uaccountno);
        printf("*********************************************\n");
    }

    if (current == NULL)
    {
        printf("\nThe list contains no accounts.\n");
    }

    while (current != NULL)
    {
        if (current->accountno == uaccountno)
        {
            printf("\nAccount Number: %d\nAccount Name: %s\nAccount Address: %s\n", current->accountno, current->name, current->address);
            target = 1;
            return 0;
        }
        current = current->next;
    }

    if (target == 0)
    {
        printf("\nThe account you are trying to print does not exist.\n");
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
    struct record * current;

    current = start;

    if (debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: printAllRecords();\n");
        printf("Parameters Passed:\n");
        printf("NONE\n");
        printf("*********************************************\n");
    }

    if (current == NULL)
    {
        printf("\nThe list contains no accounts.\n");
    }
    else
    {
        while (current != NULL)
        {
            printf("\nAccount Number: %d\nAccount Name: %s\nAccount Address: %s\n", current->accountno, current->name, current->address);
            current = current->next;
        }
    }
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

int modifyRecord (struct record *start, int uaccountno, char uaddress[])
{
    struct record * current;
    int target;

    target = 0;
    current = start;

    if (debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: modifyRecord();\n");
        printf("Parameters Passed:\n");
        printf("Account Number: %d\n", uaccountno);
        printf("Account Address: %s\n", uaddress);
        printf("*********************************************\n");
    }

    if (current == NULL)
    {
        printf("\nThe list contains no accounts.\n");
    }

    while (current != NULL)
    {
        if (uaccountno == current->accountno)
        {
            strcpy(current->address, uaddress);
            target = 1;
        }
        current = current->next;
    }

    if (target == 0)
    {
        printf("\nThe account you are trying to modify does not exist.\n");
    }
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

int deleteRecord (struct record **start, int uaccountno)
{
    struct record * temp;
    struct record * previous;
    struct record * current;
    int target;

    previous = *start;
    current = *start;
    target = 0;
    
    if (debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: deleteRecord();\n");
        printf("Parameters Passed:\n");
        printf("Account Number: %d\n", uaccountno);
        printf("*********************************************\n");
    }

    while (current != NULL)
    {
        if (current == *start)
        {
            if (uaccountno == current->accountno)
            {
                temp = current;
                *start = current->next;
                current = current->next;
                previous = previous->next;
                free(temp);
                target = 1;
            }
            else
            {
                current = current->next;
            }
        }
        else if (uaccountno == current->accountno)
        {
            temp = current;
            previous->next = current->next;
            current = current->next;
            free(temp);
            target = 1;
        }
        else
        {
            previous = previous->next;
            current = current->next;
        }
    }
    
    if (target == 0)
    {
        printf("\nThe account number you are trying to delete does not exist.\n");
    }

    return 0;
}

/***************************************************************************
//
//    FUNCTIONNAME: readFile
//    DESCRIPTION:  Reads the text from the file
//    PARAMETERS:   start     (struct record**) : a double pointer to the start of the record
//                  file      (char [])         : the file path
//
****************************************************************************/

int readFile(struct record **start, char file[])
{
    int uaccountno;
    char uname[25];
    char uaddress[80];
    char line[80];

    int lineNum = 1;

    FILE *filePointer = fopen(file, "r");

    if (debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: readFile();\n");
        printf("Parameters Passed:\n");
        printf("File: %s\n", file);
        printf("*********************************************\n");
    }

    if (filePointer == NULL) 
    {
        FILE *filePointer = fopen(file, "w");
        fprintf(filePointer, ".");
        fclose(filePointer);
        printf("\nNo file found. Creating one now...\n");
        return -1;
    }

    while (!feof(filePointer))
    {
        if (lineNum == 1)
        {
            fgets(line, sizeof(line), filePointer);
            uaccountno = atoi(line);
            lineNum++;
        }
        else if (lineNum == 2)
        {
            fgets(line, sizeof(line), filePointer);
            strcpy(uname, line);
            lineNum++;
        }
        else if (lineNum == 3)
        {
             fgets(line, sizeof(line), filePointer);
             if (line[strlen(line) - 2] != '#')
             {
                 strcpy(uaddress, line);
                 while (line[strlen(line) - 2] != '#')
                 {
                    fgets(line, sizeof(line), filePointer);
                    strcat(uaddress, line);
                 }
                 lineNum++;
             }
             else
             {
                 strcpy(uaddress, line);
                 lineNum++; 
             }
        }
        else
        {
            uname[strlen(uname) - 1] = '\0';
            uaddress[strlen(uaddress) - 2] = uaddress[strlen(uaddress) - 1];
            uaddress[strlen(uaddress) - 2] = '\0';
            lineNum = 1;
            addRecord(start, uaccountno, uname, uaddress);
        }
    }
    fclose(filePointer);
    return 0;
}

/***************************************************************************
//
//    FUNCTIONNAME: writeFile
//    DESCRIPTION:  Writes all saved records to a text file
//    PARAMETERS:   start     (struct record**) : a double pointer to the start of the record
//                  file      (char [])         : the file path
//
****************************************************************************/

int writeFile(struct record *start, char file[])
{
    struct record * temp;
    FILE *filePointer;

    temp = start;
    filePointer = fopen(file, "w");
    
    if (debugMode == 1)
    {
        printf("****************DEBUGMODE********************\n");
        printf("Fuction Called: writeFile();\n");
        printf("Parameters Passed:\n");
        printf("File Name: %s\n", file);
        printf("*********************************************\n");
    }

    while (temp != NULL)
    {
        fprintf(filePointer, "%d\n%s\n%s#\n", temp->accountno, temp->name, temp->address);
        temp = temp->next;
    }
    fclose(filePointer);
    return 0;
}

/***************************************************************************
//
//    FUNCTIONNAME: cleanUp
//    DESCRIPTION:  Releases the heap and destroys all the allocated memory.
//    PARAMETERS:   start     (struct record**) : a double pointer to the start of the record
//
****************************************************************************/

void cleanUp(struct record **start)
{
    if (debugMode == 1)
    {
    printf("****************DEBUGMODE********************\n");
    printf("Fuction Called: cleanUp();\n");
    printf("Parameters Passed:\n");
    printf("NONE\n");
    printf("*********************************************\n");

    printf("Cleaning up...\n");
    }

    if (start != NULL)
    {
        free(*start);
        *start = NULL;
        free(*start);
    }

}