/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Assignment 3b
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Feb 16th, 2020
//    FILE:         record.h
//    DESCRIPTION:  Contains the struct record
//
****************************************************************************/

struct record
{
    int                accountno;
    char               name[25];
    char               address[80];
    struct record*     next;
};