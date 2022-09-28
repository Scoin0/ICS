/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Project 2
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Apr 19, 2020
//    FILE:         record.h
//    DESCRIPTION:  Contains the stuct record
//
****************************************************************************/

#ifndef RECORD_H
#define RECORD_H

struct record
{
    int                accountno;
    char               name[25];
    char               address[80];
    struct record*     next;
};

#endif
