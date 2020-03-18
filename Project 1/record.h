/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Project 1
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Mar 15th, 2020
//    FILE:         record.h
//    DESCRIPTION:  Contains the struct record
//
****************************************************************************/

#ifndef RECORD_STRUCT
#define RECORD_STRUCT

struct record
{
    int                accountno;
    char               name[25];
    char               address[80];
    struct record*     next;
};

#endif