/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Assignment 5
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ravi Narayan
//    DATE:         Mar 1st, 2020
//    FILE:         record.h
//    DESCRIPTION:  Contains the struct record
//
****************************************************************************/

#ifndef RECORD_H
#define RECORD_H

struct record
{
   int                accountno;
   char               name[25];
   char               address[80];
};

#endif