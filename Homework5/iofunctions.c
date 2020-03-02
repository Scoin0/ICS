
/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Assignment 5
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Mar 1st, 2020
//    FILE:         iofunctions.c
//    DESCRIPTION:  This file contains the functions for reading and writing
//                  to files.
//
****************************************************************************/

#include <stdio.h>
#include "iofunctions.h"

/***************************************************************************
//
//    FUNCTIONNAME: readFile
//    DESCRIPTION:  Read data from a file
//    PARAMETERS:   accArray  (struct record)   : an array for struct record
//                  numCust   (int*)            : a pointer to the number of customers
//                  fileName  (char[])          : the file name
//
****************************************************************************/

int readFile(struct record accArray[ ], int* numCust, char fileName[ ])
{
    struct record rec;
    FILE *filePointer;
    filePointer = fopen(fileName, "r");
    
    if(filePointer == NULL)
    {
        return 0;
    }

    while(fscanf(filePointer,"%d %s %80[^\n]", &rec.accountno, rec.name, rec.address) != EOF)
    {
        accArray[*numCust] = rec;
        *numCust = *numCust + 1;
    }
    fclose(filePointer);
    return 0;
}

/***************************************************************************
//
//    FUNCTIONNAME: writeFile
//    DESCRIPTION:  Writes data to a file
//    PARAMETERS:   accArray  (struct record)   : an array for struct record
//                  numCust   (int)             : the amount of customers
//                  fileName  (char[])          : the file name
//
****************************************************************************/

int writeFile(struct record accArray[ ], int numCust, char fileName[])
{
    int i = 0;
    FILE *filePointer;
    filePointer = fopen(fileName, "w");

    if(filePointer == NULL)
    {
        return 0;
    }

    for(i = 0; i < numCust; i++)
    {
        fprintf(filePointer, "%d %s %s\n", accArray[i].accountno,accArray[i].name,accArray[i].address);
    }

    fclose(filePointer);
    return i;
}