/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Homework 7a
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Mar 24th, 2020
//    FILE:         paint.c
//    DESCRIPTION:  Contains the functions for costOfPainting 
//
****************************************************************************/

#include <stdio.h>
#include "paint.h"

/***************************************************************************
//
//    FUNCTIONNAME: costOfPainting
//    DESCRIPTION:  A recursive function that calculates the cost of a specified
//                  length of road.
//    PARAMETERS:   length    (double) : The length of the road
//    RETURNS:      0                 : The entered number was either 0 or a negitive number
//                  num                : The cost of the road
****************************************************************************/

double costOfPainting(double length)
{
    if (length <= 0)
    {
        return 0;
    }
    
    if (length <= 3.0)
    {
        return 300*length;
    }

    return (50 + (300 * 3)) + costOfPainting(0.7 * (length - 3)) + costOfPainting(0.3 * (length - 3));
}