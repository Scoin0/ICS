/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Homework 7a
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Mar 24th, 2020
//    FILE:         driver.c
//    DESCRIPTION:  The driver code for homework 7a
//
****************************************************************************/

#include <stdio.h>
#include "paint.h"

/***************************************************************************
//
//    FUNCTIONNAME: main
//    DESCRIPTION:  The main function that runs the program
//    PARAMETERS:   argc    (int)       : command
//                  *argv   (char [])   : pointer
//
****************************************************************************/

int main (int argc, char *argv[])
{
    double length[3] = {3, 13, -3};
    double recursion[3];
    recursion[0] = costOfPainting(length[0]);
    recursion[1] = costOfPainting(length[1]);
    recursion[2] = costOfPainting(length[2]);

    printf("This program shows the cost of a specified length of road.\n");
    printf("If the road length is 0 or a negitive number, it prints 0 as no work can be done.\n\n");
    printf("The length of the first road is: %0.0f\n", length[0]);
    printf("The cost for this road is: $%0.2f\n\n", recursion[0]);

    printf("The length of the second road is: %0.0f\n", length[1]);
    printf("The cost for this road is: $%0.2f\n\n", recursion[1]);

    printf("The length of the third road is: %0.0f\n", length[2]);
    printf("The cost for this road is: $%0.2f\n\n", recursion[2]);
    return 0;
}