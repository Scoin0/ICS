/***************************************************************************
//
//    NAME:         
//    HOMEWORK:     Assignment 5
//    CLASS:        ICS 212
//    INSTRUCTOR:   
//    DATE:         Mar 1st, 2020
//    FILE:         driver.c
//    DESCRIPTION:  The driver code to run the program
//
****************************************************************************/

#include "iofunctions.c"
#include <stdio.h>
#include <string.h>

/***************************************************************************
//
//    FUNCTIONNAME: main
//    DESCRIPTION:  The main function that runs the program
//    PARAMETERS:   argc    (int)       : command
//                  *argv   (char [])   : pointer
//
****************************************************************************/

int main(int argc, char *argv[]) 
{
    struct record bankone[5] =  {2, "John", "1598 Lanikai Pl",
                                8515, "Domino", "26 Hoolai St",
                                240, "Kyle", "24 North Kainalu Dr",
                                8008, "Tony", "245 Kuuhale St",
                                25565, "Steve", "Dirt House",};
    int numcustomers;
    int i = 0;

    printf("Writing customer data to file...\n");
    writeFile(bankone, 5, "output.txt");
    printf("Completed!\n");
    readFile(bankone, &numcustomers, "output.txt");
    printf("Reading customer data...\n\n");
    printf("Account Number:\tAccount Name:\tAccount Address:\n");

    for(i = 0; i < numcustomers; i++)
    {
        printf("%-10d\t%-10s\t%s\n", bankone[i].accountno,bankone[i].name,bankone[i].address);
    }

    return 0;
}