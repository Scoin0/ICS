
/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Assignment 5
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         Mar 1st, 2020
//    FILE:         iofunctions.c
//    DESCRIPTION:  This file contains the functions for reading and writing
//                  to files.
//
****************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "iofunctions.h"

int readFile(struct record accArray[ ], int* numCust, char fileName[ ])
{
    FILE *filePointer;
    filePointer = fopen(fileName, "r");
    int i = 0;
    struct record rec;
    
    if(filePointer == NULL)
    {
        exit(1);
    }

    while(fscanf(filePointer,"%d %s %80[^\n]", &rec.accountno, rec.name, rec.address) != EOF)
    {
        accArray[*numCust] = rec;
        *numCust = *numCust + 1;
    }
    fclose(filePointer);
    return 0;
}

int writeFile(struct record accArray[ ], int numCust, char fileName[])
{
    FILE *filePointer;
    filePointer = fopen(fileName, "w");
    int i = 0;

    if(filePointer == NULL)
    {
        exit(1);
    }

    for(i = 0; i < numCust; i++)
    {
        fprintf(filePointer, "%d\t%s\t%s\n", accArray[i].accountno,accArray[i].name,accArray[i].address);
    }

    fclose(filePointer);
    return i;
}