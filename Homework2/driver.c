/***************************************************************************
//
//    NAME:         John Lewis
//    HOMEWORK:     Assignment 2b
//    CLASS:        ICS 212
//    INSTRUCTOR:   Ryan Narayan
//    DATE:         Feb 4th, 2020
//    FILE:         driver.c
//    DESCRIPTION:  This is the driver used to test halfstring.c
//                  
****************************************************************************/

#include <stdio.h>
#include "halfstring.c"

int main(int argc, char *argv[])
{

    char inputString[32];
    char outputString[32] = "";
    int i = 0;

    printf("This program replaces every other character in a string with the next character ahead of it.\n");
    printf("Please enter a string: ");
    fgets(inputString, 32, stdin);
    
    printf("The string you entered was: %s", inputString);
    halfString(inputString, outputString);
    printf("The edited string came out as: ");

    while (outputString[i] != '\0') 
    {
        printf("%c", outputString[i]);
        i++;
    }

    printf("\n");

    return 0;
}