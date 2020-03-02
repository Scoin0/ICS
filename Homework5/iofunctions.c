
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
    
    if(filePointer == NULL)
    {
        exit(1);
    }

    while(fread(&accArray[i++], sizeof(struct record), 1, filePointer));
    *numCust = i;
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
        fwrite(&accArray[i], sizeof(struct record), 1, filePointer);
    }

    fclose(filePointer);
    return 0;
}