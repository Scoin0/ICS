/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Assignment 5
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Mar 1st, 2020
//    FILE:         iofunctions.h
//    DESCRIPTION:  This is the header file for iofunctions.c
//
****************************************************************************/

#ifndef IOFUCNTIONS_H
#define IOFUNCTIONS_H
#include "record.h"

int readFile(struct record [], int* , char [ ]);
int writeFile(struct record [], int, char [ ]);

#endif