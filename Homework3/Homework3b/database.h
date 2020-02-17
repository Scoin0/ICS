/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Assignment 3b
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ryan Narayan
//    DATE:         Feb 16th, 2020
//    FILE:         database.h
//    DESCRIPTION:  This is the header file for database.c
//
****************************************************************************/

#include "record.h"

int addRecord (struct record **, int, char [],char []);
int printRecord (struct record *, int);
void printAllRecords(struct record *);
int modifyRecord (struct record *, int, char []);
int deleteRecord(struct record **, int);