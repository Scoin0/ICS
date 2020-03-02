/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Assignment 5
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Mar 1st, 2020
//    FILE:         database.h
//    DESCRIPTION:  This is the header file for iofunctions.c
//
****************************************************************************/

#include "record.h"

int readFile(struct record accarray[ ], int* numcust, char filename[ ]);
int writeFile(struct record accarray[ ], int numcust, char filename[ ]);